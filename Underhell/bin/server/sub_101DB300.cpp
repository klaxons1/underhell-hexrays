int __cdecl sub_101DB300(int a1, int a2, int a3, int a4, int a5, char a6, int *a7)
{
  int *v7; // esi
  int v8; // eax
  int v9; // edx
  int v10; // eax
  int v11; // esi
  int v13; // [esp+8h] [ebp-63Ch] BYREF
  int v14; // [esp+Ch] [ebp-638h]
  _DWORD *v15; // [esp+10h] [ebp-634h]
  char Destination[524]; // [esp+40Ch] [ebp-238h] BYREF
  float v17[11]; // [esp+618h] [ebp-2Ch] BYREF

  v7 = a7;
  if ( !a7 )
  {
    qmemcpy(v17, &unk_105046B8, sizeof(v17));
    v17[1] = 85.0;
    v17[2] = 1.0e24;
    sub_104299C0(Destination, "default", 0x200u);
    v7 = &v13;
  }
  v8 = (*(int (__thiscall **)(int, int *))(*(_DWORD *)dword_106BAFF8 + 12))(dword_106BAFF8, v7 + 257);
  v7[395] = a1;
  v7[394] = a5;
  v9 = *(_DWORD *)dword_106BAFF4;
  v15 = v7 + 388;
  v14 = a4;
  v13 = a3;
  if ( a6 )
    v10 = (*(int (__cdecl **)(int, int, int, int, _DWORD *))(v9 + 32))(a2, v8, v13, v14, v15);
  else
    v10 = (*(int (__cdecl **)(int, int, int, int, _DWORD *))(v9 + 28))(a2, v8, v13, v14, v15);
  v11 = v10;
  if ( v10 )
    (*(void (__thiscall **)(void *, int, int))(*(_DWORD *)off_1063AC88 + 4))(off_1063AC88, v10, a2);
  return v11;
}
