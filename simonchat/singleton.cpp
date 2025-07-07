#include "singleton.h"

template<typename T>
Singleton<T>::Singleton()
{

}

template<typename T>
std::shared_ptr<T> Singleton<T>::GetInstance()
{
    static std::once_flag once_flag;
    std::call_once(once_flag, [&]()
    {
        // 由于
        _instance = std::shared_ptr<T>(new T);
    });
    return _instance;
}
