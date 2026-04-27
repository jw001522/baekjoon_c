#include <stdio.h>

int main(){
    int first_num, second_num;
    scanf("%d", &first_num);

    int max_count = 0;
    int max_nums[100];
    int count = 0;
    int nums[100];

    for (second_num = 1; second_num <= first_num; second_num++) {
        count = 2;
        nums[0] = first_num;
        nums[1] = second_num;
        while (1) {
            int next_num = nums[count - 2] - nums[count - 1];
            if (next_num < 0) {
                break;
            }
            nums[count] = next_num;
            count++;
        }
        if (count > max_count) {
            max_count = count;
            for (int i = 0; i < count; i++) {
                max_nums[i] = nums[i];
            }
        }
    }
    printf("%d\n", max_count);
    
    for (int i = 0; i < max_count; i++) {
        printf("%d ", max_nums[i]);
    }
    return 0;
}
