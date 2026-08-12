char *__thiscall sub_10111670(void *this)
{
  char *v2; // esi
  bool v3; // zf
  char v4; // al
  int v5; // edi
  int v7; // eax

  if ( (dword_1069B46C & 1) == 0 )
    dword_1069B46C |= 1u;
  v2 = (char *)&unk_1069B3A8 + 48 * dword_1069B468;
  v3 = (*((_BYTE *)this + 36) & 0x40) == 0;
  dword_1069B468 = ((_BYTE)dword_1069B468 + 1) & 3;
  if ( v3 && (v4 = *((_BYTE *)this + 41), v4 != 2) && v4 )
  {
    v5 = *((_DWORD *)this + 1);
    if ( (*(_DWORD *)(v5 + 252) & 0x800) != 0 )
      sub_100DAE60(v5);
    return (char *)(v5 + 500);
  }
  else
  {
    sub_10422700(v2);
    v7 = (*(int (__thiscall **)(void *))(*(_DWORD *)this + 32))(this);
    sub_10421D00(v7, 3, v2);
    return v2;
  }
}
