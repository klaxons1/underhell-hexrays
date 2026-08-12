int __thiscall sub_10237A40(void *this)
{
  int v2; // ebx
  int v3; // ebp
  int (__thiscall **v4)(int, int); // edi
  int v5; // eax
  int result; // eax
  int (__thiscall **v7)(void *, int); // edi
  int (__thiscall **v8)(void *, int); // ebx
  int v9; // eax
  int v10; // eax
  int v11; // eax
  int v12; // eax
  int v13; // ebx
  int (__thiscall **v14)(int, int); // edi
  int v15; // eax
  void *retaddr; // [esp+18h] [ebp+0h]

  (*(void (__thiscall **)(void *))(*(_DWORD *)this + 140))(this);
  v2 = dword_1047CA70;
  v3 = 0;
  v4 = (int (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA70 + 68);
  v5 = (**(int (__thiscall ***)(void *))this)(this);
  result = (*v4)(v2, v5);
  if ( result > 0 )
  {
    do
    {
      v7 = (int (__thiscall **)(void *, int))(*(_DWORD *)dword_1047CA70 + 216);
      v8 = (int (__thiscall **)(void *, int))(*(_DWORD *)dword_1047CA70 + 72);
      v9 = sub_10278FB0();
      v10 = (**(int (__thiscall ***)(void *, int, int))this)(this, v3, v9);
      v11 = (*v8)(retaddr, v10);
      v12 = (*v7)(retaddr, v11);
      (*(void (__thiscall **)(int))(*(_DWORD *)v12 + 140))(v12);
      v13 = dword_1047CA70;
      ++v3;
      v14 = (int (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA70 + 68);
      v15 = (**(int (__thiscall ***)(void *))this)(this);
      result = (*v14)(v13, v15);
    }
    while ( v3 < result );
  }
  return result;
}
