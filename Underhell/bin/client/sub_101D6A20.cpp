char __thiscall sub_101D6A20(float *this, unsigned __int8 *Str1, float *a3)
{
  float Str1a; // [esp+Ch] [ebp+4h]
  float Str1b; // [esp+Ch] [ebp+4h]
  float Str1c; // [esp+Ch] [ebp+4h]

  if ( _mbscmp(Str1, "WeightR") )
  {
    if ( _mbscmp(Str1, "WeightG") )
    {
      if ( _mbscmp(Str1, "WeightB") )
      {
        return sub_101C63C0((int)Str1, (int)a3);
      }
      else
      {
        Str1c = sqrt(this[6]);
        *a3 = Str1c;
        return 1;
      }
    }
    else
    {
      Str1b = sqrt(this[5]);
      *a3 = Str1b;
      return 1;
    }
  }
  else
  {
    Str1a = sqrt(this[4]);
    *a3 = Str1a;
    return 1;
  }
}
