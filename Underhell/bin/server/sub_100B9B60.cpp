int __thiscall sub_100B9B60(float **this, float *a2, int a3, int a4, float a5)
{
  float *v6; // eax
  float *v7; // esi
  int result; // eax

  v6 = (float *)sub_1042FCC0(48);
  v7 = v6;
  if ( v6 )
  {
    v6[6] = NAN;
    v6[7] = NAN;
    memset(v6, 0, 0x30u);
    *v7 = *a2;
    v7[1] = a2[1];
    v7[2] = a2[2];
    *((_DWORD *)v7 + 9) = a3;
    *((_DWORD *)v7 + 8) = a4;
    v7[3] = a5;
    v7[4] = NAN;
    v7[5] = -1.0;
    result = sub_100B9A80(v7, *this);
    *this = v7;
  }
  else
  {
    result = sub_100B9A80(0, *this);
    *this = 0;
  }
  return result;
}
