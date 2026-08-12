void __thiscall sub_1034B170(int this, int a2)
{
  unsigned int v3; // eax
  int *v4; // ecx
  unsigned int v5; // eax
  int v6; // ecx
  float v7; // edx
  unsigned int v8; // eax
  int v9; // ecx
  unsigned int v10; // eax
  int v11; // ecx
  unsigned int v12; // eax
  int v13; // ecx
  unsigned int v14; // eax
  int v15; // ecx
  const char *v16; // esi
  float v17[2]; // [esp+4h] [ebp-Ch] BYREF
  float v18; // [esp+Ch] [ebp-4h]

  v3 = *(_DWORD *)(this + 4016);
  if ( v3 != -1
    && (v4 = &off_1061BE18[4 * (*(_DWORD *)(this + 4016) & 0xFFF) + 1], v5 = v3 >> 12, v4[1] == v5)
    && *v4
    && (v4[1] != v5 ? (v6 = 0) : (v6 = *v4),
        *(char **)(v6 + 92) == "npc_strider" || sub_100D6240((_DWORD *)v6, "npc_strider")) )
  {
    if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
      sub_100DAE60(this);
    v7 = *(float *)(this + 708);
    v18 = *(float *)(this + 712);
    v8 = *(_DWORD *)(this + 4016);
    v17[0] = 0.0;
    v18 = 0.0;
    v17[1] = v7;
    if ( v8 == -1 || off_1061BE18[4 * (v8 & 0xFFF) + 2] != v8 >> 12 )
      v9 = 0;
    else
      v9 = off_1061BE18[4 * (v8 & 0xFFF) + 1];
    (*(void (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)v9 + 140))(v9, 0, 0);
    v10 = *(_DWORD *)(this + 4016);
    if ( v10 == -1 || off_1061BE18[4 * (*(_DWORD *)(this + 4016) & 0xFFF) + 2] != v10 >> 12 )
      v11 = 0;
    else
      v11 = off_1061BE18[4 * (*(_DWORD *)(this + 4016) & 0xFFF) + 1];
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v11 + 76))(v11, 0);
    v12 = *(_DWORD *)(this + 4016);
    if ( v12 == -1 || off_1061BE18[4 * (*(_DWORD *)(this + 4016) & 0xFFF) + 2] != v12 >> 12 )
      v13 = 0;
    else
      v13 = off_1061BE18[4 * (*(_DWORD *)(this + 4016) & 0xFFF) + 1];
    sub_100E0EA0(v13, v17);
    v14 = *(_DWORD *)(this + 4016);
    if ( v14 == -1 || off_1061BE18[4 * (*(_DWORD *)(this + 4016) & 0xFFF) + 2] != v14 >> 12 )
      v15 = 0;
    else
      v15 = off_1061BE18[4 * (*(_DWORD *)(this + 4016) & 0xFFF) + 1];
    sub_100DD660(v15, &flt_106F1CA8);
    *(_DWORD *)(this + 4016) = -1;
  }
  else
  {
    v16 = *(const char **)(this + 260);
    if ( !v16 )
      v16 = String;
    Warning("npc_combinedropship %s was told to drop Strider, but isn't carrying one!\n", v16);
  }
}
