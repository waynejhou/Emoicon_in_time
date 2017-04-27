//
//  main.cpp
//  emoicon_in_time
//
//  Created by Wayne on 2017/3/31.
//  Copyright © 2017年 Wayne. All rights reserved.
//

#include <iostream>
#include <ctime>

using namespace std;

ostream& operator<<(ostream& str,const struct tm& time){
    str << time.tm_hour << ":"<<time.tm_min<<":"<<time.tm_sec;
    return str;
}

int main(int argc, const char * argv[]) {

    time_t t = time(NULL);
    struct tm tm = *localtime(&t);
    tm.tm_year+=1900;
    tm.tm_mon+=1;
    if(tm.tm_hour>=0&&tm.tm_hour<=6){
        cout << "Zz(´-ω-`*)";
    }else if(tm.tm_hour>6&&tm.tm_hour<=10){
        cout << "(っ﹏-) .｡o";
    }else if(tm.tm_hour>10&&tm.tm_hour<=11){
        cout << "（´-`）.｡oO";
    }else if(tm.tm_hour>11&&tm.tm_hour<=12){
        cout << "(›´ω`‹ )";
    }else if(tm.tm_hour>12&&tm.tm_hour<=15){
        cout << "(´・ω・)つ旦";
    }else if(tm.tm_hour>15&&tm.tm_hour<=17){
        cout << "ヽ(́◕◞౪◟◕‵)ﾉ";
    }else if(tm.tm_hour>17&&tm.tm_hour<=19){
        cout << "( ´∀｀)つt[ ]";
    }else if(tm.tm_hour>19&&tm.tm_hour<=21){
        cout << "_(:3 」∠ )_";
    }else if(tm.tm_hour>21&&tm.tm_hour<=24){
        cout << "ᕦ(ò_óˇ)ᕤ (˚ ∀ ˚)ｷﾀｰｰｰ";
    }
    return 0;
}
