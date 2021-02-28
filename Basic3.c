#include<stdio.h>
/*枚举*/

//第一个枚举成员的默认值为整型的 0，后续枚举成员的值在前一个成员上加 1。
//我们在这个实例中把第一个枚举成员的值定义为 1，第二个就为 2，以此类推。
enum DAY{
    MON=1, TUE, WED, THU, FRI, SAT, SUN
};

int main(){
    enum DAY day;
    day=WED;
    printf("%d\n",day);

    // 遍历枚举元素,定义的枚举类是连续的，可以遍历，如果不连续的话，不能遍历
    for (day = MON; day <= SUN; day++) {
        printf("枚举元素：%d \n", day);
    }
    return 0;
}