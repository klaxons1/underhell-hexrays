char __thiscall sub_10255520(_DWORD *this, int a2)
{
  int v4; // eax
  char v5; // al
  char v6; // bl
  int v7; // eax
  unsigned int v8; // eax
  _BYTE *v9; // ecx

  if ( *(_BYTE *)(a2 + 306) != 6 && !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)a2 + 320))(a2) )
    return 0;
  v4 = this[62];
  if ( (v4 & 0x40) == 0
    && ((v4 & 1) == 0 || *(char *)(a2 + 256) >= 0)
    && ((v4 & 2) == 0 || (*(_DWORD *)(a2 + 256) & 0x2000) == 0)
    && ((v4 & 4) == 0 || *(const char **)(a2 + 92) != "func_pushable" && !sub_100D6240((_DWORD *)a2, "func_pushable"))
    && ((this[62] & 8) == 0 || *(_BYTE *)(a2 + 306) != 6) )
  {
    return 0;
  }
  v5 = (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 320))(a2);
  v6 = v5;
  if ( (this[62] & 0x10) != 0 && !v5 )
  {
    v7 = sub_100D7680(a2);
    if ( !v7 || !(*(unsigned __int8 (__thiscall **)(int, _DWORD))(*(_DWORD *)v7 + 1528))(v7, 0) )
      return 0;
  }
  if ( (this[62] & 0x20) != 0 && v6 && !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)a2 + 1088))(a2)
    || (this[62] & 0x200) != 0 && v6 && (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)a2 + 1088))(a2) )
  {
    return 0;
  }
  v8 = this[202];
  if ( v8 != -1
    && off_1061BE18[4 * (this[202] & 0xFFF) + 2] == v8 >> 12
    && (v9 = (_BYTE *)off_1061BE18[4 * (this[202] & 0xFFF) + 1]) != 0 )
  {
    return sub_1013D760(v9, (int)this, a2);
  }
  else
  {
    return 1;
  }
}
