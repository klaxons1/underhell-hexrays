_DWORD *__thiscall sub_10405EE0(_DWORD *this, char a2)
{
  int v3; // eax
  int *v4; // ecx

  *this = &CLaserDot::`vftable';
  v3 = dword_106F04AC;
  v4 = &dword_106F04AC;
  if ( dword_106F04AC )
  {
    while ( (_DWORD *)v3 != this )
    {
      v4 = (int *)(v3 + 900);
      v3 = *(_DWORD *)(v3 + 900);
      if ( !v3 )
        goto LABEL_6;
    }
    *v4 = *(_DWORD *)(v3 + 900);
  }
LABEL_6:
  sub_100DF1D0(this);
  if ( (a2 & 1) != 0 )
    sub_100D6360((int)this);
  return this;
}
