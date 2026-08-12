int __thiscall sub_102116D0(_DWORD *this, int a2, int a3)
{
  int result; // eax

  result = this[30];
  if ( result > 63 )
  {
    result = 63;
  }
  else if ( result < 0 )
  {
    result = 0;
    this[30] = 0;
    return result;
  }
  this[30] = result;
  return result;
}
