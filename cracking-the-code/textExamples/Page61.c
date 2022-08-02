/*
Question: Given a time, calculate the angle between the hour and minute hand.

convert hourhand to minutes
if 12 then 0
hourhand * 5 = hm

degrees per minute
1min*(360deg/60min)=6deg 

(|hm-m|)*6deg = answer
*/

#include <stdio.h>
#include <stdlib.h>

int hour_convert(int h);
int degree_calc(int hour_hand, int minute_hand); 

int main(int argc, char **argv) {
    fprintf(stdout, "%ddeg\n", degree_calc(atoi(argv[1]), atoi(argv[2])));
    return 0;
}

int hour_convert(int h) {
    if (h == 12) {
        h = 0;
    }
    return h*5;
}

int degree_calc(int hour_hand, int minute_hand) {
    int h = hour_convert(hour_hand);
    int ans = (h-minute_hand)*6;
    if (ans > 0) {
        return ans;
    }
    else {
        return (-1 * ans);
    }
}