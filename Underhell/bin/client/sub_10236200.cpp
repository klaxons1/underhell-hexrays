int __thiscall sub_10236200(int (__thiscall ***this)(void *, int, int), int a2, int a3, int a4, int a5)
{
  int v5; // edi
  int v6; // ebx
  int v8; // eax
  int v9; // edi
  int v10; // ebx
  int v11; // eax

  v5 = dword_1047CA70;
  v6 = *(_DWORD *)dword_1047CA70;
  v8 = (**this)(this, a2, a3);
  (*(void (__thiscall **)(int, int))(v6 + 8))(v5, v8);
  v9 = dword_1047CA70;
  v10 = *(_DWORD *)dword_1047CA70;
  v11 = (**this)(this, a4, a5);
  return (*(int (__thiscall **)(int, int))(v10 + 16))(v9, v11);
}
