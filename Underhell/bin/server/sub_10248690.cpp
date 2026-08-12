void __cdecl sub_10248690(float *a1, float *a2, float *a3, float a4)
{
  double v5; // st7
  double v6; // st4
  float v7; // [esp+4h] [ebp-Ch]
  float v8; // [esp+8h] [ebp-8h]
  float v9; // [esp+Ch] [ebp-4h]
  float v10; // [esp+18h] [ebp+8h]

  a1[4] = *a3;
  a1[5] = a3[1];
  a1[6] = a3[2];
  if ( 3.4028235e38 == a1[15] )
    v5 = a1[13];
  else
    v5 = a1[15];
  v10 = v5 * 300.0;
  v7 = *a2;
  v8 = a2[1];
  v9 = a2[2];
  off_10689714();
  v6 = *(float *)(dword_106C629C + 44);
  a1[1] = v7 * v10 * v6 * a4;
  a1[2] = v8 * v10 * v6 * a4;
  a1[3] = v10 * v9 * v6 * a4;
}
