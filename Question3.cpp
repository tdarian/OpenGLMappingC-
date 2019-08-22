#include <stdlib.h>   
#include <GL/glut.h>
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <iomanip>
#define _USE_MATH_DEFINES
#include <math.h>
#include <sstream>

using namespace std;
void init1(void);
void display1(void);
void init2(void);
void display2(void);
void init3(void);
void display3(void);
double vioar[20];
double robar[20];
double assaar[20];
double yearar[20];

double robline[20];
double violine[20];
double assaline[20];




void init1(void)
{
	glClearColor(1, 1, 1, 1);
	glMatrixMode(GL_PROJECTION);
	//gluOrtho2D(left,right,bottom,top);
	gluOrtho2D(320, 620.0, 1990.0, 2025.0);

}
void display1(void)
{
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	glColor3f(0, 0, 0);


	//Face
	for (int m = 0; m < 18; m++)
	{
		int yeary = yearar[m];
		int viox = vioar[m];
		glColor3f(1, 0, 1.5);
		glBegin(GL_POLYGON);
		for (int i = 0; i < 360; i++) {
			float theta = i * 3.1415926 / 180;
			glVertex2f(viox + 2 * cos(theta), yeary + 2 * sin(theta));
		}
		glEnd();
	}
	glColor3f(0, 0, 0);
	string yeartitle = "Year";
	glRasterPos2f(352, 2020);
	for (int i = 0; i < yeartitle.length(); i++) {
		glutBitmapCharacter(GLUT_BITMAP_8_BY_13, int(yeartitle.data()[i]));
	}

	string murdertitle = "Murder Rate";
	glRasterPos2f(490, 1993);
	for (int i = 0; i < murdertitle.length(); i++) {
		glutBitmapCharacter(GLUT_BITMAP_8_BY_13, int(murdertitle.data()[i]));
	}
	string year97 = "1997";
	glRasterPos2f(340, 1995);
	for (int i = 0; i < year97.length(); i++) {
		glutBitmapCharacter(GLUT_BITMAP_8_BY_13, int(year97.data()[i]));
	}
	string year16 = "2016";
	glRasterPos2f(340, 2016);
	for (int i = 0; i < year16.length(); i++) {
		glutBitmapCharacter(GLUT_BITMAP_8_BY_13, int(year16.data()[i]));
	}
	string num300 = "300";
	glRasterPos2f(355, 1994);
	for (int i = 0; i < num300.length(); i++) {
		glutBitmapCharacter(GLUT_BITMAP_8_BY_13, int(num300.data()[i]));
	}
	string num620 = "620";
	glRasterPos2f(610, 1994);
	for (int i = 0; i < num620.length(); i++) {
		glutBitmapCharacter(GLUT_BITMAP_8_BY_13, int(num620.data()[i]));
	}

	glBegin(GL_LINES);
	glColor3f(0, 0, 0);
	//left side
	glVertex2i(355, 1995);
	glVertex2i(355, 2020);

	//botoom
	glVertex2i(355,1995);
	glVertex2i(615, 1995);

	glEnd();

	glBegin(GL_LINES);
	glColor3f(0, 2, 4);
	
	glVertex2i(vioar[0], violine[0]);
	glVertex2i(vioar[17], violine[17]);


	glEnd();



	glFlush();
}

void init2(void)
{
	glClearColor(1, 1, 1, 1);
	glMatrixMode(GL_PROJECTION);
	//gluOrtho2D(left,right,bottom,top);
	gluOrtho2D(80, 200, 1990.0, 2025.0);

}
void display2(void)
{
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	glColor3f(0, 0, 0);


	//Face
	for (int m = 0; m < 18; m++)
	{
		int yeary = yearar[m];

		int robx = robar[m];
		glColor3f(1, 0, 0);
		glBegin(GL_POLYGON);
		for (int k = 0; k < 360; k++) {
			float theta = k * 3.1415926 / 180;
			glVertex2f(robx + 2 * cos(theta), yeary + 2 * sin(theta));
		}
		glEnd();
	}

	glColor3f(0, 0, 0);
	string yeartitle = "Year";
	glRasterPos2f(93, 2021);
	for (int i = 0; i < yeartitle.length(); i++) {
		glutBitmapCharacter(GLUT_BITMAP_8_BY_13, int(yeartitle.data()[i]));
	}

	string murdertitle = "Murder Rate";
	glRasterPos2f(140, 1993);
	for (int i = 0; i < murdertitle.length(); i++) {
		glutBitmapCharacter(GLUT_BITMAP_8_BY_13, int(murdertitle.data()[i]));
	}
	string year97 = "1997";
	glRasterPos2f(88, 1995);
	for (int i = 0; i < year97.length(); i++) {
		glutBitmapCharacter(GLUT_BITMAP_8_BY_13, int(year97.data()[i]));
	}
	string year16 = "2016";
	glRasterPos2f(88, 2016);
	for (int i = 0; i < year16.length(); i++) {
		glutBitmapCharacter(GLUT_BITMAP_8_BY_13, int(year16.data()[i]));
	}
	string num80 = "80";
	glRasterPos2f(95, 1994);
	for (int i = 0; i < num80.length(); i++) {
		glutBitmapCharacter(GLUT_BITMAP_8_BY_13, int(num80.data()[i]));
	}
	string num200 = "200";
	glRasterPos2f(190, 1994);
	for (int i = 0; i < num200.length(); i++) {
		glutBitmapCharacter(GLUT_BITMAP_8_BY_13, int(num200.data()[i]));
	}

	glBegin(GL_LINES);
	glColor3f(0, 0, 0);
	//left side
	glVertex2i(95, 1995);
	glVertex2i(95, 2020);

	//botoom
	glVertex2i(95, 1995);
	glVertex2i(190, 1995);

	glEnd();
	

	glBegin(GL_LINES);
	glColor3f(1, 0, 4);

	glVertex2i(robar[0], robline[0]);
	glVertex2i(robar[17], robline[17]);


	glEnd();

	glFlush();
}

void init3(void)
{
	glClearColor(1, 1, 1, 1);
	glMatrixMode(GL_PROJECTION);
	//gluOrtho2D(left,right,bottom,top);
	gluOrtho2D(190, 400.0, 1990.0, 2025.0);

}
void display3(void)
{
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	glColor3f(0, 0, 0);


	//Face
	for (int m = 0; m < 18; m++)
	{
		int yeary = yearar[m];

		int assax = assaar[m];
		glColor3f(0, 0, 1.5);
		glBegin(GL_POLYGON);
		for (int l = 0; l < 360; l++) {
			float theta = l *3.1415926 / 180;
			glVertex2f(assax + 2 * cos(theta), yeary + 2 * sin(theta));
		}
		glEnd();
	}

	glColor3f(0, 0, 0);
	string yeartitle = "Year";
	glRasterPos2f(220, 2020);
	for (int i = 0; i < yeartitle.length(); i++) {
		glutBitmapCharacter(GLUT_BITMAP_8_BY_13, int(yeartitle.data()[i]));
	}

	string murdertitle = "Murder Rate";
	glRasterPos2f(300, 1993);
	for (int i = 0; i < murdertitle.length(); i++) {
		glutBitmapCharacter(GLUT_BITMAP_8_BY_13, int(murdertitle.data()[i]));
	}
	string year97 = "1997";
	glRasterPos2f(210, 1995);
	for (int i = 0; i < year97.length(); i++) {
		glutBitmapCharacter(GLUT_BITMAP_8_BY_13, int(year97.data()[i]));
	}
	string year16 = "2016";
	glRasterPos2f(210, 2016);
	for (int i = 0; i < year16.length(); i++) {
		glutBitmapCharacter(GLUT_BITMAP_8_BY_13, int(year16.data()[i]));
	}
	string num200 = "200";
	glRasterPos2f(220, 1994);
	for (int i = 0; i < num200.length(); i++) {
		glutBitmapCharacter(GLUT_BITMAP_8_BY_13, int(num200.data()[i]));
	}
	string num400 = "400";
	glRasterPos2f(390, 1994);
	for (int i = 0; i < num400.length(); i++) {
		glutBitmapCharacter(GLUT_BITMAP_8_BY_13, int(num400.data()[i]));
	}

	glBegin(GL_LINES);
	glColor3f(0, 0, 0);
	//left side
	glVertex2i(220, 1995);
	glVertex2i(220, 2020);

	//botoom
	glVertex2i(220, 1995);
	glVertex2i(390, 1995);

	glEnd();

	glBegin(GL_LINES);
	glColor3f(1, 0, 0);

	glVertex2i(assaar[0], assaline[0]);
	glVertex2i(assaar[17], assaline[17]);


	glEnd();

	glFlush();
}
int main(int argc, char** argv)
{
	fstream file("murder.txt");
	string line;
	string year, violent, robbery, assault;
	double yearmean = 0;
	double viomean = 0;
	double robmean = 0;
	double assamean = 0;
	double robsumden = 0;
	double viosumden = 0;
	double yearsumden = 0;
	double assasumden = 0;
	double robsumnum = 0;
	double viosumnum = 0;
	double yearsumnum = 0;
	double assasumnum = 0;
	double robcor = 0;
	double viocor = 0;
	double assacor = 0;
	double robrob = 0;
	double robvio = 0;
	double robassa = 0;
	double assaassa = 0;
	double assavio = 0;
	double assarob = 0;
	double viovio = 0;
	double vioassa = 0;
	double viorob = 0;
	double robsumassa = 0;
	double robsumvio = 0;
	double assasumrob = 0;
	double assasumvio = 0;
	double viosumassa = 0;
	double viosumrob = 0;
	double robsumrob = 0;
	double viosumvio = 0;
	double assasumassa = 0;
	double yearsum = 0;
	double viosum = 0;
	double robsum = 0;
	double assasum = 0;




	int j = 0;


	while (getline(file, line))
	{
		istringstream ss(line);
		if (ss >> year >> violent >> robbery >> assault)
		{}
		yearar[j] = stod(year);
		vioar[j] = stod(violent);
		robar[j] = stod(robbery);
		assaar[j] = stod(assault);
		yearsum += yearar[j];
		viosum += vioar[j];
		robsum += robar[j];
		assasum += assaar[j];

		j++;

	}
	yearmean = yearsum / j;
	viomean = viosum / j;
	robmean = robsum / j;
	assamean = assasum / j;

	//for robbery
	for (int j2 = 0; j2 < j; j2++)
	{
		robsumnum += ((robar[j2] - robmean))*((yearar[j2] - yearmean));
		robsumden += sqrt(((robar[j2] - robmean)*(robar[j2] - robmean))*((yearar[j2] - yearmean)*(yearar[j2] - yearmean)));

		robsumassa += ((robar[j2] - robmean))*((assaar[j2] - assamean));
		robsumvio += ((robar[j2] - robmean))*((vioar[j2] - viomean));
		robsumrob += ((robar[j2] - robmean))*((robar[j2] - robmean));

		viosumnum += ((vioar[j2] - viomean))*((yearar[j2] - yearmean));
		viosumden += sqrt(((vioar[j2] - viomean)*(vioar[j2] - viomean))*((yearar[j2] - yearmean)*(yearar[j2] - yearmean)));

		viosumrob += ((vioar[j2] - viomean))*((robar[j2] - robmean));
		viosumassa += ((assaar[j2] - assamean))*((vioar[j2] - viomean));
		viosumvio += ((vioar[j2] - viomean))*((vioar[j2] - viomean));

		assasumnum += ((assaar[j2] - assamean))*((yearar[j2] - yearmean));
		assasumden += sqrt(((assaar[j2] - assamean)*(assaar[j2] - assamean))*((yearar[j2] - yearmean)*(yearar[j2] - yearmean)));

		assasumrob += ((assaar[j2] - assamean))*((robar[j2] - robmean));
		assasumvio += ((assaar[j2] - assamean))*((vioar[j2] - viomean));
		assasumassa += ((assaar[j2] - assamean))*((assaar[j2] - assamean));
	}


	cout << "The correlation coefficient for Robbery Murder Rate: " << robsumnum / robsumden << endl;
	cout << "The correlation coefficient for Violence Murder Rate: " << viosumnum / viosumden << endl;
	cout << "The correlation coefficient for Assault Murder Rate: " << assasumnum / assasumden << endl;

	//Covariance matrix
	robrob = robsumrob / j;
	robassa = robsumassa / j;
	robvio = robsumvio / j;

	assaassa = assasumassa / j;
	assarob = assasumrob / j;
	assavio = assasumvio / j;

	viovio = viosumvio / j;
	vioassa = viosumassa / j;
	viorob = viosumrob / j;

	cout << endl << "The Covariance Matrix:" << endl << endl;
	cout << "             Robery      Assault    Violence" << endl;
	cout << "Robery:   "<< robrob << " " << robassa << " " << robvio << endl;
	cout << "Assault:  "<< assarob << " " << assaassa << " " << assavio << endl;
	cout << "Violence: "<< viorob << " " << vioassa << " " << viovio << endl;

	//calculatings the least squares values
		//for robbery

	double robMx = 0;
	double robMnum = 0;
	double robMden = 0;
	double robM = 0;
	double vioMx = 0;
	double vioMnum = 0;
	double vioMden = 0;
	double vioM = 0;
	double assaMx = 0;
	double assaMnum = 0;
	double assaMden = 0;
	double assaM = 0;
	double robB = 0;
	double vioB = 0;
	double assaB = 0;
	double yearysum = 0;
	


	for (int j4 = 0; j4 < j; j4++)
	{
		robMnum += (robar[j4] - robmean)*(yearar[j4] - yearmean);
		robMden += (robar[j4] - robmean)*(robar[j4] - robmean);

		vioMnum += (vioar[j4] - viomean)*(yearar[j4] - yearmean);
		vioMden += (vioar[j4] - viomean)*(vioar[j4] - viomean);

		assaMnum += (assaar[j4] - assamean)*(yearar[j4] - yearmean);
		assaMden += (assaar[j4] - assamean)*(assaar[j4] - assamean);

	}
	robM = robMnum / robMden;
	vioM = vioMnum / vioMden;
	assaM = assaMnum / assaMden;
	robB = yearmean - (robM * robmean);
	vioB = yearmean - (vioM * viomean);
	assaB = yearmean - (assaM * assamean);


	cout << endl << endl;
	cout << "The equation for the Least Square Regression Line for Robbery Murder Rate: y = " << robM << "x + " << robB << endl;
	cout << "The equation for the Least Square Regression Line for Violent Murder Rate: y = " << vioM << "x + " << vioB << endl;
	cout << "The equation for the Least Square Regression Line for Assault Murder Rate: y = " << assaM << "x + " << assaB << endl;

	for (int j5 = 0; j5 < j; j5++)
	{
		robline[j5] = (robM * robar[j5]) + robB;
		violine[j5] = (vioM * vioar[j5]) + vioB;

		assaline[j5] = (assaM * assaar[j5]) + assaB;

	}
	


	glutInit(&argc, argv);                       // Initializing openGL
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);  //choice of buffering and choice of color
	glutInitWindowPosition(50, 50);
	glutInitWindowSize(700, 700);
	glutCreateWindow("Scatterplots Violent Murders");
	init1();
	glutDisplayFunc(display1);
	glutCreateWindow("Scatterplots Robbery Murders");
	init2();
	glutDisplayFunc(display2);
	glutCreateWindow("Scatterplots Assault Murders");
	init3();
	glutDisplayFunc(display3);
	glutMainLoop();
	return 0;
}
