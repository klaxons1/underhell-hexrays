void __userpurge sub_10239DD0(_WORD *a1@<ecx>, int a2, char a3, int a4, int a5)
{
  int v6; // ebp
  int v7; // ebx
  int (__thiscall **v8)(int, int); // edi
  int v9; // eax
  int (__thiscall **v10)(void *, int); // edi
  int (__thiscall **v11)(int, int); // ebp
  int v12; // eax
  int v13; // eax
  int v14; // eax
  int v15; // eax
  int v16; // ebp
  int (__thiscall **v17)(int, int); // edi
  int v18; // eax
  void *retaddr; // [esp+1Ch] [ebp+0h]

  a1[40] |= 0x80u;
  if ( a3 )
  {
    a1[40] |= 0x100u;
    v6 = dword_1047CA70;
    v7 = 0;
    v8 = (int (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA70 + 68);
    v9 = (**(int (__thiscall ***)(_WORD *))a1)(a1);
    if ( (*v8)(v6, v9) > 0 )
    {
      do
      {
        v10 = (int (__thiscall **)(void *, int))(*(_DWORD *)dword_1047CA70 + 216);
        v11 = (int (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA70 + 72);
        v12 = sub_10278FB0();
        v13 = (**(int (__thiscall ***)(_WORD *, int, int))a1)(a1, v7, v12);
        v14 = (*v11)(a5, v13);
        v15 = (*v10)(retaddr, v14);
        (*(void (__thiscall **)(int, int, int))(*(_DWORD *)v15 + 244))(v15, a2, 1);
        v16 = dword_1047CA70;
        ++v7;
        v17 = (int (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA70 + 68);
        v18 = (**(int (__thiscall ***)(_WORD *))a1)(a1);
      }
      while ( v7 < (*v17)(v16, v18) );
    }
    (*(void (__thiscall **)(_WORD *))(*(_DWORD *)a1 + 8))(a1);
  }
  if ( (_BYTE)a2 )
  {
    a1[40] |= 0x800u;
    a1[40] &= ~0x80u;
    (*(void (__thiscall **)(_WORD *))(*(_DWORD *)a1 + 508))(a1);
    a1[40] &= ~0x800u;
    (*(void (__thiscall **)(_WORD *))(*(_DWORD *)a1 + 16))(a1);
  }
}
