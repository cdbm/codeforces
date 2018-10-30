#include <iostream>
#include <string>
using namespace std;


float area(int x1, int y1, int x2, int y2, int x3, int y3){
	return abs( (x1*(y2-y3) + x2*(y3-y1) + x3*(y1-y2))/2.0);
}




int main() {

	int n, d;
	cin >> n;
	cin >> d;

	//A
	int x1 = 0;
	int y1 = d;
	//B
	int x2 = d;
	int y2 = 0;
	//C
	int x3 = n;
	int y3 = n-d;
	//D
	int x4 = n-d;
	int y4 = n;

	//area A
	float A = area(x1,y1,x2,y2,x3,y3) + area(x1,y1,x4,y4,x3,y3);

	int m;
	cin >> m;

	for(int i=0;i<m;i++){
		int x,y;
		cin >> x;
		cin >> y;

    /* Calculate area of triangle PAB */
    float A1 = area(x, y, x1, y1, x2, y2); 
  
    /* Calculate area of triangle PBC */
    float A2 = area(x, y, x2, y2, x3, y3); 
  
    /* Calculate area of triangle PCD */
    float A3 = area(x, y, x3, y3, x4, y4); 
  
    /* Calculate area of triangle PAD */
    float A4 = area(x, y, x1, y1, x4, y4);


	    if( A == A1+A2+A3+A4){
			cout << "YES";	    	
	    }else{
	    	cout<<"NO";
	    } 
		cout<<endl;
	}





	
}


