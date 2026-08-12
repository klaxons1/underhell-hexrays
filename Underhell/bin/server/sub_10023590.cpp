char __thiscall sub_10023590(_BYTE *this, _DWORD *a2)
{
  char result; // al
  unsigned int v4; // ecx
  int *v5; // eax
  unsigned int v6; // ecx
  _BYTE *v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // esi
  int v11; // eax
  int v12; // eax
  int v13; // eax

  if ( *(_DWORD *)(dword_10690EAC + 48) )
    return 0;
  if ( ((*(int (__thiscall **)(_BYTE *))(*(_DWORD *)this + 1672))(this) & 0x2000000) == 0 )
    goto LABEL_13;
  v4 = a2[11];
  if ( v4 == -1 )
    goto LABEL_13;
  v5 = &off_1061BE18[4 * (a2[11] & 0xFFF) + 1];
  v6 = v4 >> 12;
  if ( off_1061BE18[4 * (a2[11] & 0xFFF) + 2] != v6 || !*v5 )
    goto LABEL_13;
  v7 = off_1061BE18[4 * (a2[11] & 0xFFF) + 2] == v6 ? (_BYTE *)*v5 : 0;
  if ( v7 == this )
    goto LABEL_13;
  v8 = sub_1001E870(a2);
  v9 = (*(int (__thiscall **)(int))(*(_DWORD *)v8 + 288))(v8);
  v10 = v9;
  if ( v9 )
  {
    if ( (*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)v9 + 1080))(v9, this) != 3 )
    {
LABEL_13:
      result = sub_102DBEF0(a2);
      if ( result )
        return 1;
      this[2904] = 1;
      return result;
    }
  }
  else
  {
    v11 = sub_1001E870(a2);
    if ( !(*(int (__thiscall **)(int))(*(_DWORD *)v11 + 340))(v11) )
      goto LABEL_13;
  }
  this[2904] = 1;
  if ( v10 && (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v10 + 320))(v10) )
  {
    v12 = sub_1001E870(a2);
    sub_1010DD80(v12, (int)this, 0.0);
    v13 = sub_1001E870(a2);
    sub_1010DD80(v13, (int)this, 0.0);
  }
  return 0;
}
