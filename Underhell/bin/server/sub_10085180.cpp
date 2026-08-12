double __thiscall sub_10085180(_DWORD *this, float *a2)
{
  int v2; // eax
  float *v3; // esi
  float *v4; // eax
  double v5; // st7
  double v6; // st6
  double v7; // st5
  float *v8; // eax
  _BYTE v10[12]; // [esp+0h] [ebp-Ch] BYREF

  v2 = this[2];
  if ( v2 )
  {
    v3 = (float *)this[1];
    v4 = (float *)sub_1008D160(v10, *(_DWORD *)(v2 + 1676));
    v5 = *v4 - *v3;
    v6 = v4[1] - v3[1];
    v7 = v4[2] - v3[2];
  }
  else
  {
    v8 = (float *)this[1];
    v5 = a2[1] - *v8;
    v6 = a2[2] - v8[1];
    v7 = a2[3] - v8[2];
  }
  return v7 * v7 + v6 * v6 + v5 * v5;
}
