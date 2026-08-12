double __stdcall sub_100ADD50(int a1, int a2, int a3)
{
  _DWORD *v3; // esi

  v3 = (_DWORD *)sub_101AB1E0();
  if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)a1 + 504))(a1) )
    return (double)sub_10008270(v3, a3);
  else
    return (double)sub_100082B0(v3, a3);
}
