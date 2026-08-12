int __thiscall sub_100F9790(_DWORD *this)
{
  int result; // eax

  sub_1022D490();
  if ( this[10] )
    (*(void (__thiscall **)(_DWORD, _DWORD))(*g_pMemAlloc + 20))(g_pMemAlloc, this[10]);
  result = sub_10087F70((_WORD *)this + 6);
  if ( (int)this[5] >= 0 )
  {
    result = this[3];
    if ( result )
    {
      result = (*(int (__thiscall **)(_DWORD, _DWORD))(*g_pMemAlloc + 20))(g_pMemAlloc, this[3]);
      this[3] = 0;
    }
    this[4] = 0;
  }
  if ( (int)this[2] >= 0 )
  {
    result = *this;
    if ( *this )
    {
      result = (*(int (__thiscall **)(_DWORD, _DWORD))(*g_pMemAlloc + 20))(g_pMemAlloc, *this);
      *this = 0;
    }
    this[1] = 0;
  }
  return result;
}
