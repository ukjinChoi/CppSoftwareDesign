#ifndef __DRAW_H__
#define __DRAW_H__

#include <Shape.h>

#include <iostream>

class Draw 
{
public:
	void operator()(Circle const& c) const
	{
		std::cout << "Draw Circle radius:" << c.radius() << std::endl;
	}
	void operator()(Square const& s) const
	{
		std::cout << "Draw Square side:" << s.side() << std::endl;
	}
    // 각 구체 도형에 대해 하나씩 더 많은 visit() 함수가 있을 수 있다.
};
#endif
