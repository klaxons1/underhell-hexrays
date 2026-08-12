int __thiscall sub_1009CA00(_DWORD *this)
{
  bool v2; // zf
  int v3; // eax
  int result; // eax

  v2 = this[98] == 0;
  *this = &CEnvWindShared::`vftable';
  if ( !v2 )
  {
    v3 = sub_101218C0();
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v3 + 20))(v3, this[98]);
  }
  sub_1009C990((_WORD *)this + 220);
  if ( (int)this[112] >= 0 )
  {
    if ( this[110] )
    {
      (*(void (__thiscall **)(_DWORD, _DWORD))(*g_pMemAlloc + 20))(g_pMemAlloc, this[110]);
      this[110] = 0;
    }
    this[111] = 0;
  }
  result = sub_1009C990((_WORD *)this + 202);
  if ( (int)this[103] >= 0 )
  {
    result = this[101];
    if ( result )
    {
      result = (*(int (__thiscall **)(_DWORD, _DWORD))(*g_pMemAlloc + 20))(g_pMemAlloc, this[101]);
      this[101] = 0;
    }
    this[102] = 0;
  }
  return result;
}
