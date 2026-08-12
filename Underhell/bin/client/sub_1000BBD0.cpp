int __thiscall sub_1000BBD0(_DWORD *this, int *a2, int a3, int a4)
{
  unsigned int v5; // eax
  _DWORD *v6; // ecx
  _DWORD *v7; // edi
  int result; // eax
  int v9; // ebx
  int v10; // edx
  int v11; // eax
  int v12; // edi
  int v13[3]; // [esp+1Ch] [ebp-Ch] BYREF

  v5 = this[490];
  if ( v5 == -1 )
    return sub_1000E1C0(a2, a3, a4);
  v6 = (_DWORD *)((char *)off_103DCD74 + 16 * (this[490] & 0xFFF) + 4);
  if ( v6[1] != v5 >> 12 )
    return sub_1000E1C0(a2, a3, a4);
  v7 = (_DWORD *)*v6;
  if ( !*v6 || !(*(unsigned __int8 (__thiscall **)(_DWORD))(*v7 + 512))(*v6) )
    return sub_1000E1C0(a2, a3, a4);
  v9 = (*(int (__thiscall **)(_DWORD *))(*this + 116))(this);
  v10 = a2[1];
  v11 = a2[2];
  v13[0] = *a2;
  v13[2] = v11;
  v13[1] = v10;
  v12 = (*(int (__thiscall **)(_DWORD *))(v7[2] + 36))(v7 + 2);
  if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)dword_10412D50 + 132))(dword_10412D50) )
    v12 = (*(int (__thiscall **)(_DWORD *))(this[2] + 36))(this + 2);
  result = (*(int (__thiscall **)(_DWORD *))(*this + 108))(this);
  if ( a4 == 1 || a4 == 4 )
    return sub_1012D0B0((int)v13, a3 + 12, v12, result, 0.0, 1, v9, 0);
  return result;
}
