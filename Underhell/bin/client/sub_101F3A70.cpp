char __thiscall sub_101F3A70(float *this, float a2, float a3)
{
  double v3; // st6
  double v5; // st7
  char result; // al
  double v7; // st3
  double v8; // st6
  double v9; // st7
  float v10; // [esp+8h] [ebp-30h]
  float v11; // [esp+10h] [ebp-28h]
  int v12; // [esp+2Ch] [ebp-Ch] BYREF
  int v13; // [esp+30h] [ebp-8h] BYREF
  int v14; // [esp+34h] [ebp-4h] BYREF

  v3 = a3;
  v5 = a2;
  if ( a2 > (double)a3 )
  {
    Warning("light has _fifty_percent_distance of %f but no zero_percent_distance\n", a2);
    v5 = a2;
    v3 = v5 + v5;
    a3 = v5 + v5;
  }
  *(float *)&v12 = 0.0;
  *(float *)&v13 = 1.0;
  *(float *)&v14 = 0.0;
  v11 = v3;
  v10 = v5;
  result = sub_101F0C10(0.0, 1.0, v10, 2.0, v11, 256.0, (float *)&v12, (float *)&v13, (float *)&v14);
  if ( !result )
    result = Warning("can't solve quadratic for light %f %f\n", a2, a3);
  v7 = 2.0 / (a2 * (*(float *)&v12 * a2 + *(float *)&v13) + *(float *)&v14);
  v8 = *(float *)&v13 * v7;
  v9 = v7 * *(float *)&v14;
  this[14] = *(float *)&v12 * v7;
  this[13] = v8;
  this[12] = v9;
  return result;
}
