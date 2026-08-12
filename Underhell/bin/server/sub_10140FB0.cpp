int __thiscall sub_10140FB0(int this)
{
  double v2; // st7
  int *v3; // ecx
  int *v4; // ecx
  int *v5; // ecx
  float v7; // [esp+8h] [ebp-4h]

  sub_10140CE0(this);
  v2 = 0.0;
  *(_DWORD *)this = &CFireSmoke::`vftable';
  if ( *(_DWORD *)(this + 804) != COERCE_INT(0.0) )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
    }
    else
    {
      v3 = *(int **)(this + 24);
      if ( v3 )
      {
        sub_100194B0(v3, 804);
        v2 = 0.0;
      }
    }
    *(float *)(this + 804) = v2;
  }
  v7 = v2;
  if ( *(_DWORD *)(this + 808) != LODWORD(v7) )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
      *(float *)(this + 808) = v2;
    }
    else
    {
      v4 = *(int **)(this + 24);
      if ( v4 )
      {
        sub_100194B0(v4, 808);
        v2 = 0.0;
      }
      *(float *)(this + 808) = v2;
    }
  }
  if ( *(_DWORD *)(this + 812) )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
    }
    else
    {
      v5 = *(int **)(this + 24);
      if ( v5 )
        sub_100194B0(v5, 812);
    }
    *(_DWORD *)(this + 812) = 0;
  }
  *(_DWORD *)(this + 252) |= 0x80u;
  sub_100D8500((_DWORD *)this);
  return this;
}
