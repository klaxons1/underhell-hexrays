_DWORD *__thiscall sub_100B0D30(_DWORD *this, char a2)
{
  sub_100EC500(this + 3);
  if ( (int)this[5] >= 0 )
  {
    if ( this[3] )
    {
      (*(void (__thiscall **)(_DWORD, _DWORD))(*g_pMemAlloc + 20))(g_pMemAlloc, this[3]);
      this[3] = 0;
    }
    this[4] = 0;
  }
  sub_100D3300((int)this);
  if ( (a2 & 1) != 0 )
    sub_10034930((int)this);
  return this;
}
