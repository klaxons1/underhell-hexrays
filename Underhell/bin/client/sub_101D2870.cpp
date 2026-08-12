char __thiscall sub_101D2870(float *this, unsigned __int8 *Str1, float *a3)
{
  if ( _mbscmp(Str1, "WeightR") )
  {
    if ( _mbscmp(Str1, "WeightG") )
    {
      if ( _mbscmp(Str1, "WeightB") )
      {
        return sub_101D6A20(Str1, (int)a3);
      }
      else
      {
        *a3 = this[5];
        return 1;
      }
    }
    else
    {
      *a3 = this[6];
      return 1;
    }
  }
  else
  {
    *a3 = this[4];
    return 1;
  }
}
