char __thiscall sub_1033D820(_DWORD *this)
{
  _DWORD *v2; // eax
  char result; // al
  _BYTE *v4; // esi
  int (__thiscall *v5)(_BYTE *); // edx
  char v6; // bl
  char v7; // cl

  v2 = (_DWORD *)sub_10043EC0(this);
  if ( v2 && *v2 == 154 )
    return 1;
  v4 = (_BYTE *)this[906];
  if ( !v4 )
    return sub_100424B0(this);
  v5 = *(int (__thiscall **)(_BYTE *))(*(_DWORD *)v4 + 140);
  v6 = v4[8];
  v4[8] = 1;
  result = v5(v4);
  v7 = v4[8];
  v4[8] = v6;
  if ( !v7 )
    return sub_100424B0(this);
  return result;
}
