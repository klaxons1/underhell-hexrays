int __thiscall sub_10115930(int this)
{
  int *v2; // ecx
  double v3; // st7
  int *v4; // ecx
  int *v5; // ecx
  int *v6; // ecx
  _DWORD *v7; // ecx
  float v9; // [esp+8h] [ebp-4h]

  sub_100E33C0((char *)this, 0);
  *(_DWORD *)this = &CColorCorrection::`vftable';
  if ( *(_BYTE *)(this + 829) != 1 )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
    }
    else
    {
      v2 = *(int **)(this + 24);
      if ( v2 )
        sub_100194B0(v2, 829);
    }
    *(_BYTE *)(this + 829) = 1;
  }
  v3 = 0.0;
  if ( *(_DWORD *)(this + 832) != COERCE_INT(0.0) )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
    }
    else
    {
      v4 = *(int **)(this + 24);
      if ( v4 )
      {
        sub_100194B0(v4, 832);
        v3 = 0.0;
      }
    }
    *(float *)(this + 832) = v3;
  }
  if ( *(_DWORD *)(this + 836) != COERCE_INT(1000.0) )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
    }
    else
    {
      v5 = *(int **)(this + 24);
      if ( v5 )
      {
        sub_100194B0(v5, 836);
        v3 = 0.0;
      }
    }
    *(float *)(this + 836) = 1000.0;
  }
  *(float *)(this + 824) = 1.0;
  v9 = v3;
  if ( *(_DWORD *)(this + 840) != LODWORD(v9) )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
    }
    else
    {
      v6 = *(int **)(this + 24);
      if ( v6 )
      {
        sub_100194B0(v6, 840);
        v3 = 0.0;
      }
    }
    *(float *)(this + 840) = v3;
  }
  *(float *)(this + 800) = v3;
  *(float *)(this + 804) = v3;
  *(float *)(this + 808) = v3;
  *(float *)(this + 812) = v3;
  *(float *)(this + 816) = v3;
  *(float *)(this + 820) = v3;
  if ( *(_BYTE *)(this + 84) )
  {
    *(_BYTE *)(this + 88) |= 1u;
  }
  else
  {
    v7 = *(_DWORD **)(this + 24);
    if ( v7 )
    {
      *v7 |= 0x101u;
      *(_WORD *)(sub_10153460(v7) + 2) = 0;
    }
  }
  *(_BYTE *)(this + 844) = 0;
  *(_DWORD *)(this + 1104) = 0;
  return this;
}
