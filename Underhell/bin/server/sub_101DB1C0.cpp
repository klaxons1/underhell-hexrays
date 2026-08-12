int __usercall sub_101DB1C0@<eax>(int a1@<ebx>, int a2@<esi>, int a3, int a4, int a5, int a6)
{
  _WORD *v6; // eax
  _WORD *v7; // edi
  int v9; // ebx
  int (__thiscall *v10)(int, _BYTE *, int, int); // edx
  int v11; // esi
  int v12; // edi
  int v13; // eax
  int v14; // edi
  _DWORD v16[257]; // [esp+4h] [ebp-640h] BYREF
  _BYTE v17[524]; // [esp+408h] [ebp-23Ch] BYREF
  _BYTE v18[24]; // [esp+614h] [ebp-30h] BYREF
  const char *v19; // [esp+62Ch] [ebp-18h]
  int v20; // [esp+630h] [ebp-14h]
  char v21; // [esp+63Ch] [ebp-8h]
  _BYTE v22[4]; // [esp+640h] [ebp-4h] BYREF

  v6 = (_WORD *)(*(int (__thiscall **)(int, int))(*(_DWORD *)dword_106B31F0 + 16))(dword_106B31F0, a4);
  v7 = v6;
  if ( !v6 || (*v6 & 0x7FFF) == 0 )
    return 0;
  if ( !sub_101DAF50(v16, a3, (int)v6, -1) )
    return 0;
  v9 = -1;
  v21 = 1;
  if ( v17[0] )
    v9 = (*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)dword_106BAFF8 + 12))(dword_106BAFF8, v17);
  v10 = *(int (__thiscall **)(int, _BYTE *, int, int))(*(_DWORD *)a3 + 28);
  v20 = a3;
  v19 = *(const char **)v10(a3, v22, a1, a2);
  if ( !v19 )
    v19 = String;
  v11 = (*(int (__thiscall **)(int, _DWORD, int, int))(*(_DWORD *)dword_106BAFF4 + 32))(
          dword_106BAFF4,
          **((_DWORD **)v7 + 1),
          v9,
          a5);
  if ( v11 )
  {
    v12 = *(_DWORD *)dword_106B31F0;
    v13 = (*(int (__thiscall **)(int, int, int, _BYTE *))(*(_DWORD *)dword_106B31F0 + 4))(dword_106B31F0, a4, a6, v18);
    if ( (*(int (__thiscall **)(int, int))(v12 + 36))(dword_106B31F0, v13) == 1 )
    {
      v14 = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_106B31F0 + 108))(dword_106B31F0, a4);
      if ( v14 != (*(int (__thiscall **)(int))(*(_DWORD *)v11 + 160))(v11) )
      {
        if ( v14 )
        {
          (*(void (__thiscall **)(int, int))(*(_DWORD *)v11 + 164))(v11, v14);
          (*(void (__thiscall **)(int))(*(_DWORD *)v11 + 104))(v11);
        }
      }
    }
    (*(void (__thiscall **)(void *, int, int))(*(_DWORD *)off_1063AC88 + 8))(off_1063AC88, v11, a4);
  }
  return v11;
}
