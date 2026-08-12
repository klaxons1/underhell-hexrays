int *__thiscall sub_10427BE0(_DWORD *this)
{
  if ( *this == 15 )
    return (int *)this[2];
  if ( (dword_106FDBF4 & 1) == 0 )
  {
    dword_106FDBF4 |= 1u;
    dword_106FDBE0 = 0;
    dword_106FDBE4 = 0;
    dword_106FDBE8 = 0;
    dword_106FDBEC = 0;
    dword_106FDBF0 = 0;
    atexit(sub_10479DD0);
  }
  return &dword_106FDBE0;
}
