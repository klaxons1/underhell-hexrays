int __thiscall sub_10184B90(_DWORD *this, int a2)
{
  int result; // eax

  if ( *(_DWORD *)(a2 + 24) == 2 )
  {
    result = *(_DWORD *)(a2 + 8);
    this[203] = result;
  }
  else
  {
    result = 0;
    this[203] = 0;
  }
  return result;
}
