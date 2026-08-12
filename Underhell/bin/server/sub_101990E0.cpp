bool __cdecl sub_101990E0(float *a1, float *a2)
{
  double v2; // st7
  _BYTE v4[44]; // [esp+4h] [ebp-6Ch] BYREF
  float v5; // [esp+30h] [ebp-40h]
  char v6; // [esp+3Bh] [ebp-35h]
  float v7; // [esp+58h] [ebp-18h] BYREF
  float v8; // [esp+5Ch] [ebp-14h]
  float v9; // [esp+60h] [ebp-10h]
  float v10; // [esp+64h] [ebp-Ch] BYREF
  float v11; // [esp+68h] [ebp-8h]
  float v12; // [esp+6Ch] [ebp-4h]
  int savedregs; // [esp+70h] [ebp+0h] BYREF

  v2 = a1[2] - a2[2];
  if ( v2 <= 58.0 )
    return 0;
  if ( v2 >= 200.0 )
    return 0;
  v7 = *a1;
  v8 = a1[1];
  v9 = a1[2] + 72.0;
  v10 = *a2;
  v11 = a2[1];
  v12 = v9;
  sub_1002A5F0((int)&savedregs, (int)a2, &v7, &v10, 81931, 0, 0, (int)v4);
  if ( 1.0 != v5 )
    return 0;
  if ( v6 )
    return 0;
  v7 = v10;
  v8 = v11;
  v12 = a2[2] + 2.0;
  sub_1002A5F0((int)&savedregs, (int)a2, &v7, &v10, 81931, 0, 0, (int)v4);
  return 1.0 == v5 && !v6;
}
