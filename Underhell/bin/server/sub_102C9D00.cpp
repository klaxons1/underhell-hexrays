int __thiscall sub_102C9D00(_DWORD *this, int a2)
{
  int result; // eax

  if ( *(_DWORD *)(a2 + 24) == 5 )
  {
    result = *(_DWORD *)(a2 + 8);
    this[204] = result;
  }
  else
  {
    result = 0;
    this[204] = 0;
  }
  return result;
}
