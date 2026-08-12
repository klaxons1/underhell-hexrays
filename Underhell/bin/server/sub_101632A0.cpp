int __thiscall sub_101632A0(_DWORD *this, int a2)
{
  int result; // eax

  if ( *(_DWORD *)(a2 + 24) == 5 )
  {
    result = *(_DWORD *)(a2 + 8);
    this[201] = result;
  }
  else
  {
    result = 0;
    this[201] = 0;
  }
  return result;
}
