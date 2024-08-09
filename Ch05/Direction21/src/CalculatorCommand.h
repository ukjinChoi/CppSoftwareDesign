#ifndef __CALCULATOR_COMMAND_H__
#define __CALCULATOR_COMMAND_H__
class CalculatorCommand
{
public:
    virtual ~CalculatorCommand() = default;

    virtual int execute(int i) const = 0;
    virtual int undo(int i) const = 0;
};
#endif