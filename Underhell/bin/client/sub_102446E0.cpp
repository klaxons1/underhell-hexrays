void __thiscall sub_102446E0(void *this, int a2)
{
  int (__thiscall ***v3)(_DWORD); // esi
  char *v4; // eax
  int v5; // ebx
  _DWORD *v6; // esi
  const char *v7; // eax
  _DWORD *v8; // esi
  char *v9; // eax
  const char *v10; // [esp-4h] [ebp-10h]

  v3 = (int (__thiscall ***)(_DWORD))sub_10237C80((_DWORD *)(a2 + 16));
  if ( !v3 )
    v3 = (int (__thiscall ***)(_DWORD))(*(int (__thiscall **)(void *))(*(_DWORD *)this + 144))(this);
  v4 = (char *)sub_10230460(dword_1047CCCC, *(_WORD *)(a2 + 6));
  v5 = sub_10239950(v3, v4, 1);
  if ( v5 )
  {
    v6 = (_DWORD *)sub_10229D00(32);
    if ( v6 )
    {
      v7 = sub_10230460(dword_1047CCCC, *(_WORD *)(a2 + 8));
      v8 = sub_10229D20(v6, (int)v7);
    }
    else
    {
      v8 = 0;
    }
    v10 = sub_10230460(dword_1047CCCC, *(_WORD *)(a2 + 10));
    v9 = (char *)sub_10230460(dword_1047CCCC, *(_WORD *)(a2 + 8));
    sub_1022ABA0(v8, v9, v10);
    (*(void (__thiscall **)(int, _DWORD *))(*(_DWORD *)v5 + 192))(v5, v8);
    sub_1022AF00(v8);
  }
}
