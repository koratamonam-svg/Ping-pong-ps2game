#include <tamtypes.h>
#include <gsKit.h>
#include <dmaKit.h>

int main() {
    GSGLOBAL *gsGlobal = gsKit_init_global();
    dmaKit_init(D_CTRL_RECV_IS, D_CTRL_RECV_IS, D_CTRL_IS, D_CTRL_IS, D_CTRL_IS, 0);
    gsKit_init_screen(gsGlobal);
    
    int ball_x = 320;
    int ball_y = 240;

    while (1) {
        gsKit_clear(gsGlobal, GS_SETREG_RGBAQ(0,0,0,0,0));
        // رسم الكرة
        gsKit_prim_sprite(gsGlobal, ball_x, ball_y, ball_x+20, ball_y+20, 0, GS_SETREG_RGBAQ(255,255,255,0,0));
        
        ball_x += 2; // تحريك الكرة
        
        gsKit_queue_exec(gsGlobal);
        gsKit_sync_flip(gsGlobal);
    }
    return 0;
}
