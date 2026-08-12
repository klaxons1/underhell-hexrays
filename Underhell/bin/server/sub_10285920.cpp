int __thiscall sub_10285920(int this)
{
  int *v2; // ecx
  int *v3; // ecx
  double v4; // st7
  int *v5; // ecx
  int *v6; // ecx
  int *v7; // ecx
  int *v8; // ecx
  float v10; // [esp+Ch] [ebp-4h]

  sub_100F5810((char *)this);
  *(_DWORD *)this = &SporeTrail::`vftable';
  if ( *(_BYTE *)(this + 84) )
  {
    *(_BYTE *)(this + 88) |= 1u;
  }
  else
  {
    v2 = *(int **)(this + 24);
    if ( v2 )
      sub_100194B0(v2, 800);
  }
  *(float *)(this + 800) = 0.0;
  *(float *)(this + 804) = 0.0;
  *(float *)(this + 808) = 0.0;
  if ( *(_DWORD *)(this + 812) != COERCE_INT(100.0) )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
    }
    else
    {
      v3 = *(int **)(this + 24);
      if ( v3 )
        sub_100194B0(v3, 812);
    }
    *(float *)(this + 812) = 100.0;
  }
  v4 = 1.0;
  if ( *(_DWORD *)(this + 816) != COERCE_INT(1.0) )
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
        sub_100194B0(v5, 816);
        v4 = 1.0;
      }
    }
    *(float *)(this + 816) = v4;
  }
  v10 = v4;
  if ( *(_DWORD *)(this + 820) != LODWORD(v10) )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
      *(float *)(this + 820) = v4;
    }
    else
    {
      v6 = *(int **)(this + 24);
      if ( v6 )
      {
        sub_100194B0(v6, 820);
        v4 = 1.0;
      }
      *(float *)(this + 820) = v4;
    }
  }
  if ( *(_DWORD *)(this + 824) != COERCE_INT(0.0) )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
    }
    else
    {
      v7 = *(int **)(this + 24);
      if ( v7 )
        sub_100194B0(v7, 824);
    }
    *(float *)(this + 824) = 0.0;
  }
  if ( *(_DWORD *)(this + 828) != COERCE_INT(16.0) )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
    }
    else
    {
      v8 = *(int **)(this + 24);
      if ( v8 )
        sub_100194B0(v8, 828);
    }
    *(float *)(this + 828) = 16.0;
  }
  sub_1005C620((_BYTE *)(this + 116), 255, 255, 255, 255);
  return this;
}
