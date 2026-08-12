char __thiscall sub_10255E30(_DWORD *this, int a2)
{
  int v3; // eax
  int v5; // eax
  int v6; // eax
  int v7; // eax
  int v8; // edi
  char v10; // al
  int v11; // eax
  unsigned int v12; // eax
  _BYTE *v13; // ecx
  char v14; // [esp+17h] [ebp+Bh]

  v3 = this[62];
  if ( (v3 & 0x40) != 0 || (v3 & 1) != 0 && *(char *)(a2 + 256) < 0 )
    goto LABEL_15;
  if ( (v3 & 2) == 0 || (*(_DWORD *)(a2 + 256) & 0x2000) == 0 )
  {
    if ( (v3 & 4) == 0 || *(const char **)(a2 + 92) != "func_pushable" && !sub_100D6240((_DWORD *)a2, "func_pushable") )
    {
      v5 = this[62];
      if ( (v5 & 8) == 0 || *(_BYTE *)(a2 + 306) != 6 )
      {
        if ( (v5 & 0x400) == 0 )
          return 0;
        v6 = *(_DWORD *)(a2 + 420);
        if ( v6 != 1 && v6 != 2 && v6 != 3 )
          return 0;
      }
    }
LABEL_15:
    if ( (*(_DWORD *)(a2 + 256) & 0x2000) == 0 )
      goto LABEL_23;
  }
  v7 = sub_100D7680(a2);
  v8 = v7;
  if ( (this[62] & 0x10) != 0
    && (!v7 || !(*(unsigned __int8 (__thiscall **)(int, _DWORD))(*(_DWORD *)v7 + 1528))(v7, 0))
    || (this[62] & 0x800) != 0 && (!v8 || !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v8 + 1088))(v8)) )
  {
    return 0;
  }
LABEL_23:
  v10 = (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 320))(a2);
  v14 = v10;
  if ( (this[62] & 0x20) != 0 && v10 )
  {
    if ( !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)a2 + 1088))(a2) )
      return 0;
    v11 = (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 1092))(a2);
    if ( !v11 || (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v11 + 60))(v11) )
      return 0;
    v10 = v14;
  }
  if ( (this[62] & 0x200) != 0 && v10 && (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)a2 + 1088))(a2) )
    return 0;
  v12 = this[231];
  if ( v12 != -1
    && off_1061BE18[4 * (this[231] & 0xFFF) + 2] == v12 >> 12
    && (v13 = (_BYTE *)off_1061BE18[4 * (this[231] & 0xFFF) + 1]) != 0 )
  {
    return sub_1013D760(v13, (int)this, a2);
  }
  else
  {
    return 1;
  }
}
