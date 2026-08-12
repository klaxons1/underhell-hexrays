int __thiscall sub_1026AEF0(_DWORD *this, int a2)
{
  int (*v3)(void); // edx
  int result; // eax
  _DWORD *v5; // eax
  _DWORD *v6; // ebp
  int v7; // edi
  int v8; // ebx
  int v9; // eax
  int v10; // eax

  v3 = *(int (**)(void))(*this + 148);
  this[90] = 1;
  result = v3();
  if ( result )
  {
    v5 = (_DWORD *)sub_10229D00(32);
    if ( v5 )
      v6 = sub_10229D20(v5, (int)"KeyModeSet");
    else
      v6 = 0;
    v7 = dword_1047CA74;
    v8 = *(_DWORD *)dword_1047CA74;
    v9 = (*(int (__thiscall **)(_DWORD *, _DWORD))*this)(this, 0.0);
    v10 = (*(int (__thiscall **)(_DWORD *, _DWORD *, int))(*this + 148))(this, v6, v9);
    return (*(int (__thiscall **)(int, int))(v8 + 80))(v7, v10);
  }
  return result;
}
