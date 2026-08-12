int __usercall sub_10092C60@<eax>(int a1@<ecx>, double a2@<st0>)
{
  int v2; // esi
  int v3; // edi
  int v4; // eax

  v2 = *(_DWORD *)(a1 + 3624);
  *(_BYTE *)(a1 + 3648) = 1;
  if ( !v2 )
    return sub_10045660(a1, a2);
  v3 = (*(int (__thiscall **)(int))(*(_DWORD *)v2 + 100))(v2);
  if ( !(*(unsigned __int8 (__thiscall **)(int, int))(*(_DWORD *)v2 + 272))(v2, v3) )
    return v3;
  v4 = (*(int (__thiscall **)(int))(*(_DWORD *)v2 + 52))(v2);
  return sub_1007DB30((_DWORD *)(v4 + 4), v3);
}
