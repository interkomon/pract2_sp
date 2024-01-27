// pract2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <fstream>
#include <math.h>

void task1();
void task2();
void task3();
void task4();

int main()
{
    setlocale(LC_ALL, "rus");
    std::cout << "Hello World!\n";
    int task;
    std::cout << "Выберите номер задания\n";
    std::cin >> task;
    if (task == 1)
    {
        task1();
    }
    else if (task == 2)
    {
        task2();
    }
    else if (task == 3)
    {
        task3();
    }
    else if (task == 4)
    {
        task4();
    }
    else
    {
        std::cout << "Только 4 задания :(" << std::endl;
    }
}
//- ВАРИАНТ 10 -

void task1() {

    const int N = 5;
    bool exam = true;

    int arr[N] = { 7,5,3,4,5 };


    for (int i = 0; i < N - 1; i++)
    {
        if (arr[i] >= arr[i + 1])
        {
           
            exam = false;
            break;
            
            
        }
       
       
    }

    if (exam)
    {
        std::cout << "Массив  упорядочен!" << std::endl;
    }
    else
    {
        std::cout << "Массив неупорядочен!" << std::endl;
       

    }

}

void task2() {

    const int rows = 3;
    const int cols = 4;

    double matrix[rows][cols] = {
        {5,2,0,-1}, 
        {4,2,-5,7},
        {6,2,6,2}     
    };

    int minrow = 0;
    int maxrow = 0;
    double minavg = 0;
    double maxavg = 0;
    //находим индексы строк и наименшем и наибольшем среднем значением
    for (int i = 0; i < rows; i++)
    {

        double sum = 0;
        for (int j = 0; j < cols; j++)
        {
             sum = sum + matrix[i][j];
        }
        double avg = sum / cols;


        if (i == 0 || avg < minavg)
        {
            minavg = avg;
            minrow = i;
        }
        if (i == 0 || avg > maxavg)
        {
            maxavg = avg;
            minrow = i;
        }
    }
    //меняем местами строки 
    double change[cols];

    for (int j = 0; j < cols; j++)
    {
        change[j] = matrix[minrow][j];
        matrix[minrow][j] = matrix[maxrow][j];
        matrix[maxrow][j] = change[j];
    }
    //вывод изменненой матрицы
    std::cout << "Изменная матрица\n";
    for (int i = 0; i < rows; i++)
    {
       
        for (int j = 0; j < cols; j++)
        {
            std::cout << " " << matrix[i][j] << " ";
            
        }
        std::cout <<"\n"<< std::endl;
    
    }

    
}

//struct Book {
//    char title;
//    char author;
//    int year;
//
//};


struct BankTransaction {
    int transactionID;
    double amount;
    char type[20];
};

void task3()
{
   /* Book book;
    book.title = 'ЖИЗА';
    book.author = 'Ким';
    book.year = 2005;

    std::ofstream out;
    out.open("task3.txt");
    if (out.is_open())
    {
        out << book.title << book.author << book.year << std::endl;
    }
    out.close();
    std::cout << "Файл был записан" << std::endl;*/

    BankTransaction bank;

    std::cout << "Введите индетификатор транзакции(ID)\n";
    std::cin >> bank.transactionID;
    std::cout << "Введите сумму транзакции\n";
    std::cin >> bank.amount;
    std::cout << "Введите тип tранзакции(translitom)\n";
    std::cin >> bank.type;

    std::cout << "\n";
    

    std::cout << "Информация о транзакции:\n";
    std::cout << "Индетификатор - " << bank.transactionID << std::endl;
    std::cout << "Сумма - " << bank.amount << std::endl;
    std::cout << "Тип - " << bank.type  << std::endl;



}

class Vector
{

private:
    double x;
    double y;

    //конструктор
public: Vector(double x, double y)
{
    this->x = x;
    this->y = y;
}
      //высчитываем длину вектора по формуле 
      double getLength() {
          return sqrt(x * x + y * y);
      }
};


void task4()
{
    Vector vector(3.0, 4.0);
    
    std::cout << "Длина вектора: "<< vector.getLength() << std::endl;
}

























// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
