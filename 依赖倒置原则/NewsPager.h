//
//  NewsPager.h
//  依赖倒置原则
//
//  Created by B612 on 2019/10/15.
//  Copyright © 2019年 action.zhou. All rights reserved.
//

//报纸类
class NewsPager:public IReadContent
{
    virtual const std::string GetContent() const override
    {
        return "我在读报纸";
    }
};

