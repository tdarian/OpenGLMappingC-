#include <stdlib.h>   
#include <glew.h>
#include <gl/glut.h>
#include <glut.h>
#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
#define _USE_MATH_DEFINES5
#include <math.h>
#include <sstream>
#define STB_IMAGE_IMPLEMENTATION
#include <stb-master/stb_image.h>

using namespace std;

void display(void);
void loadTexture(string file);
int startselect = 0;
int desselect = 0;


void loadTexture(string file) {
	// load texture from image file
	GLuint texture = 0;
	int width, height, channels;
	unsigned char* image = stbi_load(file.c_str(), &width, &height, &channels, texture);
	glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, width, height, 0, GL_RGBA, GL_UNSIGNED_BYTE, image);

	// set texture parameters
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_CLAMP_TO_BORDER);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_CLAMP_TO_BORDER);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);

	// bind texture
	glBindTexture(texture, GL_TEXTURE_2D);

	// enable texture
	glEnable(GL_TEXTURE_2D);

	// free the image
	stbi_image_free(image);
	return;
}



void display(void) {
	//Description: Main glut display function
	// clear buffers
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

	// create a place to put the texture
	glBegin(GL_QUADS);
	glTexCoord2d(0.0f, 0.0f); glVertex2d(-1.0f, 1.0f);
	glTexCoord2d(1.0f, 0.0f); glVertex2d(1.0f, 1.0f);
	glTexCoord2d(1.0f, 1.0f); glVertex2d(1.0f, -1.0f);
	glTexCoord2d(0.0f, 1.0f); glVertex2d(-1.0f, -1.0f);
	glEnd();

	glDisable(GL_TEXTURE_2D);

	// reset colour to white
	glColor3f(1.0f, 1.0f, 1.0f);

	// enable 2D-texture
	glEnable(GL_TEXTURE_2D);
	// swap buffers
	glutSwapBuffers();
	//asb
	glColor3f(1, 0.5, 0);

		//1lululemon
		glBegin(GL_POLYGON);
		for (int i = 0; i < 360; i++) {
			float theta = i * 3.1415926 / 180;
			glVertex2f(0.3 + 0.02 * cos(theta), 0.3 + 0.02 * sin(theta));
		}
		glEnd();

		//2TD ATM
		glBegin(GL_POLYGON);
		for (int i = 0; i < 360; i++) {
			float theta = i * 3.1415926 / 180;
			glVertex2f(0.25 + 0.02 * cos(theta), 0.4 + 0.02 * sin(theta));
		}
		glEnd();
		//3ugg
		glBegin(GL_POLYGON);
		for (int i = 0; i < 360; i++) {
			float theta = i * 3.1415926 / 180;
			glVertex2f(0.4 + 0.02 * cos(theta), 0.28 + 0.02 * sin(theta));
		}
		glEnd();
		//4MAC
		glBegin(GL_POLYGON);
		for (int i = 0; i < 360; i++) {
			float theta = i * 3.1415926 / 180;
			glVertex2f(0.5 + 0.02 * cos(theta), 0.03 + 0.02 * sin(theta));
		}
		glEnd();
		//5footlocker
		glBegin(GL_POLYGON);
		for (int i = 0; i < 360; i++) {
			float theta = i * 3.1415926 / 180;
			glVertex2f(0.6 + 0.02 * cos(theta), 0.2 + 0.02 * sin(theta));
		}
		glEnd();
		//6HOME
		glBegin(GL_POLYGON);
		for (int i = 0; i < 360; i++) {
			float theta = i * 3.1415926 / 180;
			glVertex2f(-0.05 + 0.02 * cos(theta), -0.55 + 0.02 * sin(theta));
		}
		glEnd();
		//7japadog
		glBegin(GL_POLYGON);
		for (int i = 0; i < 360; i++) {
			float theta = i * 3.1415926 / 180;
			glVertex2f(-0.05 + 0.02 * cos(theta), -0.15 + 0.02 * sin(theta));
		}
		glEnd();
		//8Boston Pizza
		glBegin(GL_POLYGON);
		for (int i = 0; i < 360; i++) {
			float theta = i * 3.1415926 / 180;
			glVertex2f(0.16 + 0.02 * cos(theta), -0.46 + 0.02 * sin(theta));
		}
		glEnd();
		//9YMCA
		glBegin(GL_POLYGON);
		for (int i = 0; i < 360; i++) {
			float theta = i * 3.1415926 / 180;
			glVertex2f(-0.29 + 0.02 * cos(theta), -0.46 + 0.02 * sin(theta));
		}
		glEnd();
		//Firestation
		glBegin(GL_POLYGON);
		for (int i = 0; i < 360; i++) {
			float theta = i * 3.1415926 / 180;
			glVertex2f(-0.47 + 0.02 * cos(theta),  0.63 + 0.02 * sin(theta));
		}
		glEnd();

		glDisable(GL_TEXTURE_2D);
		glColor3f(1, 0, 0);
		if ((startselect == 1 && desselect == 2)||(startselect == 2 && desselect == 1))
		{
			glBegin(GL_LINES);

			glVertex2f(0.3, 0.3);
			glVertex2f(0.25, 0.4);
			glEnd();
		}
		if ((startselect == 1 && desselect == 3) || (startselect == 3 && desselect == 1))
		{
			glBegin(GL_LINES);

			glVertex2f(0.3, 0.3);
			glVertex2f(0.4, 0.28);
			glEnd();
		}
		if ((startselect == 1 && desselect == 4) || (startselect == 4 && desselect == 1))
		{
			glBegin(GL_LINES);

			glVertex2f(0.3, 0.3);
			glVertex2f(0.5, 0.03);
			glEnd();
		}
		if ((startselect == 1 && desselect == 5) || (startselect == 5 && desselect == 1))
		{
			glBegin(GL_LINES);

			glVertex2f(0.3, 0.3);
			glVertex2f(0.6,0.2);
			glEnd();
		}
		if ((startselect == 1 && desselect == 6) || (startselect == 6 && desselect == 1))
		{
			glBegin(GL_LINES);

			glVertex2f(0.3, 0.3);
			glVertex2f(-0.05,-0.55);
			glEnd();
		}
		if ((startselect == 1 && desselect == 7) || (startselect == 7 && desselect == 1))
		{
			glBegin(GL_LINES);

			glVertex2f(0.3, 0.3);
			glVertex2f(-0.05,-0.15);
			glEnd();
		}
		if ((startselect == 1 && desselect == 8) || (startselect == 8 && desselect == 1))
		{
			glBegin(GL_LINES);

			glVertex2f(0.3, 0.3);
			glVertex2f(0.16,-0.46);
			glEnd();
		}
		if ((startselect == 1 && desselect == 9) || (startselect == 9 && desselect == 1))
		{
			glBegin(GL_LINES);

			glVertex2f(0.3, 0.3);
			glVertex2f(-0.47,0.63);
			glEnd();
		}

		if ((startselect == 2 && desselect == 3) || (startselect == 3 && desselect == 2))
		{
			glBegin(GL_LINES);
			glVertex2f(0.25, 0.4);
			glVertex2f(0.48, 0.28);
			
			glEnd();
		}

		if ((startselect == 2 && desselect == 4) || (startselect == 4 && desselect == 2))
		{
			glBegin(GL_LINES);
			glVertex2f(0.25, 0.4);
			glVertex2f(0.5, 0.03);

			glEnd();
		}
		if ((startselect == 2 && desselect == 5) || (startselect == 5 && desselect == 2))
		{
			glBegin(GL_LINES);
			glVertex2f(0.25, 0.4);
			glVertex2f(0.6, 0.2);

			glEnd();
		}
		if ((startselect == 2 && desselect == 6) || (startselect == 6 && desselect == 2))
		{
			glBegin(GL_LINES);
			glVertex2f(0.25, 0.4);
			glVertex2f(-0.05, -0.55);

			glEnd();
		}
		if ((startselect == 2 && desselect == 7) || (startselect == 7 && desselect == 2))
		{
			glBegin(GL_LINES);
			glVertex2f(0.25, 0.4);
			glVertex2f(-0.05, -0.15);

			glEnd();
		}
		if ((startselect == 2 && desselect == 8) || (startselect == 8 && desselect == 2))
		{
			glBegin(GL_LINES);
			glVertex2f(0.25, 0.4);
			glVertex2f(0.16, -0.46);

			glEnd();
		}
		if ((startselect == 2 && desselect == 9) || (startselect == 9 && desselect == 2))
		{
			glBegin(GL_LINES);
			glVertex2f(0.25, 0.4);
			glVertex2f(-0.29, -0.46);

			glEnd();
		}
		if ((startselect == 2 && desselect == 10) || (startselect == 10 && desselect == 2))
		{
			glBegin(GL_LINES);
			glVertex2f(0.25, 0.4);
			glVertex2f(-0.47, 0.63);

			glEnd();
		}

		if ((startselect == 3 && desselect == 4) || (startselect == 4 && desselect == 3))
		{
			glBegin(GL_LINES);
			glVertex2f(0.4, 0.28);
			glVertex2f(0.5, 0.03);

			glEnd();
		}
		if ((startselect == 3 && desselect == 5) || (startselect == 5 && desselect == 3))
		{
			glBegin(GL_LINES);
			glVertex2f(0.4, 0.28);
			glVertex2f(0.6, 0.2);

			glEnd();
		}
		if ((startselect == 3 && desselect == 6) || (startselect == 6 && desselect == 3))
		{
			glBegin(GL_LINES);
			glVertex2f(0.4, 0.28);
			glVertex2f(-0.05, -0.55);

			glEnd();
		}
		if ((startselect == 3 && desselect == 7) || (startselect == 7 && desselect == 3))
		{
			glBegin(GL_LINES);
			glVertex2f(0.4, 0.28);
			glVertex2f(-0.05, -0.15);

			glEnd();
		}
		if ((startselect == 3 && desselect == 8) || (startselect == 8 && desselect == 3))
		{
			glBegin(GL_LINES);
			glVertex2f(0.4, 0.28);
			glVertex2f(0.16, -0.46);

			glEnd();
		}
		if ((startselect == 3 && desselect == 9) || (startselect == 9 && desselect == 3))
		{
			glBegin(GL_LINES);
			glVertex2f(0.4, 0.28);
			glVertex2f(-0.29, -0.46);

			glEnd();
		}
		if ((startselect == 3 && desselect == 10) || (startselect == 10 && desselect == 3))
		{
			glBegin(GL_LINES);
			glVertex2f(0.4, 0.28);
			glVertex2f(-0.47, 0.63);

			glEnd();
		}

		if ((startselect == 4 && desselect == 5) || (startselect == 5 && desselect == 4))
		{
			glBegin(GL_LINES);
			glVertex2f(0.5, 0.03);
			glVertex2f(0.6, 0.2);

			glEnd();
		}
		if ((startselect == 4 && desselect == 6) || (startselect == 6 && desselect == 4))
		{
			glBegin(GL_LINES);
			glVertex2f(0.5, 0.03);
			glVertex2f(-0.05, -0.55);

			glEnd();
		}
		if ((startselect == 4 && desselect == 7) || (startselect == 7 && desselect == 4))
		{
			glBegin(GL_LINES);
			glVertex2f(0.5, 0.03);
			glVertex2f(-0.05, -0.15);

			glEnd();
		}
		if ((startselect == 4 && desselect == 8) || (startselect == 8 && desselect == 4))
		{
			glBegin(GL_LINES);
			glVertex2f(0.5, 0.03);
			glVertex2f(0.16, -0.46);

			glEnd();
		}
		if ((startselect == 4 && desselect == 9) || (startselect == 9 && desselect == 4))
		{
			glBegin(GL_LINES);
			glVertex2f(0.5, 0.03);
			glVertex2f(-0.29, -0.46);

			glEnd();
		}
		if ((startselect == 4 && desselect == 10) || (startselect == 10 && desselect == 4))
		{
			glBegin(GL_LINES);
			glVertex2f(0.5, 0.03);
			glVertex2f(-0.47, 0.63);

			glEnd();
		}

		if ((startselect == 5 && desselect == 6) || (startselect == 6 && desselect == 5))
		{
			glBegin(GL_LINES);
			glVertex2f(0.6, 0.2);
			glVertex2f(-0.05, -0.55);

			glEnd();
		}
		if ((startselect == 5 && desselect == 7) || (startselect == 7 && desselect == 5))
		{
			glBegin(GL_LINES);
			glVertex2f(0.6, 0.2);
			glVertex2f(-0.05, -0.15);

			glEnd();
		}
		if ((startselect == 5 && desselect == 8) || (startselect == 8 && desselect == 5))
		{
			glBegin(GL_LINES);
			glVertex2f(0.6, 0.2);
			glVertex2f(0.16, -0.46);

			glEnd();
		}
		if ((startselect == 5 && desselect == 9) || (startselect == 9 && desselect == 5))
		{
			glBegin(GL_LINES);
			glVertex2f(0.6, 0.2);
			glVertex2f(-0.29, -0.46);

			glEnd();
		}
		if ((startselect == 5 && desselect == 10) || (startselect == 10 && desselect == 5))
		{
			glBegin(GL_LINES);
			glVertex2f(0.6, 0.2);
			glVertex2f(-0.47, 0.63);

			glEnd();
		}

		if ((startselect == 6 && desselect == 7) || (startselect == 7 && desselect == 6))
		{
			glBegin(GL_LINES);
			glVertex2f(-0.05, -0.55);
			glVertex2f(-0.05, -0.15);

			glEnd();
		}
		if ((startselect == 6 && desselect == 8) || (startselect == 8 && desselect == 6))
		{
			glBegin(GL_LINES);
			glVertex2f(-0.05, -0.55);
			glVertex2f(0.16, -0.46);

			glEnd();
		}
		if ((startselect == 6 && desselect == 9) || (startselect == 9 && desselect == 6))
		{
			glBegin(GL_LINES);
			glVertex2f(-0.05, -0.55);
			glVertex2f(-0.29, -0.46);

			glEnd();
		}
		if ((startselect == 6 && desselect == 10) || (startselect == 10 && desselect == 6))
		{
			glBegin(GL_LINES);
			glVertex2f(-0.05, -0.55);
			glVertex2f(-0.47, -0.63);

			glEnd();
		}
		if ((startselect == 7 && desselect == 8) || (startselect == 8 && desselect == 7))
		{
			glBegin(GL_LINES);
			glVertex2f(-0.05, -0.15);
			glVertex2f(0.16, -0.46);

			glEnd();
		}
		if ((startselect == 7 && desselect == 9) || (startselect == 9 && desselect == 7))
		{
			glBegin(GL_LINES);
			glVertex2f(-0.05, -0.15);
			glVertex2f(-0.29, -0.46);

			glEnd();
		}
		if ((startselect == 7 && desselect == 10) || (startselect == 10 && desselect == 7))
		{
			glBegin(GL_LINES);
			glVertex2f(-0.05, -0.15);
			glVertex2f(-0.47, 0.63);

			glEnd();
		}
		if ((startselect == 8 && desselect == 9) || (startselect == 9 && desselect == 8))
		{
			glBegin(GL_LINES);
			glVertex2f(0.16, -0.46);
			glVertex2f(-0.29, -0.46);

			glEnd();
		}
		if ((startselect == 7 && desselect == 10) || (startselect == 10 && desselect == 7))
		{
			glBegin(GL_LINES);
			glVertex2f(0.16, -0.46);
			glVertex2f(-0.47, 0.63);

			glEnd();
		}
		if ((startselect == 9 && desselect == 10) || (startselect == 10 && desselect == 9))
		{
			glBegin(GL_LINES);
			glVertex2f(-0.29, -0.46);
			glVertex2f(-0.47, 0.63);

			glEnd();
		}

		glEnable(GL_TEXTURE_2D);

	glFlush();
}



int main(int argc, char** argv)
{
	cout << "List of possible locations:" << endl;
	cout << "1.Lululemon" << endl << "2.TD ATM" << endl << "3.UGG Store" << endl << "4.MAC" << endl << "5.Footlocker" << endl;
	cout << "6.Home" << endl << "7.Home" << endl << "8.Japadog" << endl << "9.YMCA" << endl << "10.Firestation" << endl;
	cout << "Where is your starting location?" << endl;
	cin >> startselect;
	cout << "Where is your destination?" << endl;
	cin >> desselect;
	glutInit(&argc, argv);                       // Initializing openGL
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);  //choice of buffering and choice of color
	glutInitWindowPosition(50, 50);
	glutInitWindowSize(800, 800);
	glutCreateWindow("Home Map");
	
	glutDisplayFunc(display);
	loadTexture("home1.png");
	glutMainLoop();


}