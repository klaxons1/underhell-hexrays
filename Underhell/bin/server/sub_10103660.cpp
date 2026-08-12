int __thiscall sub_10103660(_DWORD *this)
{
  int result; // eax
  _DWORD *v2; // edx

  result = 0;
  if ( (int)this[1020] > 0 )
  {
    v2 = this + 52;
    do
    {
      *v2 = -9999;
      ++result;
      v2 += 85;
    }
    while ( result < this[1020] );
  }
  return result;
}
