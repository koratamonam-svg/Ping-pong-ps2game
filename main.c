#include <tamtypes.h>

// إحداثيات اللعبة
int ballX = 320, ballY = 240;
int ballSpeedX = 5, ballSpeedY = 5;
int paddle1Y = 200, paddle2Y = 200; // المضربين
int score1 = 0, score2 = 0;

void update_game() {
    // 1. تحريك الكرة
    ballX += ballSpeedX;
    ballY += ballSpeedY;

    // 2. ارتداد الكرة من الأعلى والأسفل
    if (ballY <= 0 || ballY >= 480) ballSpeedY = -ballSpeedY;

    // 3. منطق البوت (يتبع الكرة ببساطة)
    if (ballY > paddle2Y + 50) paddle2Y += 4;
    else if (ballY < paddle2Y) paddle2Y -= 4;

    // 4. تصادم الكرة مع المضرب
    if (ballX <= 20 && ballY >= paddle1Y && ballY <= paddle1Y + 100) {
        ballSpeedX = -ballSpeedX;
    }
}

int main() {
    while(1) {
        update_game();
        // هنا في المستقبل سنضع كود الرسم على الشاشة
    }
    return 0;
}
