bool __thiscall sub_102357F0(int this, int a2, int a3, int a4)
{
  char *v5; // eax
  __int16 v6; // ax
  int v8; // esi
  _WORD *i; // edi

  v5 = *(char **)(this + 12);
  if ( v5 )
  {
    if ( *v5 < 0 )
    {
      *(_DWORD *)v5 &= ~0x80u;
      (*(void (__thiscall **)(int, _DWORD, int))(*(_DWORD *)dword_106B31D0 + 292))(
        dword_106B31D0,
        *(_DWORD *)(this + 12),
        this + 16);
    }
  }
  v6 = *(_WORD *)(this + 18);
  if ( v6 < 0 )
    return (*(int (__stdcall **)(_DWORD, int, int))(*(_DWORD *)dword_106B31D0 + 248))(*(__int16 *)(this + 16), a3, a4) != 0;
  v8 = v6 - 1;
  if ( v8 < 0 )
    return 0;
  for ( i = (_WORD *)(*(_DWORD *)(this + 20) + 2 * v8);
        ((unsigned __int8)(1 << (*i & 7)) & *(_BYTE *)(((unsigned __int16)*i >> 3) + a3)) == 0;
        --i )
  {
    if ( --v8 < 0 )
      return 0;
  }
  return 1;
}
