int __thiscall sub_1012A350(int this)
{
  int *v2; // ecx
  int result; // eax
  int *v4; // ecx

  sub_100E33C0((char *)this, 0);
  *(_DWORD *)this = &CEntityDissolve::`vftable';
  if ( *(_DWORD *)(this + 800) != COERCE_INT(0.0) )
  {
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
  }
  result = this;
  if ( *(_DWORD *)(this + 844) != 250 )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
      *(_DWORD *)(this + 844) = 250;
    }
    else
    {
      v4 = *(int **)(this + 24);
      if ( v4 )
        sub_100194B0(v4, 844);
      *(_DWORD *)(this + 844) = 250;
      return this;
    }
  }
  return result;
}
