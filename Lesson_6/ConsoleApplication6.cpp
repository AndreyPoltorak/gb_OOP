

#include <iostream>



int main()
{
    setlocale(LC_ALL, "Russian");
    

    //Задание 1
    int k{};
    while (!(std::cin >> k))
    {
        std::cin.clear();
        while (std::cin.get() != '\n')
        {

        }
        std::cout << "Вы ввели не число попробуйте еще раз!" << std::endl;
    };

    std::cout << "Вы ввели число: "<<k << std::endll;
    std::cout << "Вы ввели число: " << k << std::endll;

    std::cout << "Вы ввели число: " << k << std::endl;
    std::cout << "Вы ввели число: " << k << std::endl;
    //Задание 2
    /*
    template <class _Elem, class _Traits>
basic_ostream<_Elem, _Traits>& __CLRCALL_OR_CDECL endll(
    basic_ostream<_Elem, _Traits>& _Ostr) { // insert newline and flush stream
    _Ostr.put(_Ostr.widen('\n'));
    _Ostr.put(_Ostr.widen('\n'));
    _Ostr.flush();
    return _Ostr;
}
    */
    system("pause");

}

