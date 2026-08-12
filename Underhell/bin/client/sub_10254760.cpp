int __thiscall sub_10254760(_DWORD *this)
{
  int result; // eax
  int *v2; // edx

  result = this[70];
  if ( result == this[58] )
  {
    result = this[68] - 2;
    this[99] = result;
  }
  else
  {
    v2 = (int *)this[65];
    this[99] = 0;
    if ( result > *v2 )
    {
      result = 1;
      do
        ++this[99];
      while ( this[70] > *(_DWORD *)(this[65] + 4 * this[99]) );
    }
    --this[99];
  }
  return result;
}
