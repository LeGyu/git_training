#include <iostream>
#include "calc.h"

int main()
{
    double a = 0.0, b = 0.0;
    char op = 0;

    std::cout << "请输入表达式（格式：操作数 运算符 操作数，例如 3.5 + 2）：" << std::endl;
    if (!(std::cin >> a >> op >> b))
    {
        std::cerr << "错误：输入格式不正确" << std::endl;
        return 1;
    }

    double result = 0.0;
    switch (op)
    {
    case '+':
        result = add(a, b);
        break;
    case '-':
        result = sub(a, b);
        break;
    case '*':
        result = mul(a, b);
        break;
    case '/':
        if (b == 0.0)
        {
            std::cerr << "错误：除数不能为 0" << std::endl;
            return 1;
        }
        result = div(a, b);
        break;
    default:
        std::cerr << "错误：不支持的运算符 " << op << std::endl;
        return 1;
    }

    std::cout << a << " " << op << " " << b << " = " << result << std::endl;
    return 0;
}
