int __thiscall sub_100F8770(_DWORD *this, int *a2)
{
  unsigned int v2; // eax
  int *v3; // ecx
  _DWORD *v4; // esi
  _DWORD *v5; // ebx
  int result; // eax
  int v7; // eax
  int v8; // eax
  _BYTE *v9; // esi
  bool v10; // zf

  v2 = this[286];
  if ( v2 != -1
    && (v3 = &off_1061BE18[4 * (this[286] & 0xFFF) + 1], v3[1] == v2 >> 12)
    && (v4 = (_DWORD *)*v3) != 0
    && (*(unsigned __int8 (__thiscall **)(int))(*v4 + 320))(*v3) )
  {
    v5 = v4;
    if ( v4[6] == *a2 )
      return 8;
  }
  else
  {
    v5 = 0;
  }
  v7 = *a2;
  if ( (*a2 || (v7 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106B31D0 + 76))(dword_106B31D0, 0)) != 0)
    && (v8 = *(_DWORD *)(v7 + 12)) != 0 )
  {
    v9 = (_BYTE *)(*(int (__thiscall **)(int))(*(_DWORD *)v8 + 20))(v8);
  }
  else
  {
    v9 = 0;
  }
  if ( !(*(unsigned __int8 (__thiscall **)(_BYTE *))(*(_DWORD *)v9 + 320))(v9) )
    return 16;
  if ( v9[3280] )
    return 32;
  if ( (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)v9 + 1332))(v9) != 4 )
    return 16;
  v10 = (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)v9 + 1344))(v9) == (_DWORD)v5;
  result = 8;
  if ( !v10 )
    return 16;
  return result;
}
