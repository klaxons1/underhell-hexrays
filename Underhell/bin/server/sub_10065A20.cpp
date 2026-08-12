__int16 __thiscall sub_10065A20(_DWORD *this, __int16 a2)
{
  if ( (dword_10692DD0 & 1) == 0 )
  {
    dword_10692DD0 |= 1u;
    word_10692DC8 = -1;
    word_10692DCA = -1;
    word_10692DCC = -1;
    word_10692DCE = 1;
  }
  if ( a2 == -1 )
    return word_10692DC8;
  else
    return *(_WORD *)(this[1] + 80 * a2);
}
