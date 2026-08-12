int __thiscall sub_102425D0(int this)
{
  int *v2; // ecx
  int result; // eax
  int *v4; // ecx

  sub_100E33C0((char *)this, 0);
  *(_DWORD *)this = &CSprite::`vftable';
  *(_DWORD *)(this + 800) = -1;
  if ( *(_DWORD *)(this + 840) != COERCE_INT(2.0) )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
    }
    else
    {
      v2 = *(int **)(this + 24);
      if ( v2 )
        sub_100194B0(v2, 840);
    }
    *(float *)(this + 840) = 2.0;
  }
  result = this;
  if ( *(_DWORD *)(this + 844) != COERCE_INT(1.0) )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
      *(float *)(this + 844) = 1.0;
    }
    else
    {
      v4 = *(int **)(this + 24);
      if ( v4 )
        sub_100194B0(v4, 844);
      result = this;
      *(float *)(this + 844) = 1.0;
    }
  }
  return result;
}
