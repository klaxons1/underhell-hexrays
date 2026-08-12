int __usercall sub_1030F640@<eax>(int *a1@<ecx>, int a2@<ebx>, double a3@<st0>)
{
  int v3; // eax
  int result; // eax
  unsigned int v6; // eax
  int v7; // eax
  _DWORD *v8; // eax
  int v9; // eax
  int v10; // edi
  int v11; // eax
  _DWORD *v12; // eax
  int v13; // ebx
  _DWORD *v14; // eax
  int v15; // eax
  _DWORD *v16; // eax
  float *v17; // eax
  float *v18; // [esp-20h] [ebp-24h]

  if ( *((_BYTE *)a1 + 3629) )
    return 1;
  if ( !*((_BYTE *)a1 + 3675) && sub_10023D10(a1, 18) )
  {
    a3 = *(float *)(dword_106B31C8 + 12);
    if ( a3 > *((float *)a1 + 915) )
    {
      result = 92;
      *((float *)a1 + 915) = *(float *)(dword_106B31C8 + 12) + 8.0;
      return result;
    }
  }
  if ( *((_BYTE *)a1 + 3673) && sub_10023D10(a1, 73) )
    return 91;
  if ( a1[926] != -1 && off_1061BE18[4 * (a1[926] & 0xFFF) + 2] == (unsigned int)a1[926] >> 12 )
  {
    if ( off_1061BE18[4 * (a1[926] & 0xFFF) + 1] )
    {
      v6 = a1[927];
      if ( v6 != -1 && off_1061BE18[4 * (a1[927] & 0xFFF) + 2] == v6 >> 12 && off_1061BE18[4 * (a1[927] & 0xFFF) + 1] )
      {
        sub_10023E00((char *)a1, 75);
        sub_100211D0(a1, 0, 0);
        v7 = sub_1026A890((unsigned int *)a1 + 926);
        if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v7 + 264))(v7) )
        {
          v11 = (*(int (__thiscall **)(int *, int))(*a1 + 368))(a1, a2);
          sub_10019680(a1 + 928, v11);
          v12 = (_DWORD *)sub_1026A890((unsigned int *)a1 + 926);
          sub_100285C0(a1, v12, 1);
          v13 = *a1;
          v14 = (_DWORD *)sub_1026A890((unsigned int *)a1 + 926);
          sub_10019640(v14);
          v15 = sub_1026A890((unsigned int *)a1 + 926);
          (*(void (__thiscall **)(int *, int))(v13 + 1876))(a1, v15);
          v16 = (_DWORD *)(*(int (__thiscall **)(int *))(*a1 + 368))(a1);
          v18 = (float *)sub_10019640(v16);
          v17 = (float *)sub_10019640(a1);
          return 95 - (sub_103098D0((int)a1, v17, v18, 0.0, 0) != 0);
        }
        a1[926] = -1;
        a1[927] = -1;
        v8 = (_DWORD *)sub_1026A890((unsigned int *)a1 + 928);
        sub_100285C0(a1, v8, 1);
        if ( sub_1012B040((unsigned int *)a1 + 928, 0) )
          a1[581] = 2;
      }
    }
  }
  if ( sub_10023D10(a1, 13) || sub_10023D10(a1, 31) )
  {
    v9 = sub_10020820(a1);
    v10 = v9;
    if ( v9 )
    {
      if ( (*(char **)(v9 + 92) == "prop_physics" || sub_100D6240((_DWORD *)v9, "prop_physics"))
        && !*((_BYTE *)a1 + 3675) )
      {
        sub_10019680(a1 + 929, v10);
        return 91;
      }
    }
  }
  if ( a1[581] != 3 || !(*(int (__thiscall **)(int *))(*a1 + 368))(a1) )
    return sub_10045660((int)a1, a3);
  sub_100211D0(a1, 0, 0);
  if ( sub_10023D10(a1, 23) )
    return 41;
  if ( sub_10023D10(a1, 76) )
  {
    if ( sub_10023D10(a1, 77) && a1[909] )
      return 88;
    return 97;
  }
  if ( sub_10023D10(a1, 31) )
    return sub_1030F1C0((int)a1);
  if ( sub_10023D10(a1, 73) && !*((_BYTE *)a1 + 3675) )
    return 91;
  v3 = a1[917];
  if ( v3 >= 2 && *((_BYTE *)a1 + 3630) && a1[909] < 2 )
  {
    a1[917] = v3 - 1;
    return 97;
  }
  if ( !sub_10023D10(a1, 77) )
    return sub_10045660((int)a1, a3);
  sub_1004AFF0(a1, 8);
  return 88;
}
