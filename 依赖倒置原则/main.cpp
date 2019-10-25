//
//  main.cpp
//  依赖倒置原则
//
//  Created by B612 on 2019/10/15.
//  Copyright © 2019年 action.zhou. All rights reserved.
//
/*
 六大设计原则--依赖倒置
    什么是依赖倒置：高层模块不应该依赖于底层模块，而应该依赖于抽象。抽象不应依赖于细节，细节应依赖于抽象。
    核心思想：编程依赖接口，依赖抽象。具体依赖抽象，上层依赖下层。
    如案例：
        首次需求是做一个读者读书的Program。
        定义读者类、书籍类。读者类依赖书籍类。
        增加扩展，不仅读书，还读报纸。需要在写一个报纸类，此时修改会很复杂。增加一个抽象类，读物类。上层读者类面向抽象类编程。而下层读物只需要继承读物类就行。
 
 */
#include <iostream>
#include "Reader.h"
#include "SotryBook.h"
#include "NewsPager.h"
int main(int argc, char *argv[])
{
    Reader* reader = new Reader();    //定义一个读者
    if(reader)
    {
        StoryBook storyBook;            //读故事书
        reader->read(storyBook);
        
        NewsPager newsPager;        //读报纸
        reader->read(newsPager);
    }
    
    delete reader;
    reader = NULL;
    return 0;
}
