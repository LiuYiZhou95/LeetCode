//
//  main.cpp
//  stbimage
//
//  Created by B612 on 2019/8/29.
//  Copyright © 2019年 action.zhou. All rights reserved.
//

#include <iostream>

#include <stdio.h>

#define STB_IMAGE_WRITE_IMPLEMENTATION
#include "stbImage/stb_image_write.h"

#define STB_IMAGE_IMPLEMENTATION
#include "stbImage/stb_image.h"

int main(int argc, char** argv)
{
    int w, h, n;
    
    //rgba
    //load image
    unsigned char *data = stbi_load("/Users/b612/Desktop/Engine/LeetCode/stbimage/rgba.png", &w, &h, &n, 0);
    
    printf("%d, %d, %d\n", w, h, n);
    
    //change pixel
    
    //rgba,write 10 red pixel at line 11
    for (int dx = 0; dx < 10; ++dx)
    {
        data[n * w * 10 + dx * n + 0] = 255;
        data[n * w * 10 + dx * n + 1] = 255;
        data[n * w * 10 + dx * n + 2] = 0;
        data[n * w * 10 + dx * n + 3] = 255;
    }
    
    
    //write image
    stbi_write_png("/Users/b612/Desktop/Engine/LeetCode/stbimage/write.png", w, h, n, data, w * 4);
    
    stbi_image_free(data);
    
    
    return 0;
}
