int __usercall sub_10378E70@<eax>(int a1@<ecx>, double a2@<st0>)
{
  _DWORD *v4; // eax
  float *v5; // eax
  _DWORD *v6; // eax
  float *v7; // eax
  _DWORD *v8; // edi
  float *v9; // ebx
  float *v10; // eax
  double v11; // st6
  double v12; // st5
  int v13; // edx
  int v14; // eax
  int v15; // edi
  int v16; // eax
  int v17; // ecx
  int v18; // eax
  int v19; // eax
  int v20; // eax
  double v21; // st7
  int v22; // ecx
  double v23; // st6
  double v24; // rt0
  int v25; // edx
  double v26; // rt1
  double v27; // st6
  double v28; // st7
  int v29; // eax
  int v30; // eax
  int v31; // eax
  _DWORD v32[19]; // [esp+4h] [ebp-4Ch] BYREF

  if ( *(_DWORD *)(dword_106E94EC + 48) )
  {
    *(_BYTE *)(a1 + 4288) = 0;
    return 1;
  }
  if ( sub_10023D10((_DWORD *)a1, 75) )
    return 91;
  if ( sub_10023D10((_DWORD *)a1, 82) || *(_DWORD *)(a1 + 2808) && sub_1001ED60((float *)(a1 + 4592)) )
  {
    sub_10072560(v32);
    sub_1006FF60(v32, *(_DWORD *)(a1 + 2808));
    sub_1042C170(2);
    if ( sub_10023D10((_DWORD *)a1, 82) )
    {
      sub_10023E00((char *)a1, 82);
      if ( (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 368))(a1) )
      {
        v4 = (_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)a1 + 368))(a1);
        v5 = (float *)sub_10019640(v4);
        v6 = (_DWORD *)sub_10072A50(0, v5, v32);
      }
      else
      {
        v7 = (float *)sub_10019640((_DWORD *)a1);
        v6 = (_DWORD *)sub_10072EC0(v7, v32);
      }
      v8 = v6;
      if ( v6 )
      {
        sub_10070B10(v6, a1);
LABEL_37:
        sub_100448D0((_DWORD *)a1, (int)v8);
        sub_100725D0(v32);
        return 112;
      }
    }
    else
    {
      if ( (*(_DWORD *)(a1 + 252) & 0x800) != 0 )
        sub_100DAE60(a1);
      v8 = (_DWORD *)sub_10072EC0((float *)(a1 + 580), v32);
      if ( v8 )
      {
        v9 = (float *)sub_10019640((_DWORD *)a1);
        v10 = (float *)sub_10019640(v8);
        v11 = v10[1] - v9[1];
        v12 = *v10 - *v9;
        if ( v12 * v12 + v11 * v11 >= 57600.0 )
        {
          *(float *)(a1 + 4592) = *(float *)(dword_106B31C8 + 12) + 15.0;
          goto LABEL_37;
        }
        a2 = *(float *)(dword_106B31C8 + 12) + 5.0;
        *(float *)(a1 + 4592) = a2;
      }
    }
    sub_100725D0(v32);
  }
  if ( !sub_10023D10((_DWORD *)a1, 81) )
  {
    if ( sub_10023D10((_DWORD *)a1, 74) )
      return 95;
    if ( sub_10023D10((_DWORD *)a1, 78) )
      return 101;
    if ( *(_DWORD *)(a1 + 4624) )
      return sub_10371210((_DWORD *)a1);
    if ( *(_DWORD *)(dword_106E9414 + 48) )
    {
      if ( *(int *)(a1 + 4580) > 0 )
      {
        a2 = *(float *)(dword_106B31C8 + 12);
        if ( a2 > *(float *)(a1 + 4588) )
          return 103;
      }
    }
    if ( !sub_1032ECA0((_DWORD *)a1) )
    {
      if ( *(_DWORD *)(a1 + 2324) == 1 )
        return 99;
      if ( *(_DWORD *)(a1 + 2324) != 2 )
      {
        if ( *(_DWORD *)(a1 + 2324) == 3 )
          return sub_10378B00(a1);
        return sub_10092C60(a1, a2);
      }
      if ( sub_10023D10((_DWORD *)a1, 73) )
        return 99;
    }
    return sub_10092C60(a1, a2);
  }
  v13 = dword_106B31C8;
  if ( *(float *)(dword_106B31C8 + 12) - *(float *)(a1 + 4236) > -0.001 )
  {
    v14 = *(_DWORD *)(a1 + 2796);
    v15 = 0;
    if ( v14 )
      v15 = *(_DWORD *)(v14 + 92);
    if ( !(v15 % 2) )
    {
      v16 = 0;
      if ( dword_106E95A4 > 0 )
      {
        v17 = dword_106E9598;
        do
        {
          if ( *(_DWORD *)(v17 + 4 * v16) != a1 )
          {
            *(float *)(*(_DWORD *)(v17 + 4 * v16) + 4236) = *(float *)(v13 + 12) + 3.0;
            *(float *)(*(_DWORD *)(dword_106E9598 + 4 * v16) + 4240) = -1.0;
            v17 = dword_106E9598;
          }
          ++v16;
        }
        while ( v16 < dword_106E95A4 );
      }
      *(float *)(a1 + 4240) = *(float *)(dword_106E8F94 + 44) * 4.0 + *(float *)(v13 + 12);
      if ( *(_DWORD *)(dword_106E906C + 48) )
      {
        v18 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106B31D0 + 72))(
                dword_106B31D0,
                *(_DWORD *)(a1 + 24));
        Msg("Hunter %d rundown\n", v18);
      }
      if ( sub_10023D10((_DWORD *)a1, 10) )
      {
        if ( *(_BYTE *)(a1 + 4288) && sub_10023D10((_DWORD *)a1, 22) )
          return 89;
        else
          return (*(int (__thiscall **)(int, _DWORD, int))(*(_DWORD *)dword_106B31E4 + 8))(dword_106B31E4, 0, 1) != 0
               ? 106
               : 68;
      }
LABEL_51:
      v31 = sub_10261B20();
      sub_100218B0((_DWORD *)a1, v31);
      return 20;
    }
    if ( *(_DWORD *)(dword_106E906C + 48) )
    {
      v19 = sub_1001F3C0((_DWORD *)a1);
      Msg("Hunter %d safe from rundown\n", v19);
    }
    v20 = 0;
    if ( dword_106E95A4 > 0 )
    {
      v21 = -1.0;
      v22 = dword_106B31C8;
      v23 = 4.0;
      while ( 1 )
      {
        v25 = *(_DWORD *)(dword_106E9598 + 4 * v20++);
        *(float *)(v25 + 4236) = *(float *)(v22 + 12) + v23;
        v26 = v23;
        v27 = v21;
        v28 = v26;
        *(float *)(*(_DWORD *)(dword_106E9598 + 4 * v20 - 4) + 4240) = v27;
        if ( v20 >= dword_106E95A4 )
          break;
        v24 = v27;
        v23 = v28;
        v21 = v24;
      }
    }
    v29 = *(_DWORD *)(a1 + 2796);
    if ( v29 )
      *(_DWORD *)(v29 + 92) = v15 + 1;
  }
  if ( !sub_10023D10((_DWORD *)a1, 10) )
    goto LABEL_51;
  if ( *(_DWORD *)(dword_106E906C + 48) )
  {
    v30 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106B31D0 + 72))(dword_106B31D0, *(_DWORD *)(a1 + 24));
    Msg("Hunter %d try dodge\n", v30);
  }
  return 91;
}
