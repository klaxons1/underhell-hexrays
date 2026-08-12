void __thiscall sub_1017D2B0(unsigned int this, unsigned int a2, float a3)
{
  double v4; // st7
  double v5; // st6
  double v6; // st7
  float v7; // [esp+0h] [ebp-10h]

  v4 = 0.0;
  if ( 0.0 == *(float *)(this + 800) && 0.0 == *(float *)(this + 804) )
  {
    v6 = a3;
    goto LABEL_17;
  }
  v5 = a3;
  if ( a3 < (double)*(float *)(this + 804) )
  {
    *(_BYTE *)(this + 809) = 0;
  }
  else if ( !*(_BYTE *)(this + 809) )
  {
    *(_BYTE *)(this + 809) = 1;
    sub_1010DD80((_DWORD *)(this + 884), __SPAIR64__(this, a2), 0.0);
    v4 = 0.0;
    v5 = a3;
  }
  if ( v5 > *(float *)(this + 800) )
  {
    *(_BYTE *)(this + 808) = 0;
  }
  else if ( !*(_BYTE *)(this + 808) )
  {
    v7 = v4;
    *(_BYTE *)(this + 808) = 1;
    sub_1010DD80((_DWORD *)(this + 860), __SPAIR64__(this, a2), v7);
    v6 = a3;
    goto LABEL_12;
  }
  v6 = v5;
LABEL_12:
  if ( v6 <= *(float *)(this + 804) )
  {
    if ( v6 < *(float *)(this + 800) )
      v6 = *(float *)(this + 800);
  }
  else
  {
    v6 = *(float *)(this + 804);
  }
LABEL_17:
  a3 = v6;
  sub_1010C270((float *)(this + 812), 1, (__int16 *)&a3);
  sub_1010DA50(
    (_DWORD *)(this + 812),
    *(_DWORD *)(this + 812),
    *(_DWORD *)(this + 816),
    *(_DWORD *)(this + 820),
    *(_DWORD *)(this + 824),
    *(_DWORD *)(this + 828),
    __SPAIR64__(this, a2),
    0.0);
}
