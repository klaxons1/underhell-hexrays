int __thiscall sub_10131720(int this)
{
  int v2; // eax
  double v3; // st7
  int *v4; // ecx
  int *v5; // ecx
  int result; // eax
  int *v7; // ecx
  float v8; // [esp+8h] [ebp-4h]

  sub_100BDBA0(this);
  sub_100DAA70((_DWORD *)this);
  v2 = sub_100D8530((void *)this);
  if ( v2 )
  {
    v3 = (double)*(int *)(v2 + 804);
    v8 = v3;
    if ( 0.0 == v3 )
    {
      v3 = 1.0;
      v8 = 1.0;
    }
    if ( *(_DWORD *)(this + 1120) != LODWORD(v8) )
    {
      if ( *(_BYTE *)(this + 84) )
      {
        *(_BYTE *)(this + 88) |= 1u;
        *(float *)(this + 1120) = v3;
      }
      else
      {
        v4 = *(int **)(this + 24);
        if ( v4 )
        {
          sub_100194B0(v4, 1120);
          v3 = v8;
        }
        *(float *)(this + 1120) = v3;
      }
    }
  }
  else if ( *(_DWORD *)(this + 1120) != COERCE_INT(1.0) )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
      *(float *)(this + 1120) = 1.0;
    }
    else
    {
      v5 = *(int **)(this + 24);
      if ( v5 )
        sub_100194B0(v5, 1120);
      *(float *)(this + 1120) = 1.0;
    }
  }
  result = *(_DWORD *)(this + 864);
  if ( result != COERCE_INT(1.0) )
  {
    result = this;
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
      *(float *)(this + 864) = 1.0;
    }
    else
    {
      v7 = *(int **)(this + 24);
      if ( v7 )
        result = sub_100194B0(v7, 864);
      *(float *)(this + 864) = 1.0;
    }
  }
  return result;
}
