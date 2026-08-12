float *__thiscall sub_101E2750(int this, int a2, _BYTE *a3, int a4)
{
  double v5; // st7
  __int16 v6; // ax
  int v8; // ecx
  double v9; // st7
  __int16 v10; // ax

  if ( a2 >= 0 )
  {
    v8 = this + 20 * a4;
    if ( a2 < *(_DWORD *)(this + 20 * a4 + 28) )
    {
      *a3 = 0;
      if ( a2 >= *(_DWORD *)(v8 + 28) )
        return 0;
      else
        return (float *)(*(_DWORD *)(v8 + 16) + 10 * a2);
    }
    else
    {
      if ( (dword_10458DB0 & 2) == 0 )
      {
        dword_10458DB0 |= 2u;
        flt_10458D98 = 0.0;
        flt_10458D9C = 0.0;
        word_10458DA0 = 0;
      }
      flt_10458D9C = ((double (__thiscall *)(_DWORD))***(_DWORD ***)(this + 88))(*(_DWORD *)(this + 88));
      if ( a4 == 1 )
      {
        v9 = 0.5;
      }
      else if ( *(_BYTE *)(this + 79) )
      {
        v9 = *(float *)(this + 82);
      }
      else
      {
        v9 = 0.0;
        if ( *(float *)(this + 12) != *(float *)(this + 8) )
          v9 = -*(float *)(this + 8) / (*(float *)(this + 12) - *(float *)(this + 8));
      }
      flt_10458D98 = v9;
      if ( a4 )
      {
        word_10458DA0 &= 1u;
        *a3 = 1;
        return &flt_10458D98;
      }
      else
      {
        if ( *(_BYTE *)(this + 79) )
          v10 = *(_WORD *)(this + 80);
        else
          v10 = 0;
        word_10458DA0 = word_10458DA0 & 1 | (2 * v10);
        *a3 = 1;
        return &flt_10458D98;
      }
    }
  }
  else
  {
    v5 = 0.0;
    if ( (dword_10458DB0 & 1) == 0 )
    {
      dword_10458DB0 |= 1u;
      flt_10458DA4 = 0.0;
      word_10458DAC = 0;
    }
    flt_10458DA8 = 0.0;
    if ( a4 == 1 )
    {
      v5 = 0.5;
    }
    else if ( *(_BYTE *)(this + 72) )
    {
      v5 = *(float *)(this + 75);
    }
    else if ( *(float *)(this + 12) != *(float *)(this + 8) )
    {
      v5 = -*(float *)(this + 8) / (*(float *)(this + 12) - *(float *)(this + 8));
    }
    flt_10458DA4 = v5;
    if ( a4 )
    {
      word_10458DAC &= 1u;
      *a3 = 1;
      return &flt_10458DA4;
    }
    else
    {
      if ( *(_BYTE *)(this + 72) )
        v6 = *(_WORD *)(this + 73);
      else
        v6 = 0;
      word_10458DAC = (2 * v6) | word_10458DAC & 1;
      *a3 = 1;
      return &flt_10458DA4;
    }
  }
}
