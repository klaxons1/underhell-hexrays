int __thiscall sub_1021F910(_DWORD *this, int a2, int a3)
{
  int result; // eax

  result = this[11];
  if ( result > 63 )
  {
    result = 63;
  }
  else if ( result < 0 )
  {
    result = 0;
    this[11] = 0;
    return result;
  }
  this[11] = result;
  return result;
}
