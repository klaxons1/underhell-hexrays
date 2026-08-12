void *__thiscall sub_101DA690(int *this, int a2, int a3)
{
  int v4; // esi
  void *result; // eax

  v4 = *(_DWORD *)((*(int (__thiscall **)(int))(*(_DWORD *)a3 + 148))(a3) + 1380);
  sub_1012BC60(&dword_1069E3E0, v4);
  result = (void *)this[1];
  if ( result )
    return sub_101DA560((int)&unk_106BAEF0, v4, *(_DWORD *)(a2 + 8), *(void **)a2, this[1]);
  return result;
}
