void __thiscall sub_102447B0(void *this, unsigned __int16 *a2)
{
  char *v3; // eax
  int v4; // ebx
  _DWORD *v5; // esi
  const char *v6; // eax
  _DWORD *v7; // esi
  char *v8; // eax
  const char *v9; // [esp-4h] [ebp-10h]

  v3 = (char *)sub_10230460(dword_1047CCCC, a2[3]);
  v4 = sub_10236790(this, v3);
  if ( v4 )
  {
    v5 = (_DWORD *)sub_10229D00(32);
    if ( v5 )
    {
      v6 = sub_10230460(dword_1047CCCC, a2[4]);
      v7 = sub_10229D20(v5, (int)v6);
    }
    else
    {
      v7 = 0;
    }
    v9 = sub_10230460(dword_1047CCCC, a2[5]);
    v8 = (char *)sub_10230460(dword_1047CCCC, a2[4]);
    sub_1022ABA0(v7, v8, v9);
    (*(void (__thiscall **)(int, _DWORD *))(*(_DWORD *)v4 + 192))(v4, v7);
    sub_1022AF00(v7);
  }
}
