void __thiscall sub_1004AF00(_DWORD *this)
{
  int v2; // esi
  int v3; // eax
  int v4; // edi
  int v5; // esi

  if ( (int)++this[4108] >= 200 )
  {
    v2 = this[3];
    if ( *(_BYTE *)(v2 + 188) )
    {
      v3 = sub_10016D90(*(_DWORD *)(v2 + 184), *(_DWORD *)(v2 + 420));
      sub_10016B00((_DWORD *)(v2 + 192), *(_DWORD *)(v2 + 184), v3);
    }
    (*(void (__thiscall **)(_DWORD, _DWORD, _DWORD, int))(**(_DWORD **)(v2 + 180) + 80))(
      *(_DWORD *)(v2 + 180),
      *(_DWORD *)(v2 + 420),
      *(_DWORD *)(v2 + 216),
      v2);
    *(_DWORD *)(v2 + 208) = 0;
    *(_DWORD *)(v2 + 212) = 0;
    *(_DWORD *)(v2 + 416) = 0;
    *(_DWORD *)(v2 + 408) = 0;
    *(_DWORD *)(v2 + 320) = -1;
    (*(void (__thiscall **)(_DWORD, int, _DWORD))(**(_DWORD **)(v2 + 180) + 48))(*(_DWORD *)(v2 + 180), -1, 0);
    *(_DWORD *)(v2 + 180) = 0;
    v4 = this[4];
    v5 = this[3];
    *(_DWORD *)(v5 + 180) = v4;
    *(_BYTE *)(v5 + 188) = 1;
    *(_DWORD *)(v5 + 184) = 7;
    (*(void (__thiscall **)(int, int))(*(_DWORD *)v4 + 40))(v4, 2);
    (*(void (__thiscall **)(_DWORD, int, int, int))(**(_DWORD **)(v5 + 180) + 68))(
      *(_DWORD *)(v5 + 180),
      3200,
      4800,
      v5);
    *(_DWORD *)(v5 + 208) = v4 + 4;
    *(_DWORD *)(v5 + 216) = 0;
    *(_DWORD *)(v5 + 212) = 4800;
    *(_BYTE *)(v5 + 240) = 0;
    *(_DWORD *)(v5 + 220) = *(_DWORD *)(v5 + 156);
    *(_DWORD *)(v5 + 192) = *(_DWORD *)(v5 + 164);
    *(_BYTE *)(v5 + 204) = *(_BYTE *)(v5 + 176);
    *(_DWORD *)(v5 + 224) = 0;
    sub_10016990(v5 + 244, v4, 3200, (_DWORD *)v5);
    *(_DWORD *)(v5 + 224) = 0;
    sub_10016A00((_DWORD *)(v5 + 244));
    this[4108] = 0;
  }
}
