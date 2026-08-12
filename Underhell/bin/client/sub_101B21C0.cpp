long double __thiscall sub_101B21C0(char *this, float a2)
{
  double v2; // st7
  double v3; // st7
  int v4; // eax
  float v6; // [esp+Ch] [ebp+8h]

  v2 = *(float *)(dword_1044EDBC + 44) * 0.5;
  if ( v2 == -v2 )
  {
    if ( v2 > a2 )
      v3 = -90.0;
    else
      v3 = 90.0;
  }
  else
  {
    v3 = (a2 - -v2) * 180.0 / (v2 - -v2) - 90.0;
  }
  v6 = v3;
  v4 = sub_102374C0(this + 44);
  return (double)(v4 >> 1) + sin(v6 * 0.017453292) * (double)(v4 >> 1);
}
