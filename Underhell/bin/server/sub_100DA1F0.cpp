int __thiscall sub_100DA1F0(_DWORD *this)
{
  int v2; // edi
  int v3; // eax
  int v4; // eax
  bool v5; // bl
  unsigned int v6; // eax
  int *v7; // ecx
  int v8; // esi
  char v9; // al
  int v10; // edi

  v2 = *(_DWORD *)dword_106B31F0;
  v3 = (*(int (__thiscall **)(_DWORD *))(*this + 24))(this);
  v4 = (*(int (__thiscall **)(int, int))(v2 + 4))(dword_106B31F0, v3);
  v5 = v4 && (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_106B31F0 + 36))(dword_106B31F0, v4) == 1;
  v6 = this[75];
  if ( v6 == -1 )
    return v5 ? 0 : 2;
  v7 = &off_1061BE18[4 * (this[75] & 0xFFF) + 1];
  if ( off_1061BE18[4 * (this[75] & 0xFFF) + 2] != v6 >> 12 )
    return v5 ? 0 : 2;
  v8 = *v7;
  if ( !*v7 )
    return v5 ? 0 : 2;
  v9 = (*(int (__thiscall **)(int))(*(_DWORD *)v8 + 144))(*v7);
  if ( v5 )
    v10 = v9 & 0xF0;
  else
    v10 = v9 & 0xF2;
  if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v8 + 320))(v8) )
    return v10 | 2;
  return v10;
}
