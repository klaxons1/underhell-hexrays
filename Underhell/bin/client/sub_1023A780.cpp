int __userpurge sub_1023A780@<eax>(_WORD *a1@<ecx>, char a2, int a3, int a4)
{
  int v5; // ebx
  int v6; // ebp
  int (__thiscall **v7)(int, int); // edi
  int v8; // eax
  int (__thiscall **v9)(void *, int); // edi
  int (__thiscall **v10)(int, int); // ebx
  int v11; // eax
  int v12; // eax
  int v13; // eax
  _DWORD *v14; // ebx
  void (__thiscall **v15)(_DWORD *, int); // edi
  int v16; // eax
  int v17; // ebx
  int (__thiscall **v18)(int, int); // edi
  int v19; // eax
  void *retaddr; // [esp+10h] [ebp+0h]

  if ( a2 != ((a1[40] & 0x1000) != 0) )
  {
    if ( a2 )
      a1[40] |= 0x1000u;
    else
      a1[40] &= ~0x1000u;
    v5 = dword_1047CA70;
    v6 = 0;
    v7 = (int (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA70 + 68);
    v8 = (**(int (__thiscall ***)(_WORD *))a1)(a1);
    if ( (*v7)(v5, v8) > 0 )
    {
      do
      {
        v9 = (int (__thiscall **)(void *, int))(*(_DWORD *)dword_1047CA70 + 216);
        v10 = (int (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA70 + 72);
        v11 = sub_10278FB0();
        v12 = (**(int (__thiscall ***)(_WORD *, int, int))a1)(a1, v6, v11);
        v13 = (*v10)(a4, v12);
        v14 = (_DWORD *)(*v9)(retaddr, v13);
        v15 = (void (__thiscall **)(_DWORD *, int))(*v14 + 516);
        v16 = (*(int (__thiscall **)(_WORD *))(*(_DWORD *)a1 + 84))(a1);
        (*v15)(v14, v16);
        v17 = dword_1047CA70;
        ++v6;
        v18 = (int (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA70 + 68);
        v19 = (**(int (__thiscall ***)(_WORD *))a1)(a1);
      }
      while ( v6 < (*v18)(v17, v19) );
    }
  }
  return (*(int (__thiscall **)(_WORD *, _DWORD, _DWORD))(*(_DWORD *)a1 + 244))(a1, 0, 0);
}
