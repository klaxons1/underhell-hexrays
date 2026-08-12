double __cdecl sub_1001AB20(unsigned int a1)
{
  int v1; // ecx
  double v3; // st7

  v1 = (a1 >> 10) & 0x1F;
  if ( v1 == 31 )
  {
    if ( (a1 & 0x3FF) != 0 )
    {
      return 0.0;
    }
    else if ( (a1 & 0x8000) != 0 )
    {
      return -1.0 * 65504.0;
    }
    else
    {
      return 1.0 * 65504.0;
    }
  }
  else if ( (_WORD)v1 || (a1 & 0x3FF) == 0 )
  {
    return COERCE_FLOAT((a1 & 0x3FF
                       | (8
                        * (a1 & 0x8000
                         | ((((((unsigned __int16)a1 >> 10) & 0x1F) + 112) * ((((unsigned __int16)a1 >> 10) & 0x1F) != 0)) << 7)))) << 13);
  }
  else
  {
    v3 = (double)(a1 & 0x3FF) * 0.0009765625;
    if ( (a1 & 0x8000) != 0 )
      return v3 * -1.0 * 0.000061035156;
    else
      return v3 * 1.0 * 0.000061035156;
  }
}
