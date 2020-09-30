/*
 * @Autor: PixelWine
 * @Date: 2020-07-14 09:57:31
 * @LastEditors: PixelWine
 * @LastEditTime: 2020-09-30 22:45:20
 * @description: Header-File-of-writelog.cpp
 * @file:writelog.h
 */
#include <bits/stdc++.h>

using namespace std;

const string start = "===================================================\n	      Get.exe DownloadLog\nThis document is issued by get.exe Auto generate\n===================================================";

//常量定义:开头格式

void getTime()
{
    time_t timep;
    time(&timep);
    printf("%s", ctime(&timep));
}

void writelog()
{
    ofstream outfile;
    outfile.open("getResources.log");
    outfile << start << endl;
    outfile << "Time:";
    getTime();
    outfile << endl;
    outfile << "FileName:";
    outfile.close();
}