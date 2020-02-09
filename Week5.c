//พาสบายดิฟอเรน
//พาสบายเเวู
// void addTen(int numbers[], int n)
#include <stdio.h>
void addTen(int *numbers, int n)//*numbers is pointer , n is พาสบายแวรู
{
    for (int i = 0; i < n; i++)
    {
        printf("number + %d addr = %p , %d\n", i, numbers + i, *(numbers + 1));//*(numbers + 1) print look ดิเฟอเรนสี
        *(numbers + i) += 10;
    }
}
int addTwenty(int *n){
    *n += 20;
    return 1;
}
//#include <stdio.h>
int main()
{
    int numbers[] = {5, 6, 7, 8, 9, 0};
    int n = 6;
    int *ptr = &n;
    addTen(&numbers[0], n);
    for (int i = 0; i < 6; i++){
        printf("number[%d] = %d\n", i, numbers[i]);
    }
    addTwenty(&n);
    //addTwenty(n); จะส่งไปต้องแกบรรทัดที่ 14 เอา * ออก
    //printf("n = %d\n", n); //padbydiforen
    printf("n = %d\n", n);

}