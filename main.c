/*
 * main.c
 *
 *  Created on: 06-Nov-2023
 *      Author: accord_manet
 */




void core_0(void) {

    unsigned int data = 0xA;
    unsigned int *memory_address = (unsigned int*)0x0091FF00;
    *memory_address = data;
    //0X00800000
    unsigned int SRC_GPR1_ADDRESS = 0X0080;
    unsigned int *GPR1_ADDRESS = (unsigned int*)0x30390074;
    *GPR1_ADDRESS = SRC_GPR1_ADDRESS;
    unsigned int SRC_GPR2_ADDRESS = 0X0000;
    unsigned int *GPR2_ADDRESS = (unsigned int*)0x30390078;
    *GPR2_ADDRESS = SRC_GPR2_ADDRESS;

    unsigned int Core1Enable=3;
    unsigned int *SRC_A53R = (unsigned int*)0x30390008;
    *SRC_A53R= Core1Enable;

}

void core_1(void) {

    unsigned int data = 0xB;
    unsigned int *memory_address = (unsigned int*)0x0091FF04;
    *memory_address = data;
    //0X0080004
    unsigned int SRC_GPR1_ADDRESS = 0X0080;
    unsigned int *GPR1_ADDRESS = (unsigned int*)0x3039007C;
    *GPR1_ADDRESS = SRC_GPR1_ADDRESS;
    unsigned int SRC_GPR2_ADDRESS = 0X0004;
    unsigned int *GPR2_ADDRESS = (unsigned int*)0x30390080;
    *GPR2_ADDRESS = SRC_GPR2_ADDRESS;

    unsigned int Core1Enable=7;
    unsigned int *SRC_A53R = (unsigned int*)0x30390008;
    *SRC_A53R= Core1Enable;

}

void core_2(void) {

    unsigned int data = 0xC;
    unsigned int *memory_address = (unsigned int*)0x0091FF08;
    *memory_address = data;
    //0X00800008
    unsigned int SRC_GPR1_ADDRESS = 0X0080;
    unsigned int *GPR1_ADDRESS = (unsigned int*)0x30390084;
    *GPR1_ADDRESS = SRC_GPR1_ADDRESS;
    unsigned int SRC_GPR2_ADDRESS = 0X0008;
    unsigned int *GPR2_ADDRESS = (unsigned int*)0x30390088;
    *GPR2_ADDRESS = SRC_GPR2_ADDRESS;

    unsigned int Core1Enable=15;
    unsigned int *SRC_A53R = (unsigned int*)0x30390008;
    *SRC_A53R= Core1Enable;

}
void core_3(void) {

    unsigned int data = 0xD;
    unsigned int *memory_address = (unsigned int*)0x0091FF0C;
    *memory_address = data;
    //0X0080000C
    unsigned int SRC_GPR1_ADDRESS = 0X0080;
    unsigned int *GPR1_ADDRESS = (unsigned int*)0x3039008C;
    *GPR1_ADDRESS = SRC_GPR1_ADDRESS;
    unsigned int SRC_GPR2_ADDRESS = 0X000C;
    unsigned int *GPR2_ADDRESS = (unsigned int*)0x30390090;
    *GPR2_ADDRESS = SRC_GPR2_ADDRESS;


}

