int __thiscall sub_10185F40(_DWORD *this, int a2)
{
  int result; // eax

  if ( *(_DWORD *)(a2 + 24) == 5 )
  {
    result = *(_DWORD *)(a2 + 8);
    this[237] = result;
  }
  else
  {
    result = 0;
    this[237] = 0;
  }
  return result;
}
