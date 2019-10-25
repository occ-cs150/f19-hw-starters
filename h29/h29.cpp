/**
 *  @author Put your name here
 *  @date Put the date here
 *  @file h29.cpp
 */
#include <string>
#include <iostream>
#include <stdexcept>
using namespace std;

string STUDENT = "WHO AM I?"; // Add your Canvas/occ-email ID
#include "h29.h"

Pixel GRAY{128, 128, 128, 128}; // a global gray for stubbing

// Add your code here


//////////////////////// STUDENT TESTING //////////////////////////
void info(const string& msg, const Image& img);
int run()
{
    // Uncomment the following code when doing make run
    cout << "Part 1: construct three images" << endl;
    // Image empty;                    // empty image
    // Image square(20, 20);           // square image
    // Image lego("images/lego.png");  //  from file
    // cout << " -- Success" << endl;

    cout << "\nPart 2: print size, width, height" << endl;
    // info("empty", empty);
    // info("square", square);
    // info("lego", lego);

    cout << "\nPart 3: Modify some images" << endl;
    // bool ok = empty.load("images/paris.jpg");
    // string msg = "Loading paris into empty image. ";
    // msg += ok ? "Success." : "Failed.";
    // cout << msg << endl;
    // info("empty", empty);

    // Pixel fillColor{255, 127};
    // square.fill(fillColor);

    cout << "\nPart 4: loop through an image in two ways." << endl;
    // for (auto i = empty.size(), len = i; i > len / 2; i--)
    // {
    //     auto temp = empty.at(i - 1);
    //     empty.at(i - 1) = empty.at(len - i);
    //     empty.at(len - i) = temp;
    // }
    // auto pix = empty.at(20, 10);  // x = 20, y = 10
    // for (auto y = square.height(); y > 0; y--)
    //     for (auto x = square.width(); x > 0; x--)
    //         if (y == 10  || x == 10 || x == 1 || x == 20)
    //             square.at(x - 1, y - 1) = pix;

    cout << "\nPart 5: Save all the pictures." << endl;
    // cout << "Saving paris.png: " << ((empty.save("actual/paris.png"))
    //     ? "Success" : "Failure") << endl;
    // cout << "Saving square.png: " << ((square.save("actual/square.png"))
    //     ? "Success" : "Failure") << endl;
    // cout << "Saving lego.jpg: "  << ((lego.save("actual/lego.jpg"))
    //     ? "Success" : "Failure") << endl;

    return 0;
}
// Helper function
void info(const string& msg, const Image& img)
{
    cout << msg << ": size()->" << img.size()
        << ", width()->" << img.width()
        << ", height()->" << img.height() << endl;
}
