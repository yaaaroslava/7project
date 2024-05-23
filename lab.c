#include "lab.h"

int lab1() {
    float H; //высота
float t; //время
float V; //начальная скорость
float a; //ускорение свободного падения
const float g = 9.8; //константа
printf ("H = "); //вывод "H =" на экран
scanf("%f", &H); //ввод значения H с клавиатуры
printf("t = ");
scanf("%f", &t);
a=g*t*t;
a=a/2;
V=(H-a)/t;
//разбила формулу V = (H-(g*t*t)/2)/t на 3 действия
printf("начальная скорость = %f\n", V);
    return 0;

}

int lab2(void) {
    float s; // сумма ряда
float a; // очередной элемент ряда
float c; // числитель очередного элемента ряда
float b; // знаменатель очередного элемента ряда
float x; // степень знаменателя
int i; // номер очередного элемента ряда
int n; // число элементов ряда
// ввод параметров ряда
printf("n=");
scanf("%d", &n);
printf("b=");
scanf("%f", &b);
// начальное присваивание переменных
s = 0;
i = 0;
c = 1;
x = b;
// цикл
while( i <= n )
{
 s = s + a;
 a = c / b;
 b = b * x;
 c = c + 1;
 i = i + 1;
 }

printf("s = %f\n", s); // результат
return 0;

}

int dz2(void) {
    float s; // сумма ряда
float a; // очередной элемент ряда
float c; // числитель очередного элемента ряда
float b; // знаменатель очередного элемента ряда
float x; // степень знаменателя
int i; // номер очередного элемента ряда
int n; // число элементов ряда
// ввод параметров ряда
//printf("n=");
//scanf("%d", &n);
printf("b=");
scanf("%f", &b);
// начальное присваивание переменных
n = 0;
s = 0;
c = 1;
x = b;
for (i = n; i ==0; i--)
// цикл
{
 a = c / b;
 b = b * x;
 x--;
 c--;
 s = s + a;
 }

printf("s = %f\n", s); // результат
return 0;
}

int lab3(void) {
        int c; 
    int l; 
    int ctr; 
    c=0; 
    l=0; 
    ctr=0; 
    while((c=getchar())!=EOF) 
    { 
        l += 1;
                if (c == ' ' || c == '\n' || c == '\t')
        {
            if ((l - 1) % 2 != 0)
                ctr += 1;
            l = 0;
        }
    }
    printf("number of words= %d\n", ctr);
}

int lab4(void) {
        char line[LEN];
    int i=0;   //позиция текущего символа исходной cтроки
    int start;  //позиция начала слова
    int counter=0;
    int max=0;
    gets(line);
    while (line[i]!='\0') // поиск максимальной длины слова и его начала
    {
        if ((line[i]!=' ') && (line[i]!='.') && (line[i]!=','))
        {
                counter++;
                if (counter>max)
            {
                max=counter;
                start=i-max+1;
            }
        }
            else
                counter=0;
        i++;
    }
    i=start;
    while (i<(LEN-max)) //перезапись
       {
           line[i]=line[i+max];
           i++;
    }
    puts (line);

}

int dz4() {
     char line[LEN];
    int i=0;
    int start;
    int counter=0;
    int max=0;
    fgets(line, LEN, stdin); 
    while (line[i]!='\0')
    {
        if ((line[i]!=' ') && (line[i]!='.') && (line[i]!=','))
        {
            counter++;
            if (counter>max)
            {
                max=counter;
                start=i-max+1;
            }
        }
        else
            counter=0;
        i++;
    }
    i=start;
    while (i<(LEN-max+1)) 
    {
        line[i]=line[i+max];
        i++;
    }
    puts (line);
}

int lab5() {
        int arr[10];
    int positive_count = 0;
    int negative_count = 0;
    
    // Введите элементы массива
    printf("Введите 10 чисел:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
        if (arr[i] > 0) {
            positive_count++;
        } else if (arr[i] < 0) {
            negative_count++;
        }
    }
    
    // Проверяет количество отрицательных и положительных чисел
    if (negative_count < positive_count) {
        for (int i = 0; i < 10; i++) {
            if (arr[i] < 0) {
                arr[i] = 0;
            }
        }
    } else {
        for (int i = 0; i < 10; i++) {
            if (arr[i] > 0) {
                arr[i] = 0;
            }
        }
    }
    
    // Выводит модифицированный массив
    printf("Модифицированный массив:\n");
    for (int i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }
    
    return 0;
}

int dz5() {
       struct additionaltask
{
     int cntneg; 
     int cntpos; 
     float negavg; 
     float posavg; 
     int sumneg; 
     int sumpos; 
};

int main() 
{
    int arr[10];
    int positive_count = 0;
    int negative_count = 0;
    int positiveSum = 0;
    int negativeSum = 0;
    // Введите элементы массива
    printf("Введите 10 чисел:\n");
    for (int i = 0; i < 10; i++) 
    {
        scanf("%d", &arr[i]);
        if (arr[i] > 0) 
        {
            positive_count++;
            positiveSum+=arr[i];
        } 
        else if (arr[i] < 0) 
        {
            negative_count++;
            negativeSum+=(-1*(arr[i]));
        }
    }
    
    // Проверяет количество отрицательных и положительных чисел
    if (negative_count < positive_count) 
    {
        for (int i = 0; i < 10; i++) 
        {
            if (arr[i] < 0) 
            {
                arr[i] = 0;
            }
        }
    } 
    else 
    {
        for (int i = 0; i < 10; i++) 
        {
            if (arr[i] > 0) 
            {
                arr[i] = 0;
            }
        }
    }
    
    // Выводит модифицированный массив
    printf("Модифицированный массив:\n");
    for (int i = 0; i < 10; i++) 
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    struct additionaltask bimba = {negative_count, positive_count, (-1*negativeSum/negative_count), (positiveSum/positive_count), negativeSum,positiveSum};
    printf("Количество отрицательных чисел: %d\n", bimba.cntneg);
    printf("Количество положительных чисел: %d\n", bimba.cntpos);
    printf("Среднее значение отрицательных чисел: %f\n", bimba.negavg);
    printf("Среднее значение положительных чисел: %f\n", bimba.posavg);
    printf("Сумма отрицательных: %d\n", bimba.sumneg);
    printf("Сумма положительных: %d\n", bimba.sumpos);
    return 0;
}

}

int lab6(void) {
        int x[N][N]; 
    int y[N][N]; 
    int i, j, k, l; 
    int max = 0; 
    for (i = 0; i < N; i++) 
        for (j = 0; j < N; j++) 
            scanf("%d", &x[i][j]); 
    for (i = 0; i < N; i++) 
        for (j = 0; j < N; j++) 
        { 
            y[i][j] = x[i][j]; 
        } 
        for (i = 0; i < N; i++) 
            for (j = 0; j < N; j++) 
            { 
                if (x[i][j] > max) 
                    max = x[i][j];
            } 
            for (i = 0; i < N; i++) 
                for (j = 0; j < N; j++) 
                { 
                    if (x[i][j] == max)
                    { 
                        k = i; 
                        l = j; 
                        break; 
                    } 
                } 
                for (j = 0, i = 0; j < N; j++) 
                { 
                    y[i][l] = x[k][j]; 
                    i++; 
                } 
                for (i = 0, j = 0; i < N; j++) 
                { 
                    y[k][j] = x[i][l]; 
                    i++; 
                } 
                for (i = 0; i < N; i++) 
                    for (j = 0; j < N; j++) 
                    { 
                        x[i][j] = y[i][j]; 
                    } 
                    printf("answer\n"); 
                    for (i = 0; i < N; i++) 
                    { 
                        for (j = 0; j < N; j++) 
                            printf("%4d", x[i][j]); 
                        printf("\n"); 
                    }

}

int dz6(void) {
    int x[N][N];
int y[N][N];
int i, j, k, l;
int max = 0;
int temp; // переменная для временного хранения значения при сортировке

for (i = 0; i < N; i++) 
    for (j = 0; j < N; j++) 
        scanf("%d", &x[i][j]); 

// Сортировка прямым обменом
for (i = 0; i < N; i++) 
{
    for (j = 0; j < N - 1; j++) 
    {
        for (k = 0; k < N - j - 1; k++) 
        {
            if (x[i][k] > x[i][k + 1]) 
            {
                temp = x[i][k];
                x[i][k] = x[i][k + 1];
                x[i][k + 1] = temp;
            }
        }
    }
}

for (i = 0; i < N; i++) 
    for (j = 0; j < N; j++) 
    { 
        y[i][j] = x[i][j]; 
    } 

for (i = 0; i < N; i++) 
    for (j = 0; j < N; j++) 
    { 
        if (x[i][j] > max) 
            max = x[i][j];
    } 

for (i = 0; i < N; i++) 
    for (j = 0; j < N; j++) 
    { 
        if (x[i][j] == max)
        { 
            k = i; 
            l = j; 
            break; 
        } 
    } 

for (j = 0, i = 0; j < N; j++) 
{ 
    y[i][l] = x[k][j]; 
    i++; 
} 

for (i = 0, j = 0; i < N; j++) 
{ 
    y[k][j] = x[i][l]; 
    i++; 
} 

for (i = 0; i < N; i++) 
    for (j = 0; j < N; j++) 
    { 
        x[i][j] = y[i][j]; 
    } 

printf("answer\n"); 
for (i = 0; i < N; i++) 
{ 
    for (j = 0; j < N; j++) 
        printf("%4d", x[i][j]); 
    printf("\n"); 
}

}

int lab7() {
    unsigned long num=0,N;
scanf("%lu", &N);   // прочитать с клавиатуры unsigned long и записать в N
while(N)
{   //побитовые операции
num^=(N&3);  // ^ исключающее "или"  // & побитовое "и"
N=N>>2;
num=num<<2;   //<<сдвинуть на два бита влево
}
num=num>>2;
printf("%lu", num);   // вывести на экран получившееся число num
return 0;
}