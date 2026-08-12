int __thiscall sub_10236790(void *this, char *String2)
{
  int v2; // edi
  int (__thiscall **v4)(int, int); // esi
  int v5; // eax
  int v6; // edi
  int (__thiscall **v7)(int, int); // esi
  int v8; // eax
  int v9; // eax
  int v10; // edi
  int v11; // ebp
  int (__thiscall **v12)(int, int, int); // esi
  int v13; // eax
  int v14; // esi
  const char *v15; // eax
  int v17; // [esp+14h] [ebp-8h]
  int v18; // [esp+18h] [ebp-4h]

  v2 = dword_1047CA70;
  v4 = (int (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA70 + 68);
  v5 = (*(int (__thiscall **)(void *))(*(_DWORD *)this + 148))(this);
  v18 = (*v4)(v2, v5);
  v17 = 0;
  if ( v18 <= 0 )
    return 0;
  while ( 1 )
  {
    v6 = dword_1047CA70;
    v7 = (int (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA70 + 72);
    v8 = (*(int (__thiscall **)(void *, int))(*(_DWORD *)this + 148))(this, v17);
    v9 = (*v7)(v6, v8);
    v10 = dword_1047CA70;
    v11 = v9;
    v12 = (int (__thiscall **)(int, int, int))(*(_DWORD *)dword_1047CA70 + 216);
    v13 = sub_10278FB0();
    v14 = (*v12)(v10, v11, v13);
    v15 = (const char *)(*(int (__thiscall **)(int))(*(_DWORD *)v14 + 72))(v14);
    if ( !_stricmp(v15, String2) )
      break;
    if ( ++v17 >= v18 )
      return 0;
  }
  return v14;
}
