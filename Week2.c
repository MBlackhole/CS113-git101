// int เก็บได้ 2ยกกำลัง 32 ทั้งบวกและลบ ประมาณ 2 พันล้าน + -
// ถ้าอยากได้ 4 พันกว่าล้าน ให้ใช้  มีเดต้าไทย์  long ปริ้นโดย "%ld"
// int 4 long 4 == ไบ _ทำให้เกิด _Overflow
// ต้องใช้ long long = 8 bite ปริ้นโดย "%llu"
// unsigned int can 400000000  ปริ้นโดย "%u"
// กำหนด  char ต้องใช้  singlecode ''
// float = 32 bits
// double = 64 bits
// char e = '\0' คือ เนาหรือ str'' ว่าง
// #define if 20; เป็นตัเลข มีค่าเป็น int หรือ for

// opereter
//  + - * / %
//  ต้องใส่ \n ถ้าอยากให้เว้นบรรทัด
//  เอา _str มาบวกได้ ตามค่า ออรเซมบี
//  1/2 =0
//  int / int == int
 
//  % ใน ซี ถ้าตัวหน้าน้อยกว่าตัวหลัง จะได้ตัวหน้า
//  เช่น 13%15 == 13
//  ถ้าตัวหน้ามากกว่า จะคิดเศษ
 
// ไม่มียกกำลัง แต่มีfunction

// #include <stdio.h>
// #include <stdlib.h>

// char name[20];
// char n[20];
// int main()
// {
//     //printf("Enter name : ");
//     //gets(name);
//     //getchar(C); เอาตัวแรกที่input ออกมา
//     //fgets(name, 20, stdin); รับอักขระได้ 20 ตัว ไปเก็บใน name
//     //printf("name = %s\n", name);

//     // fgets(n, 20, stdin);
//     // int i = atoi(n);
//     //double l = atof(n);
//     //long l = atol(n);
//     //printf("n = %s, i = %d", n, i);

//     //puts(n);
//     //putchar(100); // putchar("h") รับทั้งint and char 

//     // int found = 0;
//     // float isIn = 0.0;
//     // char isExist = '\0'; //คือ F


//     // fgets(n, 20, stdin);
//     // int i = atoi(n);
//     // //if ( 0 < i < 29) ห้ามใช้
//     // if (i > 0 && i < 20){ //&&  = and
//     //     printf("if\n");
//     // }else if (i < 100 || !found && isExist){
//     //     printf("else if\n");

//     // }else if(i > 'a' && i < 'z'){
//     //     printf("else if 2\n");
//     // }else
//     // {
//     //     printf("else\n", i > 0);
//     // }
    
//      fgets(n, 20, stdin); //ถ้าเกิด infinis loop ให้กด ctrl+C
//     int i = atoi(n);

//     // int count = 0;
//     // While (count < i);{
//     //     printf("%d\n", count);
//     //     count++;
//     // }

//     for (int j = 0; j < i ; j*=5){// j++ คือ ใช้ค่า j +1 ถ้า  j*=500 อินฟินิตี
//         printf("%d\n", j);
//     }
//     // while (1){ // ตั้งใจใช้ infinis loop

//     // }
// }

// 10.0/100.0 คิดเปอร์เซ็น