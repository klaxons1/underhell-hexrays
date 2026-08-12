int __thiscall sub_1024C6C0(int this)
{
  int result; // eax
  int *v3; // ecx

  sub_100E33C0((char *)this, 0);
  *(_DWORD *)this = &CHandleTest::`vftable';
  *(_DWORD *)(this + 800) = -1;
  result = this;
  if ( *(_BYTE *)(this + 804) )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
      *(_BYTE *)(this + 804) = 0;
    }
    else
    {
      v3 = *(int **)(this + 24);
      if ( v3 )
        sub_100194B0(v3, 804);
      *(_BYTE *)(this + 804) = 0;
      return this;
    }
  }
  return result;
}
