# RotaryEncoder
- ロータリーエンコーダのライブラリです  
- mbed Compilerで使えます  
- 基本的に、すべてのロータリエンコーダで使えますが、もしかしたら使えないのもあるかもしれない  
- Encoderというファイルが、エンコーダのライブラリでmain.cppがサンプルプログラムです  

# リファレンス 
`RotaryEncoder::RotaryEncoder(PinName PIN_A, PinName PIN_B)`  
- ロータリーエンコーダのピン設定をするための関数  
- `PIN_A`には、A相を`PIN_B`には、B相のピン番号を代入してください    

`void RotaryEncoder::Reset(void)`  
- エンコーダのカウント値をリセット（0にする）関数  

`int RotaryEncoder::Get_Count(void)`
- エンコーダのカウント値を返却する関数  
- エンコーダの現在の値を見たい場合に使用する  

`double RotaryEncoder::Get_Circumference(int Diameter, int Resolution)`  
- エンコーダのカウント値を長さに変換して返却する関数
- `Diameter'にはエンコーダについているものの直径、`Resolution`には現在のエンコーダの分解能を代入してください  

