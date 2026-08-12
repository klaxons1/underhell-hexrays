int __thiscall sub_101D3A40(_BYTE *this, unsigned __int8 *Str1, int a3)
{
  if ( _mbscmp(Str1, "DXT1UseAlpha") )
  {
    if ( _mbscmp(Str1, "AlphaThreshold") )
    {
      return sub_101D6780(Str1, a3);
    }
    else
    {
      this[41] = a3;
      return 1;
    }
  }
  else
  {
    this[40] = a3 != 0;
    return 1;
  }
}
