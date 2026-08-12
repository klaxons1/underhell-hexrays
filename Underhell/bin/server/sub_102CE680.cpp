void __usercall sub_102CE680(int a1@<ecx>, int a2@<ebx>, int a3@<edi>)
{
  int v4; // eax
  int v5; // eax

  sub_102CD410((unsigned __int16 *)a1, a2, a3);
  sub_100EAB80((_DWORD *)a1, 32);
  v4 = *(_DWORD *)(a1 + 252) >> 11;
  *(_DWORD *)(a1 + 1404) = 0;
  *(_BYTE *)(a1 + 1412) = 0;
  if ( (v4 & 1) != 0 )
    sub_100DAE60(a1);
  v5 = sub_104092F0(a1 + 580, a1, 0);
  if ( v5 )
    *(_DWORD *)(a1 + 1396) = *(_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)v5 + 8))(v5);
  else
    *(_DWORD *)(a1 + 1396) = -1;
  *(_DWORD *)(a1 + 916) = *(_DWORD *)(a1 + 1408);
  sub_10112C00(a1 + 320, 0);
  sub_100DD790((float *)a1, &flt_106F1CA8);
}
