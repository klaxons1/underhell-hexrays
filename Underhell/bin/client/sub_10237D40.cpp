int __userpurge sub_10237D40@<eax>(int a1@<ecx>, int a2@<ebp>, int a3, int a4)
{
  int v4; // ebx
  void (__thiscall **v6)(int, int); // edi
  int v7; // eax
  int v8; // ebx
  int (__thiscall **v9)(int, int); // edi
  int v10; // eax
  int result; // eax
  int v12; // ebx
  int (__thiscall **v13)(int, int); // edi
  int (__thiscall **v14)(int, int); // ebp
  int v15; // eax
  int v16; // eax
  int v17; // eax
  int v18; // eax
  int v19; // ebx
  int (__thiscall **v20)(int); // edi
  int v21; // edi
  int v22; // ebx
  int v24; // [esp+24h] [ebp-4h]

  v4 = dword_1047CA70;
  v6 = (void (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA70 + 120);
  v7 = (**(int (__thiscall ***)(int, int))a1)(a1, a3);
  (*v6)(v4, v7);
  v8 = dword_1047CA70;
  v9 = (int (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA70 + 68);
  v10 = (**(int (__thiscall ***)(int))a1)(a1);
  result = (*v9)(v8, v10);
  if ( result > 0 )
  {
    do
    {
      v12 = dword_1047CA70;
      v13 = (int (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA70 + 216);
      v14 = (int (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA70 + 72);
      v15 = sub_10278FB0();
      v16 = (**(int (__thiscall ***)(int, _DWORD, int, int))a1)(a1, 0, v15, a2);
      v17 = (*v14)(v12, v16);
      v18 = (*v13)(v12, v17);
      if ( v18 )
        (*(void (__thiscall **)(int, int))(*(_DWORD *)v18 + 524))(v18, a4);
      v19 = dword_1047CA70;
      ++v24;
      v20 = (int (__thiscall **)(int))(*(_DWORD *)dword_1047CA70 + 68);
      a2 = (**(int (__thiscall ***)(int))a1)(a1);
      result = (*v20)(v19);
    }
    while ( v24 < result );
  }
  if ( !(_BYTE)a3 )
  {
    result = (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 144))(a1);
    v21 = result;
    if ( result )
    {
      v22 = (*(int (__thiscall **)(int))(*(_DWORD *)result + 64))(result);
      result = (**(int (__thiscall ***)(int))a1)(a1);
      if ( v22 == result )
        return (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)v21 + 56))(v21, 0);
    }
  }
  return result;
}
