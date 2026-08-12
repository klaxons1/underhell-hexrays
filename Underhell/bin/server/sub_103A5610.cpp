int __usercall sub_103A5610@<eax>(int a1@<ecx>, double a2@<st0>)
{
  int v3; // ecx
  int result; // eax
  int v5; // eax
  int v6; // eax
  int v7; // eax
  float *v8; // edi
  float *v9; // eax
  double v10; // st7
  _DWORD *v11; // ecx
  int v12; // eax
  int v13; // eax
  _DWORD *v14; // eax
  bool v15; // zf
  float v16[3]; // [esp+10h] [ebp-Ch] BYREF

  v3 = *(_DWORD *)(a1 + 3888);
  if ( v3 )
  {
    a2 = 0.0;
    sub_10242820(v3, 0, 0.0);
  }
  if ( *(int *)(a1 + 220) <= 0 )
  {
    result = 91;
    *(float *)(a1 + 108) = 2500.0;
    return result;
  }
  if ( *(_DWORD *)(a1 + 2324) == 4 )
    return sub_10329280(a1, a2);
  if ( !sub_10023D10((_DWORD *)a1, 17) && !sub_10023D10((_DWORD *)a1, 18) )
    goto LABEL_17;
  if ( sub_103286F0((_DWORD *)a1) )
    return 22;
  v5 = *(_DWORD *)(a1 + 2324);
  if ( v5 == 1 )
    return 22;
  if ( v5 != 2 )
  {
    if ( (*(int (__thiscall **)(int, _DWORD, int))(*(_DWORD *)dword_106B31E4 + 8))(dword_106B31E4, 0, 10) >= 4 )
      goto LABEL_17;
    return 22;
  }
  if ( *(float *)(dword_106EAACC + 44) * 3.0 * 0.25 > (double)*(int *)(a1 + 220) )
    return 30;
  if ( sub_100BDCE0(a1, 62) != -1 )
    return 22;
LABEL_17:
  if ( sub_103286F0((_DWORD *)a1) )
    return 95;
  if ( (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 368))(a1) )
  {
    v6 = (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 368))(a1);
    if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v6 + 264))(v6) )
    {
      if ( *(_BYTE *)(a1 + 3880) )
      {
        v7 = (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 368))(a1);
        sub_103A4F80(a1, v7, 9999.0);
        if ( !sub_10023D10((_DWORD *)a1, 11) )
        {
          if ( sub_10023D10((_DWORD *)a1, 74) )
            return 92;
          if ( *(float *)(a1 + 1672) > (double)*(float *)(dword_106B31C8 + 12) )
            return 96;
          if ( sub_10023D10((_DWORD *)a1, 23) )
            return (*(int (__thiscall **)(int, _DWORD, int))(*(_DWORD *)dword_106B31E4 + 8))(dword_106B31E4, 0, 1) != 0
                 ? 101
                 : 92;
          v8 = (float *)sub_10019640((_DWORD *)a1);
          v9 = (float *)sub_100217F0((void *)a1);
          v16[0] = *v9 - *v8;
          v16[1] = v9[1] - v8[1];
          v10 = v9[2] - v8[2];
          v16[2] = v10;
          sub_10018D40(v16);
          if ( v10 <= 300.0 )
            return 90;
          return 96;
        }
        return 88;
      }
    }
  }
  if ( !sub_103A5070(a1) )
    return 88;
  if ( sub_10023D10(v11, 74) )
    return 102;
  if ( *(_DWORD *)(a1 + 3764) == 3 )
    *(_DWORD *)(a1 + 3764) = (*(int (__thiscall **)(int, _DWORD, int))(*(_DWORD *)dword_106B31E4 + 8))(
                               dword_106B31E4,
                               0,
                               1) != 0
                           ? 0
                           : 4;
  v12 = *(_DWORD *)(a1 + 3764);
  if ( v12 == 4 )
  {
    if ( !sub_10023D10((_DWORD *)a1, 80) )
      return 96;
    if ( sub_10022C40((_DWORD *)a1) )
    {
      sub_103A4E30((_DWORD *)a1);
      v13 = sub_10022C40((_DWORD *)a1);
      v14 = (_DWORD *)sub_100D7680(v13);
      if ( !v14 || sub_10022C40(v14) != a1 )
        return 96;
      return 98;
    }
    else
    {
      return 97;
    }
  }
  else
  {
    if ( !v12 )
      return sub_10023D10((_DWORD *)a1, 79) + 99;
    v15 = v12 == 7;
    result = 94;
    if ( !v15 )
      return 88;
  }
  return result;
}
