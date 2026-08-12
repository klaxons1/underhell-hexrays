char __thiscall sub_101D3AA0(unsigned __int8 *this, unsigned __int8 *Str1, int *a3)
{
  if ( _mbscmp(Str1, "DXT1UseAlpha") )
  {
    if ( _mbscmp(Str1, "AlphaThreshold") )
    {
      return sub_101D6780(Str1, *a3);
    }
    else
    {
      *a3 = this[41];
      return 1;
    }
  }
  else
  {
    *a3 = this[40];
    return 1;
  }
}
