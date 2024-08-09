#include <Calculator.h>
#include <Add.h>
#include <Subtract.h>
#include <cstdlib>
#include <iostream>

int main()
{
    Calculator calculator{};
    auto op1 = std::make_unique<Add>(3);
    auto op2 = std::make_unique<Add>(7);
    auto op3 = std::make_unique<Subtract>(4);
    auto op4 = std::make_unique<Subtract>(2);

    calculator.compute(std::move(op1));
    calculator.compute(std::move(op2));
    calculator.compute(std::move(op3));
    calculator.compute(std::move(op4));

    calculator.undoLast();

    int const res = calculator.result();

    std::cout << "result : " << res << std::endl;
    return 0;
}