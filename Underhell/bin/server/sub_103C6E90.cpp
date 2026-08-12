char __thiscall sub_103C6E90(void *this)
{
  int v2; // eax

  v2 = (*(int (__thiscall **)(void *))(*(_DWORD *)this + 368))(this);
  if ( v2 )
  {
    LOBYTE(v2) = sub_10093C50(this);
    if ( (_BYTE)v2 )
      LOBYTE(v2) = (*(int (__thiscall **)(void *, char *, _DWORD, _DWORD, _DWORD, _DWORD))(*(_DWORD *)this + 2244))(
                     this,
                     off_1067CE14[0],
                     0,
                     0,
                     0,
                     0);
  }
  return v2;
}
