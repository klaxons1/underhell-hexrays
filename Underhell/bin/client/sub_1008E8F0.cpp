char *__thiscall sub_1008E8F0(void *this)
{
  char *v2; // esi
  bool v3; // zf
  char v4; // al
  int v5; // edi
  int v7; // eax

  if ( (dword_1042C804 & 1) == 0 )
    dword_1042C804 |= 1u;
  v2 = (char *)&unk_1042C740 + 48 * dword_1042C800;
  v3 = (*((_BYTE *)this + 36) & 0x40) == 0;
  dword_1042C800 = ((_BYTE)dword_1042C800 + 1) & 3;
  if ( v3 && (v4 = *((_BYTE *)this + 41), v4 != 2) && v4 )
  {
    v5 = *((_DWORD *)this + 1);
    sub_10037F50(v5);
    return (char *)(v5 + 660);
  }
  else
  {
    sub_101EE350(v2);
    v7 = (*(int (__thiscall **)(void *))(*(_DWORD *)this + 32))(this);
    sub_101EDA20(v7, 3, v2);
    return v2;
  }
}
