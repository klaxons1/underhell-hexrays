double __stdcall sub_1015DDD0(int a1, int a2, int a3)
{
  _DWORD *v3; // esi
  int v5; // [esp+0h] [ebp-4h]

  v3 = (_DWORD *)sub_102D9B20(v5);
  if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)a1 + 320))(a1) )
    return (double)sub_100BA130(v3, a3);
  else
    return (double)sub_100BA170(v3, a3);
}
