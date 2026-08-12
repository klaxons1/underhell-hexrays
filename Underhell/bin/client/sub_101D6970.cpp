char __thiscall sub_101D6970(float *this, unsigned __int8 *Str1, int a3)
{
  char result; // al
  float v5; // [esp+14h] [ebp+8h]
  float v6; // [esp+14h] [ebp+8h]
  float v7; // [esp+14h] [ebp+8h]

  if ( _mbscmp(Str1, "WeightR") )
  {
    if ( _mbscmp(Str1, "WeightG") )
    {
      if ( _mbscmp(Str1, "WeightB") )
      {
        return sub_101C63B0((int)Str1, a3);
      }
      else
      {
        result = 1;
        v7 = *(float *)&a3 * *(float *)&a3;
        this[6] = v7;
        this[9] = v7;
      }
    }
    else
    {
      result = 1;
      v6 = *(float *)&a3 * *(float *)&a3;
      this[5] = v6;
      this[8] = v6;
    }
  }
  else
  {
    result = 1;
    v5 = *(float *)&a3 * *(float *)&a3;
    this[4] = v5;
    this[7] = v5;
  }
  return result;
}
