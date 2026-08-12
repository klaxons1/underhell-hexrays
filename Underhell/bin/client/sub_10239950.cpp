int __thiscall sub_10239950(int (__thiscall ***this)(_DWORD), char *String2, int a3)
{
  int v3; // edi
  int (__thiscall **v5)(int, int); // esi
  int v6; // eax
  int v7; // ebx
  int (__thiscall **v8)(int, int); // esi
  int (__thiscall **v9)(int, int); // edi
  int v10; // eax
  int v11; // eax
  int v12; // eax
  int v13; // eax
  int v14; // esi
  const char *v15; // eax
  int result; // eax
  int v17; // edi
  int (__thiscall **v18)(int, int); // esi
  int v19; // eax
  int v20; // [esp+14h] [ebp-8h]

  v3 = dword_1047CA70;
  v20 = 0;
  v5 = (int (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA70 + 68);
  v6 = (**this)(this);
  if ( (*v5)(v3, v6) > 0 )
  {
    do
    {
      v7 = dword_1047CA70;
      v8 = (int (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA70 + 216);
      v9 = (int (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA70 + 72);
      v10 = sub_10278FB0();
      v11 = ((int (__thiscall *)(int (__thiscall ***)(_DWORD), int, int))**this)(this, v20, v10);
      v12 = (*v9)(v7, v11);
      v13 = (*v8)(v7, v12);
      v14 = v13;
      if ( v13 )
      {
        v15 = (const char *)(*(int (__thiscall **)(int))(*(_DWORD *)v13 + 72))(v13);
        if ( !_stricmp(v15, String2) )
          return v14;
        if ( (_BYTE)a3 )
        {
          result = sub_10239950(String2, a3);
          if ( result )
            return result;
        }
      }
      v17 = dword_1047CA70;
      ++v20;
      v18 = (int (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA70 + 68);
      v19 = (**this)(this);
    }
    while ( v20 < (*v18)(v17, v19) );
  }
  return 0;
}
