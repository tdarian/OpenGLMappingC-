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
int selection = 0;

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
	/*Description: Main glut display function*/
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
	if (selection == 0) {
		glBegin(GL_POLYGON);
		for (int i = 0; i < 360; i++) {
			float theta = i * 3.1415926 / 180;
			glVertex2f(0.1 + 0.02 * cos(theta), 0.1 + 0.02 * sin(theta));
		}
		glEnd();
		//busloop
		glBegin(GL_POLYGON);
		for (int i = 0; i < 360; i++) {
			float theta = i * 3.1415926 / 180;
			glVertex2f(0.3 + 0.02 * cos(theta), 0.3 + 0.02 * sin(theta));
		}
		glEnd();

		//university
		glBegin(GL_POLYGON);
		for (int i = 0; i < 360; i++) {
			float theta = i * 3.1415926 / 180;
			glVertex2f(0.8 + 0.02 * cos(theta), 0.4 + 0.02 * sin(theta));
		}
		glEnd();
		//loren davis
		glBegin(GL_POLYGON);
		for (int i = 0; i < 360; i++) {
			float theta = i * 3.1415926 / 180;
			glVertex2f(-0.2 + 0.02 * cos(theta), 0.2 + 0.02 * sin(theta));
		}
		glEnd();
		//blusson hall
		glBegin(GL_POLYGON);
		for (int i = 0; i < 360; i++) {
			float theta = i * 3.1415926 / 180;
			glVertex2f(0.3 + 0.02 * cos(theta), 0.4 + 0.02 * sin(theta));
		}
		glEnd();
		//aq pond
		glBegin(GL_POLYGON);
		for (int i = 0; i < 360; i++) {
			float theta = i * 3.1415926 / 180;
			glVertex2f(0.1 + 0.02 * cos(theta), 0.3 + 0.02 * sin(theta));
		}
		glEnd();
		//cornerstone
		glBegin(GL_POLYGON);
		for (int i = 0; i < 360; i++) {
			float theta = i * 3.1415926 / 180;
			glVertex2f(0.5 + 0.02 * cos(theta), 0.2 + 0.02 * sin(theta));
		}
		glEnd();
		//library
		glBegin(GL_POLYGON);
		for (int i = 0; i < 360; i++) {
			float theta = i * 3.1415926 / 180;
			glVertex2f(-0.05 + 0.02 * cos(theta), 0.15 + 0.02 * sin(theta));
		}
		glEnd();
		//maggie benson
		glBegin(GL_POLYGON);
		for (int i = 0; i < 360; i++) {
			float theta = i * 3.1415926 / 180;
			glVertex2f(-0.05 + 0.02 * cos(theta), 0.3 + 0.02 * sin(theta));
		}
		glEnd();

		//west mall
		glBegin(GL_POLYGON);
		for (int i = 0; i < 360; i++) {
			float theta = i * 3.1415926 / 180;
			glVertex2f(-0.25 + 0.02 * cos(theta), 0.3 + 0.02 * sin(theta));
		}
		glEnd();


		glDisable(GL_TEXTURE_2D);
		glColor3f(1, 0, 0);
		glBegin(GL_LINES);

		glVertex2f(0.8, 0.4);
		glVertex2f(-0.25, 0.3);

		glVertex2f(0.8, 0.4);
		glVertex2f(-0.05, 0.3);

		glVertex2f(0.8, 0.4);
		glVertex2f(-0.05, 0.15);

		glVertex2f(0.8, 0.4);
		glVertex2f(0.5, 0.2);

		glVertex2f(0.8, 0.4);
		glVertex2f(-0.2, 0.2);

		glVertex2f(0.8, 0.4);
		glVertex2f(0.1, 0.1);

		glVertex2f(0.8, 0.4);
		glVertex2f(0.3, 0.3);

		glVertex2f(0.8, 0.4);
		glVertex2f(0.1, 0.3);

		glVertex2f(0.8, 0.4);
		glVertex2f(0.3, 0.4);


		glEnd();
		glEnable(GL_TEXTURE_2D);


	}
	glColor3f(1, 0, 0);
	if (selection == 1)
	{
		
			glBegin(GL_POLYGON);
			for (int i = 0; i < 360; i++) {
				float theta = i * 3.1415926 / 180;
				glVertex2f(0.1 + 0.02 * cos(theta), 0.1 + 0.02 * sin(theta));
			}
			glEnd();

			//university
			glBegin(GL_POLYGON);
			for (int i = 0; i < 360; i++) {
				float theta = i * 3.1415926 / 180;
				glVertex2f(0.8 + 0.02 * cos(theta), 0.4 + 0.02 * sin(theta));
			}
			glEnd();

			glDisable(GL_TEXTURE_2D);
			glBegin(GL_LINES);
			glVertex2f(0.8, 0.4);
			glVertex2f(0.1, 0.1);
			glEnd();
			glEnable(GL_TEXTURE_2D);
	}
	if (selection == 2)
	{
		//busloop
		glBegin(GL_POLYGON);
		for (int i = 0; i < 360; i++) {
			float theta = i * 3.1415926 / 180;
			glVertex2f(0.3 + 0.02 * cos(theta), 0.3 + 0.02 * sin(theta));
		}
		glEnd();

		//university
		glBegin(GL_POLYGON);
		for (int i = 0; i < 360; i++) {
			float theta = i * 3.1415926 / 180;
			glVertex2f(0.8 + 0.02 * cos(theta), 0.4 + 0.02 * sin(theta));
		}
		glEnd();
		glDisable(GL_TEXTURE_2D);
		glBegin(GL_LINES);
		glVertex2f(0.8, 0.4);
		glVertex2f(0.3, 0.3);
		glEnd();
		glEnable(GL_TEXTURE_2D);
	}
	if (selection == 3)
	{

		//university
		glBegin(GL_POLYGON);
		for (int i = 0; i < 360; i++) {
			float theta = i * 3.1415926 / 180;
			glVertex2f(0.8 + 0.02 * cos(theta), 0.4 + 0.02 * sin(theta));
		}
		glEnd();
	}
	if (selection == 4)
	{
		//loren davis
		glBegin(GL_POLYGON);
		for (int i = 0; i < 360; i++) {
			float theta = i * 3.1415926 / 180;
			glVertex2f(-0.2 + 0.02 * cos(theta), 0.2 + 0.02 * sin(theta));
		}
		glEnd();
		//university
		glBegin(GL_POLYGON);
		for (int i = 0; i < 360; i++) {
			float theta = i * 3.1415926 / 180;
			glVertex2f(0.8 + 0.02 * cos(theta), 0.4 + 0.02 * sin(theta));
		}
		glEnd();
		glDisable(GL_TEXTURE_2D);
		glBegin(GL_LINES);
		glVertex2f(0.8, 0.4);
		glVertex2f(-0.2, 0.2);
		glEnd();
		glEnable(GL_TEXTURE_2D);
	}
	if (selection == 5)
	{
		//blusson hall
		glBegin(GL_POLYGON);
		for (int i = 0; i < 360; i++) {
			float theta = i * 3.1415926 / 180;
			glVertex2f(0.3 + 0.02 * cos(theta), 0.4 + 0.02 * sin(theta));
		}
		glEnd();
		//university
		glBegin(GL_POLYGON);
		for (int i = 0; i < 360; i++) {
			float theta = i * 3.1415926 / 180;
			glVertex2f(0.8 + 0.02 * cos(theta), 0.4 + 0.02 * sin(theta));
		}
		glEnd();
		glDisable(GL_TEXTURE_2D);
		glBegin(GL_LINES);
		glVertex2f(0.8, 0.4);
		glVertex2f(0.3, 0.4);
		glEnd();
		glEnable(GL_TEXTURE_2D);
	}
	if (selection == 6)
	{
		//aq pond
		glBegin(GL_POLYGON);
		for (int i = 0; i < 360; i++) {
			float theta = i * 3.1415926 / 180;
			glVertex2f(0.1 + 0.02 * cos(theta), 0.3 + 0.02 * sin(theta));
		}
		glEnd();
		//university
		glBegin(GL_POLYGON);
		for (int i = 0; i < 360; i++) {
			float theta = i * 3.1415926 / 180;
			glVertex2f(0.8 + 0.02 * cos(theta), 0.4 + 0.02 * sin(theta));
		}
		glEnd();
		glDisable(GL_TEXTURE_2D);
		glBegin(GL_LINES);
		glVertex2f(0.8, 0.4);
		glVertex2f(0.1, 0.3);
		glEnd();
		glEnable(GL_TEXTURE_2D);
	}
	if (selection == 7)
	{
		//cornerstone
		glBegin(GL_POLYGON);
		for (int i = 0; i < 360; i++) {
			float theta = i * 3.1415926 / 180;
			glVertex2f(0.5 + 0.02 * cos(theta), 0.2 + 0.02 * sin(theta));
		}
		glEnd();
		//university
		glBegin(GL_POLYGON);
		for (int i = 0; i < 360; i++) {
			float theta = i * 3.1415926 / 180;
			glVertex2f(0.8 + 0.02 * cos(theta), 0.4 + 0.02 * sin(theta));
		}
		glEnd();
		glDisable(GL_TEXTURE_2D);
		glBegin(GL_LINES);
		glVertex2f(0.8, 0.4);
		glVertex2f(0.5, 0.2);
		glEnd();
		glEnable(GL_TEXTURE_2D);
	}
	if (selection == 8)
	{
		//library
		glBegin(GL_POLYGON);
		for (int i = 0; i < 360; i++) {
			float theta = i * 3.1415926 / 180;
			glVertex2f(-0.05 + 0.02 * cos(theta), 0.15 + 0.02 * sin(theta));
		}
		glEnd();
		//university
		glBegin(GL_POLYGON);
		for (int i = 0; i < 360; i++) {
			float theta = i * 3.1415926 / 180;
			glVertex2f(0.8 + 0.02 * cos(theta), 0.4 + 0.02 * sin(theta));
		}
		glEnd();
		glDisable(GL_TEXTURE_2D);
		glBegin(GL_LINES);
		glVertex2f(0.8, 0.4);
		glVertex2f(-0.05, 0.15);
		glEnd();
		glEnable(GL_TEXTURE_2D);

	}
	if (selection == 9)
	{
		//maggie benson
		glBegin(GL_POLYGON);
		for (int i = 0; i < 360; i++) {
			float theta = i * 3.1415926 / 180;
			glVertex2f(-0.05 + 0.02 * cos(theta), 0.3 + 0.02 * sin(theta));
		}
		glEnd();
		//university
		glBegin(GL_POLYGON);
		for (int i = 0; i < 360; i++) {
			float theta = i * 3.1415926 / 180;
			glVertex2f(0.8 + 0.02 * cos(theta), 0.4 + 0.02 * sin(theta));
		}
		glEnd();
		glDisable(GL_TEXTURE_2D);
		glBegin(GL_LINES);
		glVertex2f(0.8, 0.4);
		glVertex2f(-0.05, 0.3);
		glEnd();
		glEnable(GL_TEXTURE_2D);
	}
	if (selection == 10)
	{
		//west mall
		glBegin(GL_POLYGON);
		for (int i = 0; i < 360; i++) {
			float theta = i * 3.1415926 / 180;
			glVertex2f(-0.25 + 0.02 * cos(theta), 0.3 + 0.02 * sin(theta));
		}
		glEnd();
		//university
		glBegin(GL_POLYGON);
		for (int i = 0; i < 360; i++) {
			float theta = i * 3.1415926 / 180;
			glVertex2f(0.8 + 0.02 * cos(theta), 0.4 + 0.02 * sin(theta));
		}
		glEnd();
		glDisable(GL_TEXTURE_2D);
		glBegin(GL_LINES);
		glVertex2f(0.8, 0.4);
		glVertex2f(-0.25, 0.3);
		glEnd();
		glEnable(GL_TEXTURE_2D);
	}
	glFlush();
}



int main(int argc, char** argv)
{
	cout << "Where would you like to go?" << endl << "Select the location by number." << endl;
	cout << "All values will lead you home to Univercity" << endl;
	cout << "0. All Locations" << endl << "1. ASB" << endl << "2. Busloop" << endl << "3. UniverCity" << endl << "4. Loren Davis Complex" << endl << "5. Blusson Hall" << endl;
	cout << "6. AQ Pond" << endl << "7. CornerStone" << endl << "8. Library" << endl << "9. Maggie Benson" << endl << "10. West Mall Center" << endl;
	cin >> selection;
	glutInit(&argc, argv);                       // Initializing openGL
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);  //choice of buffering and choice of color
	glutInitWindowPosition(50, 50);
	glutInitWindowSize(800, 800);
	glutCreateWindow("SFU Map");
	//init();
	glutDisplayFunc(display);
	loadTexture("map.png");
	glutMainLoop();
	
	
}