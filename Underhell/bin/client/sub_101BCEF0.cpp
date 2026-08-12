int __thiscall sub_101BCEF0(_DWORD *this)
{
  int result; // eax

  result = this[4];
  this[3] = 0;
  if ( result )
  {
    result = sub_10034930(result);
    this[4] = 0;
  }
  return result;
}
