
//Маркеры памяти
//void - пустота - космос - ничего - не использует память
//int  - интеджер - целое - память для чисел 12345
//char - символы - буквы
//long - для всего
//------setup - Название
//------() - круглые скобки (SHIFT+9, SHIFT+0) настройки
//------{} - фигурные скобки (SHIFT+Х, SHIFT+Ъ) Начало и конец
//Сложных приказов

#define BUZZER_PIN 12  // пин подключения
//------------

//способности
//издать отпунивающий звук
void zvuk(){
  // зуммер издает звук 0,5с
    digitalWrite(BUZZER_PIN, HIGH);
    delay(500);
    // зуммер «молчит» 2с
    digitalWrite(BUZZER_PIN, LOW);
    delay(2000);
}
//проверить кнопку 1
void knopk1(){
    // читаем значение кнопки
    int buttonState = digitalRead(BUTTON_PIN);
    if (lastButtonState != buttonState) {  // состояние изменилось
        delay(50);  // время дребезга
        if (buttonState == LOW)
            Serial.println("Нажатие кнопки");
        else
            Serial.println("Отпускание кнопки");
        lastButtonState = buttonState;
}
//проверить кнопку 2 
void knopk2(){
// прочитать значение кнопки
    int buttonState = digitalRead(BUTTON_PIN);
    if (lastButtonState != buttonState) {  // состояние изменилось
        delay(50);  // время задержки
        if (buttonState == LOW)
            Serial.println("Нажатие кнопки");
        else
            Serial.println("Отпускание кнопки");
        lastButtonState = buttonState
}
//инликация работы 
void rabot(){
digitalWrite(ledPin, HIGH);
    delay(1000);
    digitalWrite(ledPin, LOW);
    delay(1000);
}

void setup() {       //-слэш - разрез /слэш в гору \слэш с горы
    pinMode(BUZZER_PIN, OUTPUT);
}

void loop() {
 

}
