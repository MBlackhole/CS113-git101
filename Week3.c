// // #include <stdio.h>

// // int addTen(int x)
// // {
// //     printf("x in addTen = %d", x);
// //     x = x + 10;
// //     return x;
// // }
// // int addTwenty(); //function protopie
// // int x = 300;
// // int main()
// // {
// //     int x = 10;
// //     int y = addTen(x);
// //     printf("addTen in main = %d\n", addTen(x));
// //     printf("x in main = %d\n", x);
// //     int z = addTwenty();
// //     printf("addTwenty in main = %d\n", z);
// //     printf("x inmain = %d\n", x);
// // }

// // int addTwenty()
// // {
// //     printf("x in addTwenty = %d\n", x); //จะหาในโลเคลและโกโบล แต่ต้องประกาษไว้ด้านบน
// //     x = x + 20;
// //     return x;
// // }
// // //int 4 ไบต์ 
// // //หลังาก retrun ค่าจะโดนลบหายไป กับไปที่ค่าเดิมไม่ได้ จะได้พื้นที่ว่างจากมาเรียกใช้ได้
// // //การประกาศตัวแปร
// // //การพาสซิงoperater

// // #include <stdio.h>
// // int x = 100;
// // int fac(int i)
// // {
// //     if (i == 0){
// //         return 1;
// //     }
// //     return i*fac(i - 1);
// // }
// // int main()
// // {
// //     int d = fac(5);
// //     printf("%d", d);
// // }

// #include <stdio.h>
// #include <stdlib.h>
// char n[10];

// int main()
// {   
//     gets(n);
//     int i = atoi(n);
//     //printf("7 = 0111\n");
//     printf("%d", (i>>3)&1);
//     printf("%d", (i>>2)&1);
//     printf("%d", (i>>1)&1);
    
//     printf("%d", i&1);
//     // printf("%d\n", 2&4);
//     // printf("%f", 3&5);
// }