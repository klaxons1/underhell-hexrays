int __thiscall sub_102AC3B0(_DWORD *this, int a2)
{
  int result; // eax

  if ( *(_DWORD *)(a2 + 24) == 2 )
  {
    result = *(_DWORD *)(a2 + 8);
    this[240] = result;
  }
  else
  {
    result = 0;
    this[240] = 0;
  }
  return result;
}
