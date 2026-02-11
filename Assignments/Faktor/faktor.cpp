#include <iostream>
#include <cassert>

int calculation(int articles, int impactFactor)
{
return (articles * (impactFactor-1))+1;
}

void test()
{
    assert(calculation(10, 10) == 91);
    assert(calculation(1, 4) == 4);
    assert(calculation(1, 100) == 100);
    assert(calculation(10, 10) == 91);
}

int main()
{
    test();

    int articles, impactFactor;
    std::cin >> articles >> impactFactor;
    
    std::cout << calculation(articles, impactFactor) << std::endl;
}

