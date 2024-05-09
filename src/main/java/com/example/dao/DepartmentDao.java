package com.example.dao;

import com.example.pojo.Department;
import org.springframework.context.annotation.Configuration;
import org.springframework.stereotype.Component;

import java.util.Collection;
import java.util.HashMap;
import java.util.Map;

@Component
public class DepartmentDao {
    private static Map<Integer, Department> departments=null;
    static {
        departments = new HashMap<Integer,Department>();

        departments.put(101,new Department(101,"学习"));
    }
    //获得所有部分信息
    public Collection<Department> getDepartment(){
        return departments.values();
    }
    public Department getDepartmentById(Integer id){
        return departments.get(id);
    }

}
