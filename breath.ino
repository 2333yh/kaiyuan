/*
 * Breath
 * ͨ��ģ�����PWM����LED�ƣ��ı������ȣ��ﵽ����Ч��
 */
 
int ledPin = 3;

void setup ()
{
  pinMode(ledPin,OUTPUT);
}

void loop()
{
  for (int a=0; a<=255;a++)                //ѭ����䣬����PWM���ȵ�����
  {
    analogWrite(ledPin,a);
    delay(8);                             //��ǰ���ȼ���ά�ֵ�ʱ��,��λ����            
  }
  for (int a=255; a>=0;a--)             //ѭ����䣬����PWM���ȼ�С
  {
    analogWrite(ledPin,a);
    delay(8);                             //��ǰ���ȵ�ά�ֵ�ʱ��,��λ����  
  }

}
