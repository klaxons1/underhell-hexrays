void __cdecl sub_1024C140(int a1)
{
  int v1; // ecx
  int v2; // esi
  int v3; // ebx
  void (__thiscall **v4)(int, int); // edi
  int v5; // eax
  int v6; // eax
  int v7; // ebx
  int v8; // ebp
  int (__thiscall **v9)(int, int); // edi
  int v10; // eax
  void (__thiscall **v11)(int, int); // edi
  int (__thiscall **v12)(int, int); // ebx
  int v13; // eax
  int v14; // eax
  int v15; // eax
  int v16; // ebx
  int (__thiscall **v17)(int, int); // edi
  int v18; // eax

  v2 = v1;
  if ( *(_DWORD *)(v1 + 240) )
  {
    v3 = dword_1047CA70;
    v4 = (void (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA70 + 148);
    v5 = (**(int (__thiscall ***)(int))v1)(v1);
    v6 = (**(int (__thiscall ***)(int, _DWORD, int))v2)(v2, *(_DWORD *)(v2 + 240), v5);
    (*v4)(v3, v6);
    v7 = dword_1047CA70;
    v8 = 0;
    v9 = (int (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA70 + 68);
    v10 = (**(int (__thiscall ***)(int))v2)(v2);
    if ( (*v9)(v7, v10) > 0 )
    {
      do
      {
        v11 = (void (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA70 + 148);
        v12 = (int (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA70 + 72);
        v13 = (**(int (__thiscall ***)(int))v2)(v2);
        v14 = (**(int (__thiscall ***)(int, int, _DWORD, int))v2)(v2, v8, *(_DWORD *)(v2 + 240), v13);
        v15 = (*v12)(a1, v14);
        (*v11)(a1, v15);
        v16 = dword_1047CA70;
        ++v8;
        v17 = (int (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA70 + 68);
        v18 = (**(int (__thiscall ***)(int))v2)(v2);
      }
      while ( v8 < (*v17)(v16, v18) );
    }
  }
}
