#include <kipr/botball.h>
/// motor 3 left wheel 96.5
/// motor 0 right wheel 100
/// open set_servo_position(2,360);
/// close set_servo_position(2,850);



int main()
{
    enable_servos();
    msleep(500);
    motor(0,100);
    motor(3,-93);
    msleep(235);
    ao();
    msleep(500);
    set_servo_position(2,360);
    msleep(100);
    motor(0,100);
    motor(3,96.5);
    msleep(650);
    ao();
    msleep(250);
    set_servo_position(2,850);
    msleep(250);
    motor(0,-100);
    motor(3,-96.5);
    msleep(750);
    ao();
    msleep(500);
    motor(0,-100);
    motor(3,96.5);
    msleep(225);
    ao();
    msleep(1000);
    motor(0,100);
    motor(3,96.5);
    msleep(2750);
    motor(3,-96.5);
    motor(3,-100);
    msleep(500);
    motor(3,96.5);
    motor(0,100);
    msleep(400);
    
    
    



    return 0;
}

