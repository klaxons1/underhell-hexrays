int __thiscall sub_1024CAD0(int this)
{
  int result; // eax
  int *v3; // ecx

  sub_100E33C0((char *)this, 0);
  *(_DWORD *)this = &CTest_ProxyToggle_Networkable::`vftable';
  result = this;
  if ( *(_DWORD *)(this + 800) != 1241 )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
    }
    else
    {
      v3 = *(int **)(this + 24);
      if ( v3 )
        sub_100194B0(v3, 800);
    }
    *(_DWORD *)(this + 800) = 1241;
    result = this;
  }
  dword_106C6C0C = this;
  return result;
}
