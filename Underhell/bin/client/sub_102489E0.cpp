char __thiscall sub_102489E0(void *this, int a2)
{
  int (__thiscall ***v3)(_DWORD); // eax
  const char *v5; // [esp-4h] [ebp-Ch]

  v5 = sub_10230460(dword_1047CCCC, *(_WORD *)(a2 + 6));
  v3 = (int (__thiscall ***)(_DWORD))sub_10237C80((_DWORD *)(a2 + 16));
  return sub_10248910((int)this, v3, (int)v5);
}
