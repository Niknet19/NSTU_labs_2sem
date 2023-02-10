#include <iostream>
#include <cstring>

//Информация по товарам. Каждая запись состоит из следующих полей:
// название товара (20 символов), цена(?), количество(?), дата получения товара (день, месяц, год),
// срок годности (количество дней). Написать функции сортировки по названиям товаров и по датам получения товара.
struct Date{
int day;
int month;
int year;
};

struct Product{
	char name[20];
	double price;
	int quantity;
	Date receiving_date;
	int expiration_date;

};

void sortByNameProducts(Product* products,int n);
void sortByReceivingProducts(Product* products);
void inputCheck();

int comparator(const void *p, const void *q)
{
	char* l = ((struct Product *)p)->name;
	char* r = ((struct Product *)q)->name;
	return strcmp(l,r);
}


void sortByNameProducts(Product *products,int n){
	qsort(products,n, sizeof(Product),comparator);
}



int main()
{
	return 0;
}
