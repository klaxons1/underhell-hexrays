int __thiscall sub_10295540(int this, int *a2)
{
  int result; // eax

  result = *a2;
  if ( *a2 == dword_106DB074 )
  {
    *(_BYTE *)(this + 84) = 1;
  }
  else if ( result == dword_106DB070 )
  {
    *(_BYTE *)(this + 84) = 0;
  }
  else
  {
    return sub_1004B710((_DWORD **)this);
  }
  return result;
}
