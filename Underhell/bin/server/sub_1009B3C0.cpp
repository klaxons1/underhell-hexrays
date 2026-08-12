__int16 __thiscall sub_1009B3C0(_DWORD *this, __int16 a2)
{
  if ( (dword_10693D18 & 1) == 0 )
  {
    dword_10693D18 |= 1u;
    word_10693D10 = -1;
    word_10693D12 = -1;
    word_10693D14 = -1;
    word_10693D16 = 1;
  }
  if ( a2 == -1 )
    return word_10693D12;
  else
    return *(_WORD *)(this[1] + 16 * a2 + 2);
}
