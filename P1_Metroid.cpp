// Samus Aran's Next Mission
//By Rodrigo Avila
#include <iostream>
#include <iomanip>
#include <cmath> //needed for absolute value calculations
//Gravity factors for planets relative to Earth's 1.0
#define mercury_gf 0.27
#define venus_gf 0.86
#define mars_gf 0.37
#define jupiter_gf 2.64
#define saturn_gf 1.17
#define uranus_gf 0.92
#define neptune_gf 1.44
using namespace std;
int main()
{
float speed;
float weight;

cout<<"Enter your weight: "; //weight is measured in pounds
cin>>weight;
cout<<"Enter your ship's speed: ";//speed is measured in miles per hour
cin>>speed;

//All distances are in miles
float earth_sun= 93000000;//distance from the Earth to the sun

cout<<"Planet"<<setw(20)<<"New Weight"<<setw(20)<<"Travel Hours"<<setw(30)<<"Travel years"<<endl;

//Mercury
double mercury_w = mercury_gf*weight; //new weight on Mercury
double mercury_dist=36000000;//distance from mercury to the sun
mercury_dist=abs(mercury_dist-earth_sun);//distance from earth to mercury
float time_h=mercury_dist/speed; //Time is set in hours for the total time
long days_h =time_h/24;
long years_h= days_h/365;
int hours_h =time_h-(days_h*24);
days_h = days_h-(years_h*365);
cout<<"Mercury"<<setw(19)<<mercury_w<<setw(20)<<time_h<<setw(10)<<years_h <<" years "<<days_h <<" days "<<hours_h<<" hours "<<endl;

//Venus
double venus_w = venus_gf*weight;
double venus_dist=67000000;
venus_dist=abs(venus_dist-earth_sun);
float time_v=venus_dist/speed;
long days_v =time_v/24;
long years_v= days_v/365;
int hours_v =time_v-(days_v*24);
days_v = days_v-(years_v*365);
cout<<"Venus"<<setw(21)<<venus_w<<setw(20)<<time_v<<setw(10)<<years_v <<" years "<<days_v <<" days "<<hours_v<<" hours "<<endl;

//Mars
double mars_w = mars_gf*weight;
double mars_dist=141000000;
mars_dist=abs(mars_dist-earth_sun);
float time_m=mars_dist/speed;
long days_m =time_m/24;
long years_m= days_m/365;
int hours_m =time_m-(days_m*24);
days_m = days_m-(years_m*365);
cout<<"Mars"<<setw(22)<<mars_w<<setw(20)<<time_m<<setw(10)<<years_m <<" years "<<days_m <<" days "<<hours_m<<" hours "<<endl;

//Jupiter
double jupiter_w = jupiter_gf*weight;
double jupiter_dist=483000000;
jupiter_dist=abs(jupiter_dist-earth_sun);
float time_j=jupiter_dist/speed;
long days_j =time_j/24;
long years_j= days_j/365;
int hours_j =time_j-(days_j*24);
days_j = days_j-(years_j*365);
cout<<"Jupiter"<<setw(19)<<jupiter_w<<setw(20)<<time_j<<setw(10)<<years_j <<" years "<<days_j <<" days "<<hours_j<<" hours "<<endl;

//Saturn
double saturn_w = saturn_gf*weight;
double saturn_dist=886000000;
saturn_dist=abs(saturn_dist-earth_sun);
float time_s=saturn_dist/speed;
long days_s =time_s/24;
long years_s= days_s/365;
int hours_s =time_s-(days_s*24);
days_s = days_s-(years_s*365);
cout<<"Saturn"<<setw(20)<<saturn_w<<setw(20)<<time_s<<setw(10)<<years_s <<" years "<<days_s <<" days "<<hours_s<<" hours "<<endl;

//Uranus
double uranus_w = uranus_gf*weight;
double uranus_dist=1782000000;
uranus_dist=abs(uranus_dist-earth_sun);
float time_u=uranus_dist/speed;
long days_u =time_u/24;
long years_u= days_u/365;
int hours_u =time_u-(days_u*24);
days_u = days_u-(years_u*365);
cout<<"Uranus"<<setw(20)<<uranus_w<<setw(20)<<time_u<<setw(10)<<years_u <<" years "<<days_u <<" days "<<hours_u<<" hours "<<endl;

//Neptune
double neptune_w = neptune_gf*weight;
double neptune_dist=2793000000;
neptune_dist=abs(neptune_dist-earth_sun);
float time_n=neptune_dist/speed;
long days_n =time_n/24;
long years_n= days_n/365;
int hours_n =time_n-(days_n*24);
days_n = days_n-(years_n*365);
cout<<"Neptune"<<setw(19)<<neptune_w<<setw(20)<<time_n<<setw(10)<<years_n <<" years "<<days_n <<" days "<<hours_n<<" hours "<<endl;
}
