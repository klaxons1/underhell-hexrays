int __thiscall sub_10135840(_DWORD *this)
{
  bool v2; // zf
  int v3; // eax

  v2 = this[110] == 0;
  *this = &CEnvWindShared::`vftable';
  if ( !v2 )
  {
    v3 = sub_1023DBA0();
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v3 + 20))(v3, this[110]);
  }
  sub_101357D0((_WORD *)this + 244);
  if ( (int)this[124] >= 0 )
  {
    if ( this[122] )
    {
      (*(void (__thiscall **)(_DWORD, _DWORD))(*g_pMemAlloc + 20))(g_pMemAlloc, this[122]);
      this[122] = 0;
    }
    this[123] = 0;
  }
  sub_101357D0((_WORD *)this + 226);
  if ( (int)this[115] >= 0 )
  {
    if ( this[113] )
    {
      (*(void (__thiscall **)(_DWORD, _DWORD))(*g_pMemAlloc + 20))(g_pMemAlloc, this[113]);
      this[113] = 0;
    }
    this[114] = 0;
  }
  sub_1010BB10(this + 22);
  return sub_1010BB10(this + 16);
}
