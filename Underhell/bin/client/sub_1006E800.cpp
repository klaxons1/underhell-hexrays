_DWORD *__thiscall sub_1006E800(_DWORD *this, char a2)
{
  sub_1006E490(this + 298);
  if ( (int)this[300] >= 0 )
  {
    if ( this[298] )
    {
      (*(void (__thiscall **)(_DWORD, _DWORD))(*g_pMemAlloc + 20))(g_pMemAlloc, this[298]);
      this[298] = 0;
    }
    this[299] = 0;
  }
  sub_1003D350((int)this);
  if ( (a2 & 1) != 0 )
    sub_10034930((int)this);
  return this;
}
