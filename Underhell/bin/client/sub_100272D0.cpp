double __thiscall sub_100272D0(float *this, int a2, char *String2, float a4)
{
  int v5; // eax
  int v6; // esi
  double result; // st7
  float v8; // [esp+14h] [ebp-4h]

  v8 = a4;
  v5 = sub_10027270(a2, String2);
  v6 = v5;
  if ( !a2 )
    return a4;
  if ( v5 < 0 )
    return v8;
  result = sub_1001D8C0(a2, v5, a4, &a4);
  this[v6 + 351] = a4;
  return result;
}
