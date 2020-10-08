#include "cubealgoritms.h"
#include "cubeexeption.h"


void CountColors(char value){
    switch (value) {
        case 'w':{
            if(White < 9) {
                White++;
            } else if (White >= 9) {
                throw CountColorsExeption();
            }
            break;
        }
        case 'r':{
            if(Red < 9) {
                Red++;
            } else if (Red >= 9) {
                throw CountColorsExeption();
            }
            break;
        }
        case 'o':{
            if(Orange < 9) {
                Orange++;
            } else if (Orange >= 9) {
                throw CountColorsExeption();
            }
            break;
        }
        case 'b':{
            if(Blue < 9) {
                Blue++;
            } else if (Blue >= 9) {
                throw CountColorsExeption();
            }
            break;
        }
        case 'g':{
            if(Green < 9) {
                Green++;
            } else if (Green >= 9) {
                throw CountColorsExeption();
            }
            break;
        }
        case 'y':{
            if(Yellow < 9) {
                Yellow++;
            } else if (Yellow >= 9) {
                throw CountColorsExeption();
            }
            break;
        }

        default: throw ColorsExeption();
    }
}

int main()
{
    ifstream fin ("rubikscube");
    cout<<"________________________| RUBIK'S CUBE SOLVER |________________________"<<endl;
    cout<<"Input........."<<endl;
    //cout<<"White Side : ";
    CubicRubica Cubic1;
    for(int i=0;i<9;++i)
    {
        fin>>Cubic1.white[i];
        CountColors(Cubic1.white[i]);
        if (Cubic1.white[i] != 'w' && i == 8) {
            throw CentersExeption();
        }
    }
    //cout<<"Red Side : ";
    for(int i=0;i<9;++i)
    {
        fin>>Cubic1.red[i];
        CountColors(Cubic1.red[i]);
        if (Cubic1.red[i] != 'r' && i == 8){

            throw CentersExeption();
        }
    }
    //cout<<"Orange Side : ";
    for(int i=0;i<9;++i)
    {
        fin>>Cubic1.orange[i];
        CountColors(Cubic1.orange[i]);
        if (Cubic1.orange[i] != 'o' && i == 8) {
            throw CentersExeption();
        }
    }
    //cout<<"Blue Side : ";
    for(int i=0;i<9;++i)
    {
        fin>>Cubic1.blue[i];
        CountColors(Cubic1.blue[i]);
        if (Cubic1.blue[i] != 'b' && i == 8) {
            throw CentersExeption();
        }
    }
    //cout<<"Green Side : ";
    for(int i=0;i<9;++i)
    {
        fin>>Cubic1.green[i];
        CountColors(Cubic1.green[i]);
        if (Cubic1.green[i] != 'g' && i == 8) {
            throw CentersExeption();
        }
    }
    //cout<<"Yellow Side : ";
    for(int i=0;i<9;++i)
    {
        fin>>Cubic1.yellow[i];
        CountColors(Cubic1.yellow[i]);
        if (Cubic1.yellow[i] != 'y' && i == 8) {
            throw CentersExeption();
        }
    }
    //Cubic1.rotate_clock('b');
    cout << "Initial state of the Rubik's cube\n";
    cout<<"White Side : ";
    Cubic1.display(Cubic1.white);
    cout<<"Red Side : ";
    Cubic1.display(Cubic1.red);
    cout<<"Orange Side : ";
    Cubic1.display(Cubic1.orange);
    cout<<"Blue Side : ";
    Cubic1.display(Cubic1.blue);
    cout<<"Green Side : ";
    Cubic1.display(Cubic1.green);
    cout<<"Yellow Side : ";
    Cubic1.display(Cubic1.yellow);
    //----------------------------------
    cout<<"\n-------------------------------------------------\n"<<endl;
    cout<<"Turn these sides of the Cube in Clockwise Direction by 90 degrees in this exact order..."<<endl<<endl;
    Cubic1.solve_white_cross();
    //----------------------------------
    cout << "After assembling the white cross:\n";
    cout<<"White Side : ";
    Cubic1.display(Cubic1.white);
    cout<<"Red Side : ";
    Cubic1.display(Cubic1.red);
    cout<<"Orange Side : ";
    Cubic1.display(Cubic1.orange);
    cout<<"Blue Side : ";
    Cubic1.display(Cubic1.blue);
    cout<<"Green Side : ";
    Cubic1.display(Cubic1.green);
    cout<<"Yellow Side : ";
    Cubic1.display(Cubic1.yellow);
    //--------------------------------
    Cubic1.solve_white_corners();
    cout<<"\n-------------------------------------------------\n"<<endl;
    cout << "After assembling the white corners:\n";
    cout<<"White Side : ";
    Cubic1.display(Cubic1.white);
    cout<<"Red Side : ";
    Cubic1.display(Cubic1.red);
    cout<<"Orange Side : ";
    Cubic1.display(Cubic1.orange);
    cout<<"Blue Side : ";
    Cubic1.display(Cubic1.blue);
    cout<<"Green Side : ";
    Cubic1.display(Cubic1.green);
    cout<<"Yellow Side : ";
    Cubic1.display(Cubic1.yellow);
    //-----------------------------------
    Cubic1.solve_middle_layer();
    cout<<"\n-------------------------------------------------\n"<<endl;
    cout << "After assembling the middle layer:\n";
    cout<<"White Side : ";
    Cubic1.display(Cubic1.white);
    cout<<"Red Side : ";
    Cubic1.display(Cubic1.red);
    cout<<"Orange Side : ";
    Cubic1.display(Cubic1.orange);
    cout<<"Blue Side : ";
    Cubic1.display(Cubic1.blue);
    cout<<"Green Side : ";
    Cubic1.display(Cubic1.green);
    cout<<"Yellow Side : ";
    Cubic1.display(Cubic1.yellow);
    //------------------------------------
    Cubic1.solve_yellow_cross();
    cout<<"\n-------------------------------------------------\n"<<endl;
    cout << "After assembling the yellow cross:\n";
    cout<<"White Side : ";
    Cubic1.display(Cubic1.white);
    cout<<"Red Side : ";
    Cubic1.display(Cubic1.red);
    cout<<"Orange Side : ";
    Cubic1.display(Cubic1.orange);
    cout<<"Blue Side : ";
    Cubic1.display(Cubic1.blue);
    cout<<"Green Side : ";
    Cubic1.display(Cubic1.green);
    cout<<"Yellow Side : ";
    Cubic1.display(Cubic1.yellow);
    //------------------------------------
    Cubic1.solve_yellow_corners();
    cout<<"\n-------------------------------------------------\n"<<endl;
    cout << "After assembling yellow corners:\n";
    cout<<"White Side : ";
    Cubic1.display(Cubic1.white);
    cout<<"Red Side : ";
    Cubic1.display(Cubic1.red);
    cout<<"Orange Side : ";
    Cubic1.display(Cubic1.orange);
    cout<<"Blue Side : ";
    Cubic1.display(Cubic1.blue);
    cout<<"Green Side : ";
    Cubic1.display(Cubic1.green);
    cout<<"Yellow Side : ";
    Cubic1.display(Cubic1.yellow);
    //------------------------------------
    Cubic1.yellow_corner_orientation();
    cout<<"\n-------------------------------------------------\n"<<endl;
    cout << "After assembling the corner orientation:\n";
    cout<<"White Side : ";
    Cubic1.display(Cubic1.white);
    cout<<"Red Side : ";
    Cubic1.display(Cubic1.red);
    cout<<"Orange Side : ";
    Cubic1.display(Cubic1.orange);
    cout<<"Blue Side : ";
    Cubic1.display(Cubic1.blue);
    cout<<"Green Side : ";
    Cubic1.display(Cubic1.green);
    cout<<"Yellow Side : ";
    Cubic1.display(Cubic1.yellow);
    //--------------------------------------
    Cubic1.yellow_edges_colour_arrangement();
    cout<<"\n-------------------------------------------------\n"<<endl;
    cout << "After assembling the colour arrangement:\n";
    cout<<"White Side : ";
    Cubic1.display(Cubic1.white);
    cout<<"Red Side : ";
    Cubic1.display(Cubic1.red);
    cout<<"Orange Side : ";
    Cubic1.display(Cubic1.orange);
    cout<<"Blue Side : ";
    Cubic1.display(Cubic1.blue);
    cout<<"Green Side : ";
    Cubic1.display(Cubic1.green);
    cout<<"Yellow Side : ";
    Cubic1.display(Cubic1.yellow);
    //------------------------------------
    cout<<"\n\n-------------------------------------------------"<<endl<<endl;
    cout<<"Your Rubik's Cube is now SOLVED!\n\nOutput : "<<endl<<endl;
    cout<<"White Side : ";
    Cubic1.display(Cubic1.white);
    cout<<"Red Side : ";
    Cubic1.display(Cubic1.red);
    cout<<"Orange Side : ";
    Cubic1.display(Cubic1.orange);
    cout<<"Blue Side : ";
    Cubic1.display(Cubic1.blue);
    cout<<"Green Side : ";
    Cubic1.display(Cubic1.green);
    cout<<"Yellow Side : ";
    Cubic1.display(Cubic1.yellow);
    return 0;
}