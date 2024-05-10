package com.itheima.reggie.common;


/*
* ThreadLocal封装工具  用户保存和获取当前用户ID
* */
public class BaseContext {
    private static  ThreadLocal<Long> threadLocal = new ThreadLocal<>();

    public static void setCurrentId(Long id){
        threadLocal.set(id);
    }

    public static Long getCurrentId(){
        return threadLocal.get();
    }
}
