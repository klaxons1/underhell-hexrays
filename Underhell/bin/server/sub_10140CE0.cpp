int __thiscall sub_10140CE0(int this)
{
  double v2; // st7
  int *v3; // ecx
  int *v4; // ecx
  int *v5; // ecx
  int result; // eax
  int *v7; // ecx
  float v8; // [esp+Ch] [ebp-4h]
  float v9; // [esp+Ch] [ebp-4h]

  sub_100E33C0((char *)this, 0);
  v2 = 0.0;
  *(_DWORD *)this = &CBaseFire::`vftable';
  if ( *(_DWORD *)(this + 800) != COERCE_INT(0.0) )
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
        sub_100194B0(v3, 800);
        v2 = 0.0;
      }
    }
    *(float *)(this + 800) = v2;
  }
  v8 = v2;
  if ( *(_DWORD *)(this + 804) != LODWORD(v8) )
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
        sub_100194B0(v4, 804);
        v2 = 0.0;
      }
    }
    *(float *)(this + 804) = v2;
  }
  v9 = v2;
  if ( *(_DWORD *)(this + 808) != LODWORD(v9) )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
      *(float *)(this + 808) = v2;
    }
    else
    {
      v5 = *(int **)(this + 24);
      if ( v5 )
      {
        sub_100194B0(v5, 808);
        v2 = 0.0;
      }
      *(float *)(this + 808) = v2;
    }
  }
  result = this;
  if ( *(_DWORD *)(this + 812) )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
      *(_DWORD *)(this + 812) = 0;
    }
    else
    {
      v7 = *(int **)(this + 24);
      if ( v7 )
        sub_100194B0(v7, 812);
      *(_DWORD *)(this + 812) = 0;
      return this;
    }
  }
  return result;
}
