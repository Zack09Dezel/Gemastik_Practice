#include <iostream>
#include <string>
#include <cmath>
#include <vector>
#include <algorithm>
using namespace std;

// 1 Detik/Test case dan max 64MB

struct villageCompare{
    string villageName1;
    string villageName2;
    int x0, y0;
    int x1, y1;
    int r0, r1;
    int jarak;
};

bool compareByDistance(const villageCompare &a, const villageCompare &b) {
    return a.jarak > b.jarak;
}

int main(){
    int p;
    cin >> p;
    vector<villageCompare> village(p);

    for(int i = 0; i < p; i++){
        cin >> village[i].villageName1 >> village[i].x0 >> village[i].y0 >> village[i].r0 >> village[i].villageName2 >> village[i].x1 >> village[i].y1 >> village[i].r1;
        village[i].jarak = sqrt(pow((village[i].x1 - village[i].x0), 2) + pow((village[i].y1 - village[i].y0), 2));
    }

    sort(village.begin(), village.end(), compareByDistance);

    for(int i = 0; i < p; i++){
        cout<<village[i].villageName1<<" "<<village[i].villageName2 << " " << village[i].jarak<<endl;
	}
    
    return 0;
}
