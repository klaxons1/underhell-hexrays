int __thiscall sub_101D27E0(float *this, unsigned __int8 *Str1, float a3)
{
  int result; // eax

  if ( _mbscmp(Str1, "WeightR") )
  {
    if ( _mbscmp(Str1, "WeightG") )
    {
      if ( _mbscmp(Str1, "WeightB") )
      {
        return sub_101D6970(Str1, a3);
      }
      else
      {
        this[5] = a3;
        this[8] = a3;
        return 1;
      }
    }
    else
    {
      this[6] = a3;
      result = 1;
      this[9] = a3;
    }
  }
  else
  {
    this[4] = a3;
    result = 1;
    this[7] = a3;
  }
  return result;
}
