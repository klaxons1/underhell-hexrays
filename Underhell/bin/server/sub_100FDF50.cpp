float *__thiscall sub_100FDF50(_DWORD *this, float *a2)
{
  int v2; // esi
  float *result; // eax
  double v4; // st6
  double v5; // st5
  double v6; // rt1
  double v7; // st5
  long double v8; // st7
  int v9; // [esp+10h] [ebp+8h]

  v2 = this[1];
  result = a2;
  v9 = ((*(_QWORD *)this >> 21) & 0x1FFFFF) - 0x100000;
  v4 = (double)((*this & 0x1FFFFF) - 0x100000) * 0.00000095367386;
  *result = v4;
  v5 = (double)v9 * 0.00000095367386;
  result[1] = v5;
  v6 = v5;
  v7 = 0.00000095367386 * (double)(int)((((unsigned int)v2 >> 10) & 0x1FFFFF) - 0x100000);
  result[2] = v7;
  v8 = sqrt(1.0 - v4 * v4 - v6 * v6 - v7 * v7);
  result[3] = v8;
  if ( v2 < 0 )
    result[3] = -v8;
  return result;
}
