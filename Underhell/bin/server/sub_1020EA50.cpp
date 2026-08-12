char *__thiscall sub_1020EA50(char *this)
{
  char *v2; // eax
  int *v4; // ecx

  v2 = this - 1704;
  if ( *(this - 1620) )
  {
    v2[88] |= 1u;
    return this;
  }
  else
  {
    v4 = (int *)*((_DWORD *)v2 + 6);
    if ( v4 )
      sub_100194B0(v4, (_WORD)this - (_WORD)v2);
    return this;
  }
}
