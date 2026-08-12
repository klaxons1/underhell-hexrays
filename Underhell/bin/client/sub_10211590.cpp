int __thiscall sub_10211590(_DWORD *this, int a2, int a3)
{
  int result; // eax

  result = this[17];
  if ( result > 63 )
  {
    result = 63;
  }
  else if ( result < 0 )
  {
    result = 0;
    this[17] = 0;
    return result;
  }
  this[17] = result;
  return result;
}
