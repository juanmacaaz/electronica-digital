#ifndef GIN_H
#define GIN_H

#include "ginout.h"

class GIn : public GInOut
{
public:
    GIn(int x,int y, long id);
private:
    bool m_active;
};

#endif // GIN_H