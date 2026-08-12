char __thiscall sub_1022EEF0(_DWORD *this, int a2, int a3, int a4, char a5)
{
  int v6; // eax

  if ( (int)this[2] >= 0 )
  {
    if ( *this )
    {
      (*(void (__thiscall **)(_DWORD, _DWORD))(*g_pMemAlloc + 20))(g_pMemAlloc, *this);
      *this = 0;
    }
    this[1] = 0;
  }
  LOBYTE(v6) = a4;
  this[1] = a3;
  *this = a2;
  this[2] = -1;
  this[3] = 0;
  this[4] = a4;
  this[6] = 0;
  *((_BYTE *)this + 20) = 0;
  this[8] = 0;
  *((_BYTE *)this + 21) = a5;
  this[7] = -1;
  if ( a4 > -1 )
  {
    if ( (a5 & 8) == 0 )
    {
      LOBYTE(v6) = sub_1022E680((int)this, 1);
      if ( (_BYTE)v6 )
      {
        v6 = this[4] - this[8];
        *(_BYTE *)(v6 + *this) = 0;
        this[7] = this[4];
        return v6;
      }
      *((_BYTE *)this + 20) &= ~1u;
    }
    this[7] = this[4];
  }
  return v6;
}
