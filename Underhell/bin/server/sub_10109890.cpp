int __thiscall sub_10109890(int this)
{
  double v2; // st7
  unsigned int v3; // eax
  int v4; // eax
  int v5; // eax
  int result; // eax
  float v7; // [esp+0h] [ebp-10h]

  sub_100D7260((float *)this, &flt_106F1CB4);
  v2 = sub_10108630(this, this + 728);
  if ( *(_BYTE *)(this + 1280) && v2 != *(float *)(this + 1124) )
  {
    v7 = v2;
    sub_10108AE0((int *)(this + 1124), SLOBYTE(v7), this, this);
  }
  v3 = *(_DWORD *)(this + 880);
  if ( v3 == -1 || off_1061BE18[4 * (*(_DWORD *)(this + 880) & 0xFFF) + 2] != v3 >> 12 )
    v4 = 0;
  else
    v4 = off_1061BE18[4 * (*(_DWORD *)(this + 880) & 0xFFF) + 1];
  sub_1010DD80(v4, this, 0.0);
  v5 = *(_DWORD *)(this + 248) >> 5;
  *(_DWORD *)(this + 1244) = 0;
  if ( (v5 & 1) != 0 || *(float *)(this + 1288) <= 0.0 )
  {
    result = sub_100EC3F0((_DWORD *)this, 0, 0.0, 0);
    *(_DWORD *)(this + 4) = 0;
  }
  else
  {
    *(_DWORD *)(this + 4) = sub_10109500;
    *(_DWORD *)(this + 1284) = -1;
    return sub_100D8290((float *)this, 0.1);
  }
  return result;
}
