
#include "AppGateWay.h"
//MY_DEFAULT_CHANNEL_BITRATE
int main(void){
    GateWayInit();
    while(1){
        /*YOuR ApP HErE*/
        /*YoU CaN CAlL GATEWaYSend As NEEdED*/
        GateWaySend();
        GateWayDispatch();
    }
    return 0;
}//2150