void __thiscall sub_101DA330(int *this, int a2, int a3)
{
  _DWORD *v4; // esi

  v4 = *(_DWORD **)((*(int (__thiscall **)(int))(*(_DWORD *)a3 + 188))(a3) + 1380);
  sub_1012BC60(&dword_1069E3E0, (int)v4);
  if ( this[1] )
    sub_101DA1C0(&unk_106BAEF0, v4, *(_DWORD *)(a2 + 8), *(int **)a2, this[1]);
}
