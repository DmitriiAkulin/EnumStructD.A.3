// EnumStructD.A.3
#include <Windows.h>
#include <iostream>

using std::string;
using std::cout;
using std::endl;
 struct adres {
    string city_name;
    string  street_name;
    unsigned short int house_num;
    unsigned short int flat_num;
    unsigned int index;
 };
 void Print_Data(adres *arr);//прототип
 
int main()
{
   //русский язык
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
   //я мог бы сделать ввод кол-ва адресов и данных вручную - в задании не увидел такого

   //создаем массив адресов
    adres *adres_arr  = new adres[2];
    adres_arr[0].city_name = "Москва"; adres_arr[1].city_name = "Ижевск";
    adres_arr[0].street_name = "Арбат"; adres_arr[1].street_name = "Пушкина";
    adres_arr[0].house_num = 12; adres_arr[1].house_num = 59;
    adres_arr[0].flat_num = 8; adres_arr[1].flat_num = 143;
    adres_arr[0].index = 123456; adres_arr[1].index = 953769;

    Print_Data(adres_arr);

    delete [] adres_arr;

    return 0;
}
//релиз функции
void Print_Data(adres* arr) {
    for(int i = 0; i<2; i++){
       cout << "Город: " << arr[i].city_name << endl  << "Улица: " << arr[i].street_name << endl
            << "Номер дома: " << arr[i].house_num << endl
            << "Номер квартиры: " << arr[i].flat_num << endl << "Индекс: " <<arr[i].index << endl;
            cout << endl;
     }
}
