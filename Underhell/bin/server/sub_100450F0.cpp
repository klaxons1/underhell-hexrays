int __usercall sub_100450F0@<eax>(_DWORD *a1@<ecx>, double a2@<st0>)
{
  unsigned int v3; // eax
  int *v4; // ecx
  unsigned int v5; // eax
  int v6; // ecx
  int result; // eax
  int v8; // edi
  int v9; // edi
  int v10; // eax
  int v11; // eax
  int v12; // eax
  int v13; // edi
  int v14; // eax
  int v15; // [esp-Ch] [ebp-1Ch]
  int v16; // [esp-8h] [ebp-18h]
  _BYTE v17[12]; // [esp+4h] [ebp-Ch] BYREF

  v3 = a1[621];
  if ( v3 != -1 )
  {
    v4 = &off_1061BE18[4 * (a1[621] & 0xFFF) + 1];
    v5 = v3 >> 12;
    if ( v4[1] == v5 )
    {
      if ( *v4 )
      {
        if ( v4[1] == v5 )
          v6 = *v4;
        else
          v6 = 0;
        sub_100218B0(a1, v6);
        return (a1[630] == -1) + 85;
      }
    }
  }
  result = sub_100444C0((int)a1);
  if ( result )
    return result;
  if ( sub_10023D10(a1, 26) )
  {
    v8 = dword_106B31C8;
    v16 = (*(int (__thiscall **)(_DWORD *))(*a1 + 368))(a1);
    (*(void (__thiscall **)(_DWORD *))(*a1 + 1868))(a1);
    a2 = *(float *)(v8 + 12) - sub_10077720(v16);
    if ( a2 < 2.0 )
      return 4;
  }
  if ( !sub_10023D10(a1, 30) )
  {
    v9 = *a1;
    v10 = (*(int (__thiscall **)(_DWORD *))(*a1 + 368))(a1);
    if ( (*(int (__thiscall **)(_DWORD *, int))(v9 + 1080))(a1, v10) == 2 )
    {
      if ( sub_10023D10(a1, 10) || sub_10023D10(a1, 17) || sub_10023D10(a1, 18) )
      {
        (*(void (__thiscall **)(_DWORD *))(*a1 + 1628))(a1);
        return 32;
      }
      v15 = (*(int (__thiscall **)(_DWORD *))(*a1 + 368))(a1);
      (*(void (__thiscall **)(_DWORD *))(*a1 + 1868))(a1);
      v11 = sub_100773C0(v15, 0);
      if ( v11 && *(_BYTE *)(v11 + 54) || (sub_10021820(a1), *(float *)(dword_106B31C8 + 12) - 5.0 < a2) )
      {
        v12 = (*(int (__thiscall **)(_DWORD *))(*a1 + 368))(a1);
        v13 = *a1;
        v14 = (*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)v12 + 504))(v12, v17);
        return ((*(unsigned __int8 (__thiscall **)(_DWORD *, int))(v13 + 880))(a1, v14) != 0) + 14;
      }
    }
    if ( sub_10023D10(a1, 3) || sub_10023D10(a1, 4) )
      return 50;
    if ( sub_10023D10(a1, 10) )
    {
      if ( sub_10023D10(a1, 38) )
        return 24;
      if ( sub_10023D10(a1, 43) || sub_10023D10(a1, 42) || sub_10023D10(a1, 45) )
        return 35;
      if ( !(unsigned __int8)sub_100B8D10(a1 + 690) || !sub_10023D10(a1, 21) )
      {
        if ( sub_10023D10(a1, 21) )
        {
          if ( !(*(unsigned __int8 (__thiscall **)(_DWORD *))(*a1 + 1996))(a1) || (unsigned __int8)sub_1004AE20(0, 1) )
            return 43;
        }
        else
        {
          if ( sub_10023D10(a1, 22) )
            return 44;
          if ( sub_10023D10(a1, 23) )
            return 41;
          if ( sub_10023D10(a1, 24) )
            return 42;
          if ( !sub_10023D10(a1, 40) )
          {
            if ( sub_10023D10(a1, 21) || sub_10023D10(a1, 23) )
            {
              DevWarning(2, "No suitable combat schedule!\n");
              return 81;
            }
            if ( sub_100CF460(a1)
              || sub_10023D10(a1, 39) && ((*(int (__thiscall **)(_DWORD *))(*a1 + 1672))(a1) & 0x60000) != 0 )
            {
              return 34;
            }
            return ((*(int (__thiscall **)(_DWORD *))(*a1 + 1672))(a1) & 0x180000) != 0 ? 17 : 27;
          }
        }
      }
    }
    else if ( sub_10023D10(a1, 13) )
    {
      if ( !sub_100CF460(a1) && ((*(int (__thiscall **)(_DWORD *))(*a1 + 1672))(a1) & 0x60000) == 0 )
        return ((*(int (__thiscall **)(_DWORD *))(*a1 + 1672))(a1) & 0x180000) != 0 ? 17 : 27;
      return 35;
    }
    return 12;
  }
  sub_100285C0(a1, 0, 1);
  if ( sub_1002F420((int)a1) )
    sub_10023E00((char *)a1, 30);
  else
    sub_1002B660((int)a1, 2);
  return (*(int (__thiscall **)(_DWORD *))(*a1 + 1240))(a1);
}
