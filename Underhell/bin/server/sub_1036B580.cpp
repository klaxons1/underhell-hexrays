int __usercall sub_1036B580@<eax>(int a1@<ecx>, double a2@<st0>)
{
  int result; // eax
  double v4; // st7
  float *v5; // edi
  _DWORD *v6; // eax
  float *v7; // eax
  double v8; // st7
  int v9; // edi
  float v10[3]; // [esp+10h] [ebp-Ch] BYREF

  if ( *(_BYTE *)(a1 + 3653) )
  {
    *(_BYTE *)(a1 + 3653) = 0;
    return 105;
  }
  if ( *(_BYTE *)(a1 + 3656) || (*(_BYTE *)(a1 + 248) & 1) != 0 )
  {
    if ( sub_10023D10((_DWORD *)a1, 76) )
      return 96;
    else
      return *(_BYTE *)(a1 + 3655) != 0 ? 102 : 1;
  }
  if ( (*(_DWORD *)(a1 + 248) & 0x20000) != 0 )
  {
    if ( !*(_BYTE *)(a1 + 3672) )
      return 107;
    goto LABEL_9;
  }
  if ( *(_BYTE *)(a1 + 3672) )
  {
LABEL_9:
    if ( !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)dword_106B3CDC + 508))(dword_106B3CDC)
      && (sub_10023D10((_DWORD *)a1, 21) || sub_10023D10((_DWORD *)a1, 26))
      || sub_10023D10((_DWORD *)a1, 17)
      || sub_10023D10((_DWORD *)a1, 18) )
    {
      return 108;
    }
    else
    {
      return 107;
    }
  }
  if ( *(_BYTE *)(a1 + 3655) )
    return sub_10023D10((_DWORD *)a1, 21) + 102;
  if ( sub_10023D10((_DWORD *)a1, 73) )
    return 91;
  if ( sub_10023D10((_DWORD *)a1, 74) )
    return 94;
  if ( sub_10023D10((_DWORD *)a1, 75) )
    return 95;
  if ( *(_DWORD *)(a1 + 2324) == 2 )
  {
    if ( !sub_10023D10((_DWORD *)a1, 17) && !sub_10023D10((_DWORD *)a1, 18) )
    {
      if ( sub_10023D10((_DWORD *)a1, 50)
        || sub_10023D10((_DWORD *)a1, 55)
        || sub_10023D10((_DWORD *)a1, 54)
        || sub_10023D10((_DWORD *)a1, 53) )
      {
        return 6;
      }
      else
      {
        return 74;
      }
    }
    a2 = fabs(sub_10078F10(*(_DWORD *)(a1 + 2604)));
    if ( (1.0 - *(float *)(a1 + 1684)) * 60.0 > a2 )
      return 30;
    if ( sub_100BDCE0(a1, 62) != -1 )
    {
      v4 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
             dword_106B31E4,
             1.0,
             3.0);
      result = 22;
      *(float *)(a1 + 2824) = v4 + *(float *)(dword_106B31C8 + 12);
      return result;
    }
  }
  if ( sub_10023D10((_DWORD *)a1, 62) )
  {
    *(float *)(a1 + 552) = 1.0;
    sub_101C73D0((unsigned int *)a1, 0);
    return 78;
  }
  if ( sub_1002A5B0((_DWORD *)a1) && *(_WORD *)(sub_1002A5B0((_DWORD *)a1) + 816) == 450 )
  {
    if ( !(*(int (__thiscall **)(int))(*(_DWORD *)a1 + 368))(a1) )
      return 100;
    v5 = (float *)sub_10019640((_DWORD *)a1);
    v6 = (_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)a1 + 368))(a1);
    v7 = (float *)sub_10019640(v6);
    v10[0] = *v7 - *v5;
    v10[1] = v7[1] - v5[1];
    v8 = v7[2] - v5[2];
    v10[2] = v8;
    sub_100D7A40(v10);
    if ( v8 > 256.0 )
      return 100;
    a2 = 0.0;
    sub_10044830((_DWORD *)a1, 0.0);
  }
  v9 = sub_10045660(a1, a2);
  if ( v9 == 22 )
    *(float *)(a1 + 2824) = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
                              dword_106B31E4,
                              1.0,
                              3.0)
                          + *(float *)(dword_106B31C8 + 12);
  return v9;
}
