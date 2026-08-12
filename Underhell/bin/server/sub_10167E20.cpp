BOOL __thiscall sub_10167E20(_DWORD *this, int a2)
{
  bool v3; // sf

  v3 = (int)this[20] < 0;
  this[21] = 0;
  if ( !v3 )
  {
    if ( this[18] )
    {
      (*(void (__thiscall **)(_DWORD, _DWORD))(*g_pMemAlloc + 20))(g_pMemAlloc, this[18]);
      this[18] = 0;
    }
    this[19] = 0;
  }
  this[22] = this[18];
  sub_1042F730(this + 3);
  return (*(int (__thiscall **)(int, const char *, _DWORD *, _DWORD, int, int))(*(_DWORD *)a2 + 12))(
           a2,
           "GLOBAL",
           this,
           0,
           dword_10628BB4,
           dword_10628BB8) != 0;
}
