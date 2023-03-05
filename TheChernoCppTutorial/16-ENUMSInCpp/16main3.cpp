//
//  main3.cpp
//  16-ENUMS in Cpp
//
//  Created by Remo Lazazzera on 23/01/2020.
//  Copyright © 2020 Remo Lazazzera. All rights reserved.
//

#include <stdio.h>
#include <iostream>

class Log
{
    
public:
    enum Level
    {
        LevelError = 0, LevelWarning, LevelInfo
    };
    
    /*
     I can't call LevelError, "Error" because otherwise I would have a confict in names with the function "void Error"
     */
    
private:
    Level m_LogLevel = LevelInfo;
    
public:
    void SetLevel(Level level)
    {
        m_LogLevel = level;
    }
    void Error(const char* message)
    {
        if (m_LogLevel >= LevelError)
            std::cout << "[ERROR] " << message << std::endl;
    }
    void Warn(const char* message)
    {
        if (m_LogLevel >= LevelWarning)
            std::cout << "[WARINIG] " << message << std::endl;
    }
    void Info(const char* message)
    {
        if (m_LogLevel >= LevelInfo)
            std::cout << "[INFO] " << message << std::endl;
    }
};

int main(){
    Log log;
    log.SetLevel(Log :: LevelError);
    log.Warn("Hello!");
    log.Error("Hello!");
    log.Info("Hello!");
    std::cin.get();
}
