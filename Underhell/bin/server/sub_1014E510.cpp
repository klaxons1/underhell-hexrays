int __thiscall sub_1014E510(int this)
{
  int *v2; // ecx
  int result; // eax
  int *v4; // ecx

  sub_100E33C0((char *)this, 0);
  *(_DWORD *)this = &CFunc_Dust::`vftable';
  if ( *(_DWORD *)(this + 836) != 1 )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
    }
    else
    {
      v2 = *(int **)(this + 24);
      if ( v2 )
        sub_100194B0(v2, 836);
    }
    *(_DWORD *)(this + 836) = 1;
  }
  result = this;
  if ( *(_DWORD *)(this + 832) != COERCE_INT(0.0) )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
      *(float *)(this + 832) = 0.0;
    }
    else
    {
      v4 = *(int **)(this + 24);
      if ( v4 )
        sub_100194B0(v4, 832);
      result = this;
      *(float *)(this + 832) = 0.0;
    }
  }
  return result;
}
