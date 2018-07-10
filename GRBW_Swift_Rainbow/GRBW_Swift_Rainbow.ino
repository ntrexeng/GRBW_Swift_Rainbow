#include <Adafruit_NeoPixel.h>
// 컨트롤 핀
#define PIN            6

// WS2812B 의 연결된 개수
#define NUMPIXELS      2

// Delay 값
#define delayval 500


// 만약 WS2811 를 사용할 경우 NEO_KHZ800 을 NEO_KHZ400 으로 변경해야 한다.
Adafruit_NeoPixel pixels = Adafruit_NeoPixel(NUMPIXELS, PIN, NEO_GRBW + NEO_KHZ800);


void setup() {
  pixels.begin(); // This initializes the NeoPixel library.
  pixels.setBrightness(20); // LED 밝기 : 255가 최대 0이 최소 입니다.
  pixels.show();
  
  Serial.begin(9600);
}


void loop() {
  
// pixels.Color(a, b, c, d) = pixels.Color(Red, Green, Blue, White)
// Red(빨강), Green(초록), Blue(파랑), White(하양) 의 색상을 각 255단계로 제어

// 빨간색 > 주황색
 pixels.setPixelColor(0, pixels.Color(255,50,0,0)); // 0번 LED 주황색 ON
 pixels.setPixelColor(1, pixels.Color(255,0,0,0)); // 1번 LED 빨간색 ON
 pixels.show();
 delay(delayval);

// 주황색 > 노란색
 pixels.setPixelColor(0, pixels.Color(255,100,0,0)); // 0번 LED 노란색 ON
 pixels.setPixelColor(1, pixels.Color(255,50,0,0)); // 1번 LED 주황색 ON
 pixels.show();
 delay(delayval);

// 노란색 > 초록색
 pixels.setPixelColor(0, pixels.Color(0,255,0,0)); // 0번 LED 초록색 ON
 pixels.setPixelColor(1, pixels.Color(255,100,0)); // 1번 LED 노란색 ON
 pixels.show();
 delay(delayval);

// 초록색 > 파란색
 pixels.setPixelColor(0, pixels.Color(0,165,235,0)); // 0번 LED 파란색 ON
 pixels.setPixelColor(1, pixels.Color(0,255,0,0)); // 1번 LED 초록색 ON
 pixels.show();
 delay(delayval);

// 파란색 > 남색
 pixels.setPixelColor(0, pixels.Color(0,0,255,0)); // 0번 LED 남색 ON
 pixels.setPixelColor(1, pixels.Color(0,165,235,0)); // 1번 LED 파란색 ON
 pixels.show();
 delay(delayval);

// 남색 > 보라색
 pixels.setPixelColor(0, pixels.Color(105,0,105,0)); // 0번 LED 보라색 ON
 pixels.setPixelColor(1, pixels.Color(0,0,255,0)); // 1번 LED 남색 ON
 pixels.show();
 delay(delayval);

// 보라색 > 빨간색
 pixels.setPixelColor(0, pixels.Color(255,0,0,0)); // 0번 LED 빨간색 ON
 pixels.setPixelColor(1, pixels.Color(105,0,105,0)); // 1번 LED 보라색 ON
 pixels.show();
 delay(delayval);

}
