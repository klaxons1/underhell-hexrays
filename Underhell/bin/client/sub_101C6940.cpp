_WORD *__thiscall sub_101C6940(_WORD *this, float a2)
{
  if ( a2 == 0.0 )
  {
    *this = 0;
    return this;
  }
  else
  {
    if ( word_10392FE0[LODWORD(a2) >> 23] )
      *this = word_10392FE0[LODWORD(a2) >> 23] + (((LODWORD(a2) & 0x7FFFFFu) + 4096) >> 13);
    else
      *this = sub_101D3B70(LODWORD(a2));
    return this;
  }
}
