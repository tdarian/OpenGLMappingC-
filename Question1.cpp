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
void init(void);
void display(void);
double wagear[18];
double wagear2[18];

void init(void)
{
	glClearColor(1, 1, 1, 1);
	glMatrixMode(GL_PROJECTION);
	//gluOrtho2D(left,right,bottom,top);
	gluOrtho2D(0, 1100.0, 0, 1100.0);
}
void display(void)
{
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	glColor3f(0, 0, 0);
	glBegin(GL_LINES);
	//side
	glVertex2i(100, 1000);
	glVertex2i(100, 100);

	//bottom
	glVertex2i(100, 100);
	glVertex2i(1000, 100);

	glEnd();
	int x1 = 100;
	int x2 = 150;
	int x1name = 120;
	int y1name = 900;
	int y1 = 0;
	int y2 = 100;
	string jobname[18] = { "Retail", "Data Entry Clerk", "Accounting Clerk", "Bookkeeper", "TruckDriver",
	"Carpenter", "Executive Assistant", "Electrician", "Plumber", "Social Worker", "Architect", "Registered Nurse",
	"Physiotherapist", "Computer Engineer", "Lawyer", "Computer Manager", "Engineering Manager", "Dentist" };
	string jobnum[18] = { "1","2", "3", "4", "5", "6", "7", "8", "9", "10", "11", "12", "13", "14", "15", "16", "17", "18" };
	for (int m = 0; m < 18; m++)
	{

		y1 = wagear[m] * 10;

		glBegin(GL_LINES);
		//left side
		glVertex2i(x1, y1);
		glVertex2i(x1, y2);

		//top
		glVertex2i(x1, y1);
		glVertex2i(x2, y1);

		//right side
		glVertex2i(x2, y1);
		glVertex2i(x2, y2);

		glEnd();
		x1 += 50;
		x2 += 50;

		glRasterPos2f(x1name, 70);
		for (int i = 0; i < jobnum[m].length(); i++) {
			glutBitmapCharacter(GLUT_BITMAP_8_BY_13, int(jobnum[m].data()[i]));
		}
		x1name += 50;

		glRasterPos2f(145, y1name);
		for (int i = 0; i < jobname[m].length(); i++) {
			glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10, int(jobname[m].data()[i]));
		}
	
		glRasterPos2f(130, y1name);
		for (int i = 0; i < jobnum[m].length(); i++) {
			glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10, int(jobnum[m].data()[i]));
		}
		y1name -= 20;
	}

	string title = "Job Title";
	glRasterPos2f(500, 40);
	for (int i = 0; i < title.length(); i++) {
		glutBitmapCharacter(GLUT_BITMAP_8_BY_13, int(title.data()[i]));
	}
	string hourstitle = "Hourly Wage($)";
	glRasterPos2f(40, 1025);
	for (int i = 0; i < hourstitle.length(); i++) {
		glutBitmapCharacter(GLUT_BITMAP_8_BY_13, int(hourstitle.data()[i]));
	}

	string low = "14";
	glRasterPos2f(75, 140);
	for (int i = 0; i < low.length(); i++) {
		glutBitmapCharacter(GLUT_BITMAP_8_BY_13, int(low.data()[i]));
	}

	string high = "75";
	glRasterPos2f(75, 750);
	for (int i = 0; i < high.length(); i++) {
		glutBitmapCharacter(GLUT_BITMAP_8_BY_13, int(high.data()[i]));
	}
	glFlush();
}


int main(int argc, char** argv)
{
	fstream file("jobs.txt");
	string line;
	string job, wage;
	string jobar[18];
	string jobar2[18];
	fstream file2("jobscalgary.txt");
	string line2;
	string job2, wage2;

	

	double wagesum = 0;
	double wagesum2 = 0;
	double wagemean = 0;
	double wagemean2 = 0;
	double wagenumer = 0;
	double wagenumer2 = 0;
	double wagevar = 0;
	double wagevar2 = 0;
	double unigauss = 0;
	double bhatta = 0;
	int i = 0;
	int j = 0;
	int i2 = 0;
	int j2 = 0;

	while (getline(file2, line2))
	{
		istringstream ss2(line2);
		if (ss2 >> job2 >> wage2)
		{}
		jobar2[i2] = job2;

		wagear2[i2] = stod(wage2);
		wagesum2 += wagear2[i2];
		i2++;

	}
	wagemean2 = wagesum2 / i2;
	while (getline(file, line))
	{
		istringstream ss(line);
		if (ss >> job >> wage)
		{}
			jobar[i] = job;

			wagear[i] = stod(wage);
			wagesum += wagear[i];
			i++;

	}
	wagemean = wagesum / i;

	cout<< "Hourly Wage Mean for Toronto: " << wagemean << endl;

	for (j = 0; j < i; j++)
	{
		wagenumer += (wagear[j] - wagemean)*(wagear[j] - wagemean);
	}
	wagevar = wagenumer / i;

	for (j2 = 0; j2 < i2; j2++)
	{
		wagenumer2 += (wagear2[j2] - wagemean2)*(wagear2[j2] - wagemean2);
	}
	wagevar2 = wagenumer2 / i2;

	cout << "Hourly Wage Variance for Toronto: " << wagevar << endl;
	unigauss = (1 / (sqrt(2 * M_PI*wagevar)))*(exp(((-(wagenumer)) / (2 * wagevar))));
	cout << "The Univariate Gaussian Distribution value for Toronto: " << unigauss << endl;
	cout << endl << endl;
	cout << "Hourly Wage Mean for Calgary: " << wagemean2 << endl;
	cout << "Hourly Wage Variance for Calgary: " << wagevar2 << endl;
	cout << endl << endl;
	cout << "The Bhattacharyya Coefficient between Toronto and Calgary Values: " << bhatta;

	glutInit(&argc, argv);                       // Initializing openGL
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);  //choice of buffering and choice of color
	glutInitWindowPosition(50, 50);
	glutInitWindowSize(800, 800);
	glutCreateWindow("Histogram for Toronto Question1");
	init();
	glutDisplayFunc(display);
	glutMainLoop();
	return 0;
}
