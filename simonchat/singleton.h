#ifndef SINGLETON_H
#define SINGLETON_H

#include "global.h"

/******************************************************************************
 *
 * @file       singleton.h
 * @brief      单例模板类
 *
 * @author     Simon
 * @date       2025/07/07
 * @history
 *****************************************************************************/
template <typename T>
class Singleton
{
protected:
    Singleton() = default;
    // 删除掉单例模板类的拷贝构造和拷贝赋值
    Singleton(const Singleton<T>&) = delete;
    Singleton& operator=(const Singleton<T>&) = delete;

    // 智能指针管理单例对象
    static std::shared_ptr<T> _instance;

public:
    static std::shared_ptr<T> GetInstance();

    void StdPrintAddress()
    {
        std::cout << _instance.get() << std::endl;
    }

    ~Singleton()
    {
        std::cout << "This is singleton destruct!" << std::endl;
    }
};

#endif // SINGLETON_H
