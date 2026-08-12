int __usercall sub_10329280@<eax>(int a1@<ecx>, double a2@<st0>)
{
  int result; // eax
  int v4; // ecx
  int v5; // eax
  int v6; // ecx
  int v7; // eax

  if ( *(int *)(a1 + 220) <= 0 )
  {
    result = 91;
    *(float *)(a1 + 108) = 2500.0;
    return result;
  }
  if ( *(_DWORD *)(a1 + 2324) == 4 )
    return sub_10045660(a1, a2);
  if ( !sub_10023D10((_DWORD *)a1, 17) && !sub_10023D10((_DWORD *)a1, 18) )
    goto LABEL_16;
  v4 = *(_DWORD *)(a1 + 424);
  if ( v4 && ((*(int (__thiscall **)(int))(*(_DWORD *)v4 + 76))(v4) & 4) != 0 )
    return 22;
  v5 = *(_DWORD *)(a1 + 2324);
  if ( v5 == 1 )
    return 22;
  if ( v5 != 2 )
  {
    if ( (*(int (__thiscall **)(int, _DWORD, int))(*(_DWORD *)dword_106B31E4 + 8))(dword_106B31E4, 0, 10) >= 4 )
      goto LABEL_16;
    return 22;
  }
  if ( *(_DWORD *)(a1 + 220) < 3 * *(_DWORD *)(a1 + 216) / 4 )
    return 30;
  if ( sub_100BDCE0(a1, 62) != -1 )
    return 22;
LABEL_16:
  v6 = *(_DWORD *)(a1 + 424);
  if ( v6 && ((*(int (__thiscall **)(int))(*(_DWORD *)v6 + 76))(v6) & 4) != 0 )
    return 95;
  if ( !(*(int (__thiscall **)(int))(*(_DWORD *)a1 + 368))(a1) )
    return 88;
  v7 = (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 368))(a1);
  if ( !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v7 + 264))(v7) || sub_10023D10((_DWORD *)a1, 11) )
    return 88;
  if ( sub_10023D10((_DWORD *)a1, 74) )
    return 92;
  if ( *(float *)(a1 + 1672) <= (double)*(float *)(dword_106B31C8 + 12) && sub_10023D10((_DWORD *)a1, 23) )
    return 89;
  return 90;
}
