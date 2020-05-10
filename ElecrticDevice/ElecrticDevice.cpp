// ElecrticDevice.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;

class ElectronicDevice
{
    //поля
private:
    string name;
    int price;
    string manufacturer;
public:
    //конструткор
    ElectronicDevice()
    {
        setn("Ashpire");
        setm("Acer");
        setp(20000);
    }
    ElectronicDevice(string name, int price, string manufacturer)
    {
        setn(name);
        setm(manufacturer);
        setp(price);
    }
    //виртуальный метод
    virtual void print()
    {
        cout << "Name - " << name << endl;
        cout << "Manufacturer - " << manufacturer << endl;
        cout << "Price - " << price << endl;
        cout << "Устройство работает!" << endl;
    }
    void setn(string name) //метод set для поля имя
    {
            this->name = name;
    }
    void setm(string manufacturer) //метод set для поля производитель
    {
        this->manufacturer = manufacturer;
    }
    void setp(int price) //метод set для поля цена
    {
        if (price >= 0)
            this->price = price;
    }
    //методы get для всех полей 
    string getn()
    {
        return name;
    }
    string getm()
    {
        return manufacturer;
    }
    int getp()
    {
        return price;
    }
};
class Notebook : ElectronicDevice
{
private:
    int god; //год выпуска устройства
    int Ngaran; //Год гарантии
public:
    Notebook(string name, int price, string manufacturer, int god, int Ngaran)
    {
        setn(name);
        setm(manufacturer);
        setp(price);
        setg(god);
        setng(Ngaran);
    }
    void print()
    {
       /* cout << "Name - " << setn << endl;
        cout << "Manufacturer - " << setm << endl;
        cout << "Price - " << setp << endl;*/
        cout << "Year - " << god << endl;
        cout << "Guarantee - " << Ngaran << endl;
        cout << "Ноутбук работает!" << endl;
    }
    void setg(int god) //метод set для поля год
    {
        if (god >= 0)
            this->god = god;
    }
    void setng(int Ngaran) //метод set для поля гарантия
    {
        if (Ngaran >= 0)
            this->Ngaran = Ngaran;
    }
    int getg()
    {
        return god;
    }
    int getng()
    {
        return Ngaran;
    }
};
class Smartphone : ElectronicDevice
{
private:
    int model; //модель
    string Color; //Год гарантии
public:
    Smartphone(string name, int price, string manufacturer, int model, string Color)
    {
        setn(name);
        setm(manufacturer);
        setp(price);
        setmo(model);
        setc(Color);
    }
    void print()
    {
        cout << "Model - " << model << endl;
        cout << "Color - " << Color << endl;
        cout << "Смартфон работает!" << endl;
    }
    void setmo(int model) //метод set для поля модель
    {
        if (model >= 0)
            this->model = model;
    }
    void setc(string Color) //метод set для поля color
    {
            this->Color = Color;
    }
    int getmo()
    {
        return model;
    }
    string getc()
    {
        return Color;
    }
};
class Clock : ElectronicDevice
{
private:
    int format; //формат времени 24часа или 12часов
    string country; // страна производитель
public:
    Clock(string name, int price, string manufacturer, int format, string country)
    {
        setn(name);
        setm(manufacturer);
        setp(price);
        setf(format);
        setco(country);
    }
    void print()
    {
        cout << "Format - " << format << endl;
        cout << "Country - " << country << endl;
        cout << "Часы работают!" << endl;
    }
    void setf(int format) //метод set для поля модель
    {
        if (format >= 0)
            this->format = format;
    }
    void setco(string country) //метод set для поля color
    {
        this->country = country;
    }
    int getf()
    {
        return format;
    }
    string getco()
    {
        return country;
    }
};

int main()
{
    setlocale(LC_ALL, "Russian");
    //ElectronicDevice("Asphire", 29000, "Acer");
    Notebook s("Asphire", 29000, "Acer", 2019, 5);
    s.print();

}


