#include <stdio.h>
#include <time.h>

int gettime() {
    struct timespec ts;
    clock_gettime(CLOCK_REALTIME, &ts);
    printf("当前时间: %d:%d:%02d\n",(((ts.tv_sec%86400)/3600)+8)%24, (ts.tv_sec%3600)/60, ts.tv_sec%60);
}
int main() {
    char counterkey;
    printf("请输入计数键\n");
    counterkey = getchar();
    getchar();
    for (size_t i = 1;i++;)
    {
        if (getchar() == counterkey) {
            printf("第%d次     ", i-1);
                gettime();
    }
        else {
            i-=1;
    }
    }
        return 0;
}