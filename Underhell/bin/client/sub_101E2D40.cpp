float *__thiscall sub_101E2D40(char *this, double (__thiscall ***a2)(_DWORD), int a3, _BYTE *a4)
{
  double v5; // st7
  __int16 v6; // ax
  double v8; // st7
  __int16 v9; // ax

  if ( a3 >= 0 )
  {
    if ( a3 < *((_DWORD *)this + 3) )
    {
      *a4 = 0;
      if ( a3 >= *((_DWORD *)this + 3) )
        return 0;
      else
        return (float *)(*(_DWORD *)this + 10 * a3);
    }
    else
    {
      if ( (dword_10458DCC & 2) == 0 )
      {
        dword_10458DCC |= 2u;
        flt_10458DB4 = 0.0;
        flt_10458DB8 = 0.0;
        word_10458DBC = 0;
      }
      flt_10458DB8 = (**a2)(a2);
      if ( this[27] )
        v8 = *(float *)(this + 30);
      else
        v8 = 0.0;
      flt_10458DB4 = v8;
      if ( this[27] )
        v9 = *((_WORD *)this + 14);
      else
        v9 = 0;
      word_10458DBC = (2 * v9) | word_10458DBC & 1;
      *a4 = 1;
      return &flt_10458DB4;
    }
  }
  else
  {
    v5 = 0.0;
    if ( (dword_10458DCC & 1) == 0 )
    {
      dword_10458DCC |= 1u;
      flt_10458DC0 = 0.0;
      word_10458DC8 = 0;
    }
    flt_10458DC4 = 0.0;
    if ( this[20] )
      v5 = *(float *)(this + 23);
    flt_10458DC0 = v5;
    if ( this[20] )
      v6 = *(_WORD *)(this + 21);
    else
      v6 = 0;
    word_10458DC8 = (2 * v6) | word_10458DC8 & 1;
    *a4 = 1;
    return &flt_10458DC0;
  }
}
