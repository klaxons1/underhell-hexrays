char __thiscall sub_101D6880(unsigned __int8 *this, unsigned __int8 *Str1, int *a3)
{
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
              return sub_101C6390((int)Str1, *a3);
            }
            else
            {
              *a3 = this[11];
              return 1;
            }
          }
          else
          {
            *a3 = this[13];
            return 1;
          }
        }
        else
        {
          *a3 = this[12];
          return 1;
        }
      }
      else
      {
        *a3 = this[10];
        return 1;
      }
    }
    else
    {
      *a3 = this[9];
      return 1;
    }
  }
  else
  {
    *a3 = this[8];
    return 1;
  }
}
