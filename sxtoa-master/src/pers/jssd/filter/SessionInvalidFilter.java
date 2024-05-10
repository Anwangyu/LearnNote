package pers.jssd.filter;

import javax.servlet.*;
import javax.servlet.annotation.WebFilter;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;
import javax.servlet.http.HttpSession;
import java.io.IOException;

/**
 * 用来检测用户客户端session是否失效的过滤器, 如果session失效, 需要用户重新登录
 *
 */
@WebFilter(filterName = "SessionInvalidFilter")
public class SessionInvalidFilter implements Filter {

    private String[] ignores;
    private String[] webRes;

    @Override
    public void init(FilterConfig filterConfig) throws ServletException {
        String ignore = filterConfig.getInitParameter("ignore");
        if (ignore != null && !"".equals(ignore.trim())) {
            ignores = ignore.split(",");
        }

        String webResStr = filterConfig.getInitParameter("webResource");
        if (webResStr != null && !"".equals(webResStr.trim())) {
            webRes = webResStr.split(",");
        }
    }

    public void doFilter(ServletRequest req, ServletResponse resp, FilterChain chain) throws ServletException, IOException {
        HttpServletRequest hsq = (HttpServletRequest) req;
        HttpSession session = hsq.getSession();
        if (session.getAttribute("currUser") == null) {
            if (hsq.getRequestURI().contains("employeeServlet") && "login".equals(hsq.getParameter("method"))) {
                chain.doFilter(req, resp);
            } else if (isIgnore(hsq) || isWebResource(hsq)) {
                chain.doFilter(req, resp);
            } else {
                ((HttpServletResponse) resp).sendRedirect(hsq.getContextPath() + "/system/login.jsp");
            }
        } else {
            chain.doFilter(req, resp);
        }
    }

    //过滤跳过
//@Override
//public void doFilter(ServletRequest request,
//                     ServletResponse response, FilterChain chain)
//        throws IOException, ServletException {
//    HttpServletRequest httprequest = (HttpServletRequest) request;
//    HttpServletResponse httpresponse = (HttpServletResponse) response;
//
//    // 获取请求的路径和查询字符串
//    String uri = httprequest.getRequestURI();
//    String qs = httprequest.getQueryString();
//
//    // 判断是否是需要排除在外的资源
//    boolean excludeResource = uri.contains("login.jsp") || uri.contains("register.jsp") || uri.contains("index.jsp")
//            || (qs != null && (qs.contains("login") || qs.contains("register") || qs.contains("checkUserId")));
//
//    if (excludeResource) {
//        // 如果是需要排除的资源，直接放行
//        chain.doFilter(request, response);
//    } else {
//        // 判断用户是否登录
//        Object user = httprequest.getSession().getAttribute("user");
//        if (user != null) {
//            // 用户已登录，允许访问下一个页面
//            chain.doFilter(request, response);
//        } else {
//            // 用户未登录，继续访问下一个页面（不跳转到登录页面）
//            // 注意：这里是修改的地方，去掉了重定向到登录页面的逻辑
//            chain.doFilter(request, response);
//        }
//    }
//}



    @Override
    public void destroy() {

    }

    /**
     * 配置过滤忽略的资源
     *
     * @param req HttpServlet请求
     * @return true则需要忽略此资源, false则不需要忽略
     */
    private boolean isWebResource(HttpServletRequest req) {
        String requestURI = req.getRequestURI();
        for (String s : webRes) {
            if (requestURI.contains(s)) {
                return true;
            }
        }
        return false;
    }

    /**
     * 配置过滤忽略的路径资源
     *
     * @param req HttpServlet请求
     * @return true则需要忽略此资源, false则不需要忽略
     */
    private boolean isIgnore(HttpServletRequest req) {
        String requestURI = req.getRequestURI();
        if (ignores == null) {
            return false;
        }
        for (String s : ignores) {
            if (requestURI.contains(s)) {
                return true;
            }
        }
        return false;
    }
}
