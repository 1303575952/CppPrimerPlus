/*
Ӣ��Ӣ�緽ʽ������ߣ�����ʽ�������أ�����BMI
1Ӣ��Ϊ12Ӣ�磬1ǧ��Ϊ2.2��
BMI=���أ�ǧ�ˣ�/��ߣ��ף���ƽ��
*/
#include<iostream>

const double Inch_per_feet = 12.0;
const double Meter_per_inch = 0.0254;
const double Pound_per_kilogram = 2.2;

int main(void) {
	using namespace std;
	cout << "Enter your height of feet:__\b\b";
	double ht_feet;
	cin >> ht_feet;
	cout << "Enter height of inch:__\b\b";
	double ht_inch;
	cin >> ht_inch;
	// convert height
	double ht_meter = (ht_feet*Inch_per_feet + ht_inch)*Meter_per_inch;
	cout << "Enter your weight in pound:__\b\b";
	double wt_pound;
	cin >> wt_pound;
	// convert weight
	double wt_kilogram = wt_pound / Pound_per_kilogram;
	double BMI = wt_kilogram / ht_meter;
	cout << "BMI: " << BMI << endl;
	return 0;
}