char __cdecl sub_101C6780(unsigned __int8 a1, unsigned __int8 a2)
{
  double v2; // st6
  double v3; // st7
  float v5; // [esp+0h] [ebp-4h]
  float v6; // [esp+8h] [ebp+4h]
  float v7; // [esp+8h] [ebp+4h]
  float v8; // [esp+8h] [ebp+4h]
  float v9; // [esp+8h] [ebp+4h]
  float v10; // [esp+8h] [ebp+4h]
  float v11; // [esp+8h] [ebp+4h]
  float v12; // [esp+8h] [ebp+4h]
  float v13; // [esp+8h] [ebp+4h]
  float v14; // [esp+8h] [ebp+4h]
  float v15; // [esp+8h] [ebp+4h]

  v6 = (double)a1 / 255.0;
  v7 = v6 * 2.0;
  v5 = v7 - 1.0;
  v8 = (double)a2 / 255.0;
  v9 = 2.0 * v8;
  v10 = v9 - 1.0;
  v2 = v10 * v10 + v5 * v5;
  if ( v2 >= 1.0 )
    v2 = 1.0;
  v11 = v2;
  v12 = 1.0 - v11;
  v13 = sqrt(v12);
  v14 = v13 * 127.0;
  v15 = v14 + 128.0;
  if ( v15 < 255.0 )
  {
    v3 = 0.0;
    if ( v15 > 0.0 )
      return (int)v15;
  }
  else
  {
    v3 = 255.0;
  }
  return (int)(float)v3;
}
