//
//  main2.cpp
//  16-ENUMS in Cpp
//
//  Created by Remo Lazazzera on 23/01/2020.
//  Copyright © 2020 Remo Lazazzera. All rights reserved.
//

#include <stdio.h>

enum Level {
    Error=0, Warning, Info
};

int main(){
    
    int Log_Level = Info; // Info is the integer 3

    Level Log = Info;

    if(Log >= Warning){
        
    };

}
