void *__thiscall sub_100CEC10(int this, void *Src)
{
  int v3; // eax
  int v4; // edi
  int v5; // eax
  int v6; // ecx
  int v7; // eax
  int *v8; // edi
  int v11; // [esp+10h] [ebp-4h]

  v3 = sub_100DDA40(64);
  if ( v3 )
  {
    *(_BYTE *)(v3 + 4) = 1;
    *(_DWORD *)(v3 + 12) = 0;
    *(_DWORD *)(v3 + 16) = 0;
    *(_DWORD *)(v3 + 20) = 0;
    *(_DWORD *)(v3 + 24) = 0;
    *(_DWORD *)(v3 + 28) = 0;
    *(_DWORD *)(v3 + 32) = 0;
    *(_DWORD *)(v3 + 36) = 0;
    *(_DWORD *)(v3 + 40) = 0;
    *(_DWORD *)(v3 + 44) = 0;
    *(_DWORD *)(v3 + 48) = 0;
    *(_DWORD *)(v3 + 52) = 0;
    *(_DWORD *)v3 = &CLCDPage::`vftable';
    *(_WORD *)(v3 + 56) = 0;
    *(_BYTE *)(v3 + 58) = 0;
    *(_DWORD *)(v3 + 60) = 1;
    *(_DWORD *)(v3 + 8) = 1;
    v11 = v3;
  }
  else
  {
    v11 = 0;
  }
  v4 = *(_DWORD *)(this + 44);
  v5 = *(_DWORD *)(this + 36);
  if ( v4 + 1 > v5 )
    sub_1010AFF0(v4 - v5 + 1);
  ++*(_DWORD *)(this + 44);
  v6 = *(_DWORD *)(this + 32);
  v7 = *(_DWORD *)(this + 44) - v4 - 1;
  *(_DWORD *)(this + 48) = v6;
  if ( v7 > 0 )
    memcpy((void *)(v6 + 4 * v4 + 4), (const void *)(v6 + 4 * v4), 4 * v7);
  v8 = (int *)(*(_DWORD *)(this + 32) + 4 * v4);
  if ( v8 )
    *v8 = v11;
  *(_BYTE *)(v11 + 57) = sub_1022A800("titlepage", 0) != 0;
  *(_BYTE *)(v11 + 58) = sub_1022A800("requiresplayer", 0) != 0;
  return sub_100CE9A0((unsigned __int8 (__cdecl **)(int, int))this, v11, 1, Src, (int *)(v11 + 36));
}
