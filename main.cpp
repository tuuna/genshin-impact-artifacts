//
//  main.cpp
//  Genshin Impact Artifacts
//
//  Created by 赖杰 on 2020/10/27.
//

//name  score increment
//暴击伤害 3 7%
//暴击率  3  3%
//攻击百分比 2 5%
//固定攻击力 1 15
//元素充能效率 1 5%
//元素精通 1 20
#include <iostream>
using namespace std;

class Score {
public:
    int step;
    int score;
    double value;
    
    double getScore(void) {
        return (int) (value / step * score);
    }
};

class Artifacts {
public:
    Score crit_damage;
    Score crit_rate;
    Score attack_percentage;
    Score attack_power;
    Score elem_charging_efficency;
    Score elem_mastery;
};

void initOriginValue(Artifacts &instance) {
   
    instance.crit_damage.step = 7;
    instance.crit_damage.score = 3;
    instance.crit_rate.step = 3;
    instance.crit_rate.score = 3;
    instance.attack_percentage.step = 5;
    instance.attack_percentage.score = 2;
    instance.attack_power.step = 15;
    instance.attack_power.score = 1;
    instance.elem_charging_efficency.step = 5;
    instance.elem_charging_efficency.score = 1;
    instance.elem_mastery.step = 20;
    instance.elem_mastery.score = 1;
}
int main(int argc, const char * argv[]) {
    
    double final_score = 0.0;
    Artifacts instance;
    initOriginValue(instance);
    
    cout << "接下来请输入您的副词条属性,无需输入百分号,若无该词条则输入0" << endl;
    cout << "首先输入您的暴击伤害" << endl;
    cin >> instance.crit_damage.value;
    cout << "首先输入您的暴击率" << endl;
    cin >> instance.crit_rate.value;
    cout << "首先输入您的百分比攻击" << endl;
    cin >> instance.attack_percentage.value;
    cout << "首先输入您的固定攻击" << endl;
    cin >> instance.attack_power.value;
    cout << "首先输入您的元素充能效率" << endl;
    cin >> instance.elem_charging_efficency.value;
    cout << "首先输入您的元素精通" << endl;
    cin >> instance.elem_mastery.value;
    

    final_score = instance.crit_damage.getScore()
        + instance.crit_rate.getScore()
        + instance.attack_percentage.getScore()
        + instance.attack_power.getScore()
        + instance.elem_charging_efficency.getScore()
        + instance.elem_mastery.getScore();
    
    cout << "您的圣遗物分数是" << final_score << endl;
    return 0;
}
