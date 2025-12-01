#include<stdlib.h>
#include<stdint.h>
#include <iostream>
#include <vector>

using std::vector;

template<typename T3>
T3 DLC_MAX =16;  // Default Data Length Code , // This line of code is replacing #define DLC_MAX 16


template<typename T1,typename T2>
struct can_st
{
    T2 id              : 11;   // Defining the priority of the data frame.
    T1 rtr             : 1;    // Remote Transmission Request bit informs whether the frame is a data frame or remote frame.
    T1 ide             : 1;    // Identifier Extension bit defines whether the frame is standard (11-bit identifier) or extended (29-bit identifier).
    T1 r               : 1;
    T1 dlc             : 4;    // payload bytes transmitted to the receiver.
    T1 data[8];                // 8 bytes of data
    T2 checksum        : 16;   // CRC checksum for error detection,16 Bit is delimiter
    T1 ack_slot        : 1;
    T1 end_of_frame    : 7;    // End of Frame consists of 7 recessive bits
};


int main()
{
    can_st<uint8_t,uint16_t> can_msg_st;
    can_msg_st.id=100;
    can_msg_st.rtr=1;
    can_msg_st.ide=0;
    can_msg_st.r=0;
    can_msg_st.dlc=DLC_MAX<uint8_t>;
    for(size_t i=0;i<can_msg_st.dlc;i++)
    {
        can_msg_st.data[i]=i+1;
    }
    can_msg_st.checksum=0x7FFF;
    can_msg_st.ack_slot=0;
    can_msg_st.end_of_frame=0x7F;
       
    exit(EXIT_SUCCESS);
}

