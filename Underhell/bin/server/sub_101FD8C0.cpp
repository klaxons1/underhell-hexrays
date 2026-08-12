int __thiscall sub_101FD8C0(int this, char a2)
{
  char v3; // bl
  int result; // eax
  int *v5; // ecx

  if ( *(_BYTE *)(this + 845) )
    v3 = a2;
  else
    v3 = 0;
  if ( v3 != *(_BYTE *)(this + 836) )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
      *(_BYTE *)(this + 836) = v3;
      return sub_100D8500((_DWORD *)this);
    }
    else
    {
      v5 = *(int **)(this + 24);
      if ( v5 )
        sub_100194B0(v5, 836);
      *(_BYTE *)(this + 836) = v3;
      return sub_100D8500((_DWORD *)this);
    }
  }
  return result;
}
