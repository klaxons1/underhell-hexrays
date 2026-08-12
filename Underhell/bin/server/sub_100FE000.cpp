float *__thiscall sub_100FE000(unsigned __int16 *this, float *a2)
{
  int v2; // eax
  int v3; // edx
  unsigned __int16 v4; // cx
  float *result; // eax
  double v6; // st6
  double v7; // rt1
  double v8; // st6
  double v9; // st5
  long double v10; // st7
  int v11; // [esp+0h] [ebp-4h]

  v2 = *this;
  v3 = this[1];
  v4 = this[2];
  v11 = v2 - 0x8000;
  result = a2;
  v6 = (double)v11 * 0.000030517578125;
  *a2 = v6;
  v7 = v6;
  v8 = 0.000030517578125 * (double)(v3 - 0x8000);
  a2[1] = v8;
  v9 = (double)((v4 & 0x7FFF) - 0x4000) * 0.00006103515625;
  a2[2] = v9;
  v10 = sqrt(1.0 - v7 * v7 - v8 * v8 - v9 * v9);
  a2[3] = v10;
  if ( (v4 & 0x8000) != 0 )
    a2[3] = -v10;
  return result;
}
