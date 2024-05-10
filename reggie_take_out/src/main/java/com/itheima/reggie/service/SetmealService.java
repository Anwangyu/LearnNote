package com.itheima.reggie.service;

import com.baomidou.mybatisplus.extension.service.IService;
import com.itheima.reggie.dto.SetmealDto;
import com.itheima.reggie.entity.Setmeal;
import org.springframework.transaction.annotation.Transactional;

import java.util.List;

public interface SetmealService extends IService<Setmeal> {
    /*
    * 新增套餐 同时需要保存套餐和菜品的关联关系
    * */

    public void saveWithDish(SetmealDto setmealDto);

    /*删除套餐 同时需要删除其关联菜品*/
    public boolean removeWithDish(List<Long> ids);

    void updateStatus(Integer status, List<Long> ids);

    SetmealDto getByIdWithDish(Long id);

    @Transactional
    void updateWithDish(SetmealDto setmealDto);
}
