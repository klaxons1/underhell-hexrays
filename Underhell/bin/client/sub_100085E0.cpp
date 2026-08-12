_DWORD *__thiscall sub_100085E0(_DWORD *this, char a2)
{
  if ( (int)this[7] >= 0 )
  {
    if ( this[5] )
    {
      (*(void (__thiscall **)(_DWORD, _DWORD))(*g_pMemAlloc + 20))(g_pMemAlloc, this[5]);
      this[5] = 0;
    }
    this[6] = 0;
  }
  sub_1000A3E0(this);
  if ( (a2 & 1) != 0 )
    sub_10034930(this);
  return this;
}
