//
//  pause.cpp
//  testProject
//
//  Created by Thomas Lynx on 20.03.2022.
//

//#include <stdio.h>
#include <iostream>
#define windows 1
#define linux 3
#define darwin 2
int getPlatform() {
    char* ostype = getenv("OSTYPE");
    if (ostype == NULL)
    {
       // не угадали. попробуем, а вдруг это виндовс!?
       ostype = getenv("windir");
       if (ostype != NULL)
       { printf ("windows catalog is found!!! yo!");
           return windows;
        }
    }
    else
    {
       // переменная окружения есть, попробуем вызнать что же это такое.
       if(strcmp(ostype, "linux") == 0)
//          printf("linux");
           return linux;
       else if(strcmp(ostype, "hpux") == 0)
          printf("hpux");
       else if(strcmp(ostype, "solaris") == 0)
          printf("solaris");
       else if(strcmp(ostype, "darwin") == 0)
//          printf("darwin");
           return darwin;
    }
    return 0;
}
void pause() {
    int gp = getPlatform();
    if (gp == 1) {
        system("pause");
    }
    else {
        system( "read -n 1 -s -p \"Press any key to continue...\"" );
    }
}
