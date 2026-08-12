int __thiscall sub_10278A20(int *this, int a2)
{
  bool v3; // sf
  int *v4; // esi

  v3 = this[55] < 0;
  v4 = this + 53;
  this[56] = 0;
  if ( !v3 )
  {
    if ( *v4 )
    {
      (*(void (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, *v4);
      *v4 = 0;
    }
    v4[1] = 0;
  }
  v4[4] = *v4;
  v4[3] = 0;
  sub_10278610(v4, 0, a2, 0);
  return (*(int (__thiscall **)(int *, _DWORD, _DWORD))(*this + 244))(this, 0, 0);
}
