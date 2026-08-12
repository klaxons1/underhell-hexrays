float *__thiscall sub_104198C0(char *this, double (__thiscall ***a2)(_DWORD), int a3, _BYTE *a4)
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
      if ( (dword_106F1834 & 2) == 0 )
      {
        dword_106F1834 |= 2u;
        flt_106F181C = 0.0;
        flt_106F1820 = 0.0;
        word_106F1824 = 0;
      }
      flt_106F1820 = (**a2)(a2);
      if ( this[27] )
        v8 = *(float *)(this + 30);
      else
        v8 = 0.0;
      flt_106F181C = v8;
      if ( this[27] )
        v9 = *((_WORD *)this + 14);
      else
        v9 = 0;
      word_106F1824 = (2 * v9) | word_106F1824 & 1;
      *a4 = 1;
      return &flt_106F181C;
    }
  }
  else
  {
    v5 = 0.0;
    if ( (dword_106F1834 & 1) == 0 )
    {
      dword_106F1834 |= 1u;
      flt_106F1828 = 0.0;
      word_106F1830 = 0;
    }
    flt_106F182C = 0.0;
    if ( this[20] )
      v5 = *(float *)(this + 23);
    flt_106F1828 = v5;
    if ( this[20] )
      v6 = *(_WORD *)(this + 21);
    else
      v6 = 0;
    word_106F1830 = (2 * v6) | word_106F1830 & 1;
    *a4 = 1;
    return &flt_106F1828;
  }
}
