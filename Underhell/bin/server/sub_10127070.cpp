int __thiscall sub_10127070(int this)
{
  int result; // eax
  int *v3; // ecx

  sub_100E33C0((char *)this, 0);
  *(_DWORD *)this = &CPrecipitation::`vftable';
  result = this;
  if ( *(_DWORD *)(this + 800) )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
      *(_DWORD *)(this + 800) = 0;
    }
    else
    {
      v3 = *(int **)(this + 24);
      if ( v3 )
        sub_100194B0(v3, 800);
      *(_DWORD *)(this + 800) = 0;
      return this;
    }
  }
  return result;
}
