_DWORD *__thiscall sub_100D0B00(_DWORD *this, char a2)
{
  sub_10215D00(this + 3);
  if ( (int)this[5] >= 0 )
  {
    if ( this[3] )
    {
      (*(void (__thiscall **)(_DWORD, _DWORD))(*g_pMemAlloc + 20))(g_pMemAlloc, this[3]);
      this[3] = 0;
    }
    this[4] = 0;
  }
  sub_10170140((int)this);
  if ( (a2 & 1) != 0 )
    sub_10184660(this);
  return this;
}
