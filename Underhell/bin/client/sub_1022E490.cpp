int __thiscall sub_1022E490(int this, int a2, int a3)
{
  int v3; // eax
  int result; // eax
  int v5; // edx

  if ( a2 )
  {
    if ( a2 == 1 )
    {
      *(_DWORD *)(this + 12) += a3;
      goto LABEL_8;
    }
    if ( a2 != 2 )
      goto LABEL_8;
    v3 = *(_DWORD *)(this + 28) - a3;
  }
  else
  {
    v3 = a3;
  }
  *(_DWORD *)(this + 12) = v3;
LABEL_8:
  result = *(_DWORD *)(this + 12);
  if ( result <= *(_DWORD *)(this + 28) )
  {
    v5 = *(_DWORD *)(this + 32);
    *(_BYTE *)(this + 20) &= ~2u;
    if ( result < v5 || result >= v5 + *(_DWORD *)(this + 4) )
      return (*(int (__stdcall **)(int))(this + 36))(-1);
  }
  else
  {
    *(_BYTE *)(this + 20) |= 2u;
  }
  return result;
}
