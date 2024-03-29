#include "Config.h"
#include<fstream>
#include<iostream>
#include<vector>

using namespace std;

Config::Config()
{
    //ctor
}

Config::~Config()
{
    //dtor
}

vector <string> Conf::lecture()
{
    vector <string> myfile

    FILE* conf = fopen("C:\\Users\\Wil\\Desktop\\keyce\\conf.csv", "+r");

    if(!conf){
        printf("on peut pas ouvrir");
    }

    char content[1024];
    while(fgetc(content, 1024, conf)){
        char* v = strtok(content, ";");
        while(v)
        {
            myfile.push_back(v);
            v = strtok (NULL, ";");
        }
        printf("\n");

        fclose(conf);

        return myfile;
    }




}
