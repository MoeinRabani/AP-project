#ifndef CURRENT_USER_H
#define CURRENT_USER_H

#include <QString>

class current_user
{
public:
    current_user();
    static current_user& getInstance(){
        static current_user instance;
        return instance;
    }
};

#endif // CURRENT_USER_H
