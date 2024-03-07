#define MAX_VOL 5000
#define MAX_RESISTANT 10000
#define MAX_ANALOG 1023

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  // read A0
  int value;
  value=analogRead(A0);
  // Serial.print("analog: ");
  // Serial.print(value);
  Serial.println("analog: "+String(value));

  // Convert into voltage
  int vol;
  vol=map(value,0,MAX_ANALOG,0,MAX_VOL);
  // Serial.print("voltage: ");
  // Serial.print(vol);
  Serial.println((String)"voltage: "+vol+" mV");

  // Convert into ohm
  int res;
  res=map(value,0,MAX_ANALOG,0,MAX_RESISTANT);
  float resConvert=res*1.00/1000;
  // Serial.print("resistant: ");
  // Serial.print(resConvert);
  Serial.println((String)"resistant: "+resConvert+" kOhm");

  Serial.println();
  delay(500);
}

/*
1. `Serial.println("analog: " + String(value));`
   - Trong trường hợp này, bạn đang thực hiện phép cộng giữa một chuỗi và một đối tượng kiểu String. 
   Hệ thống sẽ tự động chuyển đổi giá trị kiểu int thành kiểu String và sau đó thực hiện phép cộng chuỗi. 
   Điều này sẽ kết hợp "analog: " và giá trị của biến `value` trong một chuỗi duy nhất và sau đó in ra kết quả trên Serial.

2. `Serial.println((String)"analog: " + value);`
   - Trong trường hợp này, bạn đang sử dụng toán tử ép kiểu `(String)` để ép kiểu chuỗi "analog: " 
   sang kiểu String trước khi thực hiện phép cộng với biến `value`. Kết quả cuối cùng là một chuỗi duy nhất chứa "analog: "
   và giá trị của biến `value`, và sau đó nó được in ra trên Serial.

Cả hai cách đều có thể được sử dụng để in ra thông tin tương tự trên Serial trong trường hợp này. 
Tuy nhiên, cách thứ nhất (cộng chuỗi và biến) có vẻ dễ đọc hơn và tường minh hơn, trong khi cách thứ hai (ép kiểu) 
có thể được sử dụng khi bạn muốn chắc chắn rằng "analog: " được biểu diễn dưới dạng kiểu String.
*/
