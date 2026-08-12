char __thiscall sub_101D6780(_BYTE *this, unsigned __int8 *Str1, int a3)
{
  char result; // al

  if ( _mbscmp(Str1, "UseChannelWeighting") )
  {
    if ( _mbscmp(Str1, "UseAdaptiveWeighting") )
    {
      if ( _mbscmp(Str1, "UseSSE2") )
      {
        if ( _mbscmp(Str1, "3DRefinement") )
        {
          if ( _mbscmp(Str1, "RefinementSteps") )
          {
            if ( _mbscmp(Str1, "ForceFloatPath") )
            {
              return sub_101C6390((int)Str1, a3);
            }
            else
            {
              result = 1;
              this[11] = a3 != 0;
            }
          }
          else
          {
            this[13] = a3;
            return 1;
          }
        }
        else
        {
          result = 1;
          this[12] = a3 != 0;
        }
      }
      else
      {
        if ( a3 )
          this[10] = sub_101C63D0();
        else
          this[10] = 0;
        return 1;
      }
    }
    else
    {
      result = 1;
      this[9] = a3 != 0;
    }
  }
  else
  {
    this[8] = a3 != 0;
    return 1;
  }
  return result;
}
