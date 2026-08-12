int __thiscall sub_1042D740(_BYTE *this, int a2)
{
  char v4; // cl
  int v5; // eax
  char v6; // al
  int v7; // ecx

  if ( (this[21] & 1) == 0 || this[20] )
    return 0;
  while ( 1 )
  {
    v4 = this[20];
    if ( (v4 & 2) != 0 )
      break;
    v5 = *((_DWORD *)this + 3);
    if ( *((_DWORD *)this + 7) >= v5 + a2 + 1 )
    {
      if ( (v7 = *((_DWORD *)this + 8), v5 >= v7) && *((_DWORD *)this + 1) >= v5 - v7 + a2 + 1
        || (v6 = (*((int (__thiscall **)(_BYTE *, int))this + 9))(this, a2 + 1)) != 0 )
      {
        v6 = 1;
      }
      else
      {
        this[20] |= 2u;
      }
    }
    else
    {
      this[20] = v4 | 2;
      v6 = 0;
    }
    this[20] &= ~2u;
    if ( !v6 || !isspace(*(unsigned __int8 *)(*((_DWORD *)this + 3) + a2 + *(_DWORD *)this - *((_DWORD *)this + 8))) )
      break;
    ++a2;
  }
  return a2;
}
