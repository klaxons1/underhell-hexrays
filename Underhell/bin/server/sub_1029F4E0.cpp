char __thiscall sub_1029F4E0(_DWORD *this, int a2)
{
  unsigned int v3; // eax
  int *v4; // ecx
  int v5; // ecx
  _DWORD *v6; // eax
  int (__thiscall *v7)(_DWORD *, _BYTE *); // edx
  _DWORD *v8; // ebx
  int v9; // edi
  _DWORD *v10; // eax
  unsigned int v11; // eax
  int v12; // eax
  int (__thiscall *v13)(_DWORD *, _BYTE *); // edx
  int v14; // edi
  int v15; // ebx
  _DWORD *v16; // eax
  _BYTE v18[4]; // [esp+Ch] [ebp-8h] BYREF
  int v19; // [esp+10h] [ebp-4h]
  int v20; // [esp+1Ch] [ebp+8h]

  v3 = this[17];
  if ( v3 == -1 || (v4 = &off_1061BE18[4 * (this[17] & 0xFFF) + 1], v4[1] != v3 >> 12) )
    v5 = 0;
  else
    v5 = *v4;
  v6 = (_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)v5 + 340))(v5);
  v7 = *(int (__thiscall **)(_DWORD *, _BYTE *))(*this + 292);
  v8 = v6;
  v9 = *v6;
  v19 = this[1];
  v10 = (_DWORD *)v7(this, v18);
  v20 = (*(int (__thiscall **)(_DWORD *, int, _DWORD, int))(v9 + 108))(v8, v19, *v10, a2);
  if ( v20 == -1 )
    return 0;
  v11 = this[17];
  if ( v11 == -1 || off_1061BE18[4 * (this[17] & 0xFFF) + 2] != v11 >> 12 )
    v12 = 0;
  else
    v12 = off_1061BE18[4 * (this[17] & 0xFFF) + 1];
  v13 = *(int (__thiscall **)(_DWORD *, _BYTE *))(*this + 292);
  v14 = *(_DWORD *)(v12 + 1488);
  v15 = v12 + 1488;
  v19 = this[1];
  v16 = (_DWORD *)v13(this, v18);
  return (*(int (__thiscall **)(int, int, _DWORD, int))(v14 + 8))(v15, v19, *v16, v20);
}
