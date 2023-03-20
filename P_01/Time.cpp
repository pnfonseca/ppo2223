/**
 * @file Time.cpp
 * @author your name (you@domain.com)
 * @brief
 * @version 0.1
 * @date 2023-02-12
 *
 * @copyright Copyright (c) 2023
 *
 */

#include "Time.h"
#include <iostream>
#include <iomanip>


// Initializer all data to zero
Time::Time() : m_hour(0), m_minute(0), m_second(0)
{/* Empty */};

// Initialize to constant values:
Time::Time(int h, int m, int s): m_hour(h), m_minute(m), m_second(s)
{ /* Empty */};

// Getters for Time members
int Time::getHours()
{
    return m_hour;
}

int Time::getMins()
{
    return m_minute; 
}

int Time::getSecs()
{
    return m_second;
}

// Setters
void Time::setHours(int h)
{
    m_hour = h;
}
void Time::setMins(int m)
{
    m_minute = m<=60?m:0;
}
void Time::setSecs(int s)
{
    m_second = s<=60?s:0;
}

void Time::add(Time other)
{
    m_hour += other.m_hour;
    m_minute += other.m_minute;
    m_second += other.m_second; 
    while(m_second >= 60){
        m_second -= 60; 
        m_minute++;
    }
    while(m_minute >= 60){
        m_minute -= 60; 
        m_hour++;
    }
}

void Time::showTime()
{
    std::cout << std::setfill('0') << std::setw(2) << m_hour << ":" << std::setw(2) <<  m_minute << ":" << std::setw(2) << m_second << std::endl; 
}