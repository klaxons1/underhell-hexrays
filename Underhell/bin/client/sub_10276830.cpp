char __thiscall sub_10276830(_DWORD *this, int a2, _DWORD *a3)
{
  _DWORD *v3; // esi
  int v4; // edx
  _DWORD *v6; // ebx
  _DWORD *v7; // eax
  _DWORD *v8; // ebp
  int v9; // edi
  char v10; // al
  bool v11; // al
  int v12; // eax

  v3 = this;
  if ( a2 < 0 )
    return 0;
  if ( a2 >= this[54] )
    return 0;
  if ( a2 > this[60] )
    return 0;
  v4 = 12 * a2 + this[53];
  if ( *(_DWORD *)(v4 + 4) == a2 && *(_DWORD *)(v4 + 8) != a2 )
    return 0;
  v6 = *(_DWORD **)(12 * a2 + this[53]);
  v7 = (_DWORD *)sub_10273C00(v6);
  v8 = v7;
  if ( !v3[67] || (LOBYTE(a2) = 1, !v7) )
    LOBYTE(a2) = 0;
  v9 = -1;
  if ( (_BYTE)a2 )
    v9 = sub_10273D30(v7, (int)v6);
  sub_10273490(v6, a3);
  if ( (_BYTE)a2 )
  {
    a3 = (_DWORD *)v8[58];
    if ( v9 <= 0
      || (v10 = ((int (__cdecl *)(_DWORD, _DWORD))v3[67])(v6[54], *(_DWORD *)(*(_DWORD *)(v8[55] + 4 * v9 - 4) + 216)),
          LOBYTE(a2) = 1,
          !v10) )
    {
      LOBYTE(a2) = 0;
    }
    v11 = v9 < (int)a3 - 1
       && ((unsigned __int8 (__cdecl *)(_DWORD, _DWORD))v3[67])(
            *(_DWORD *)(*(_DWORD *)(v8[55] + 4 * v9 + 4) + 216),
            v6[54]);
    if ( (_BYTE)a2 || v11 )
    {
      if ( v8[58] - v9 - 1 > 0 )
        memcpy((void *)(v8[55] + 4 * v9), (const void *)(v8[55] + 4 * v9 + 4), 4 * (v8[58] - v9 - 1));
      --v8[58];
      a2 = (int)v6;
      v12 = sub_10273C50(v8, (int)v6);
      sub_10258C50(v8 + 55, v12 + 1, &a2);
      v3 = this;
    }
  }
  (*(void (__thiscall **)(_DWORD *, _DWORD, _DWORD))(*v3 + 244))(v3, 0, 0);
  return 1;
}
