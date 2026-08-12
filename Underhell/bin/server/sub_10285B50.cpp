int __thiscall sub_10285B50(int this)
{
  int *v2; // ecx
  double v3; // st7
  int *v4; // ecx
  int *v5; // ecx
  int *v6; // ecx
  int *v7; // ecx
  int result; // eax
  int *v9; // ecx
  float v10; // [esp+8h] [ebp-4h]

  sub_100F5810((char *)this);
  *(_DWORD *)this = &SporeExplosion::`vftable';
  if ( *(_DWORD *)(this + 804) != COERCE_INT(100.0) )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
    }
    else
    {
      v2 = *(int **)(this + 24);
      if ( v2 )
        sub_100194B0(v2, 804);
    }
    *(float *)(this + 804) = 100.0;
  }
  v3 = 1.0;
  if ( *(_DWORD *)(this + 808) != COERCE_INT(1.0) )
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
        sub_100194B0(v4, 808);
        v3 = 1.0;
      }
    }
    *(float *)(this + 808) = v3;
  }
  v10 = v3;
  if ( *(_DWORD *)(this + 812) != LODWORD(v10) )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
      *(float *)(this + 812) = v3;
    }
    else
    {
      v5 = *(int **)(this + 24);
      if ( v5 )
      {
        sub_100194B0(v5, 812);
        v3 = 1.0;
      }
      *(float *)(this + 812) = v3;
    }
  }
  if ( *(_DWORD *)(this + 816) != COERCE_INT(0.0) )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
    }
    else
    {
      v6 = *(int **)(this + 24);
      if ( v6 )
        sub_100194B0(v6, 816);
    }
    *(float *)(this + 816) = 0.0;
  }
  if ( *(_DWORD *)(this + 820) != COERCE_INT(16.0) )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
    }
    else
    {
      v7 = *(int **)(this + 24);
      if ( v7 )
        sub_100194B0(v7, 820);
    }
    *(float *)(this + 820) = 16.0;
  }
  sub_1005C620((_BYTE *)(this + 116), 255, 255, 255, 255);
  result = this;
  if ( *(_BYTE *)(this + 824) != 1 )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
    }
    else
    {
      v9 = *(int **)(this + 24);
      if ( v9 )
        sub_100194B0(v9, 824);
    }
    *(_BYTE *)(this + 824) = 1;
    result = this;
  }
  *(_BYTE *)(this + 800) = 0;
  return result;
}
