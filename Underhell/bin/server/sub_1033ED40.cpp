int __usercall sub_1033ED40@<eax>(int a1@<ecx>, double a2@<st0>)
{
  int result; // eax
  int v4; // edi
  int (__thiscall *v5)(int); // eax
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // edi
  int v10; // eax
  int v11; // eax
  int v12; // eax
  int v13; // eax
  int v14; // edi
  int v15; // eax
  int (__thiscall *v16)(int); // eax
  int v17; // ebx
  float *v18; // edi
  float *v19; // eax
  double v20; // st4
  double v21; // st6
  double v22; // st4
  double v23; // st5
  double v24; // st6
  int v25; // eax
  int v26; // [esp+4h] [ebp-24h]
  _BYTE v27[12]; // [esp+18h] [ebp-10h] BYREF
  float v28; // [esp+24h] [ebp-4h]

  if ( sub_10023D10((_DWORD *)a1, 30) )
    return 0;
  if ( sub_10023D10((_DWORD *)a1, 26) )
  {
    v4 = (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 368))(a1);
    v5 = *(int (__thiscall **)(int))(*(_DWORD *)a1 + 1868);
    v28 = *(float *)(dword_106B31C8 + 12);
    v6 = v5(a1);
    a2 = v28 - sub_10077720(v6, v4);
    if ( *(_DWORD *)(a1 + 2796) )
    {
      if ( v4 )
      {
        if ( sub_10023D10((_DWORD *)a1, 10) )
          (*(void (__thiscall **)(int, int))(*(_DWORD *)a1 + 2344))(a1, v4);
        if ( sub_10023D10((_DWORD *)a1, 21) && sub_1004AFF0((_DWORD *)a1, 0) )
          return 88;
        if ( !sub_100B1BD0(*(void **)(a1 + 2796), a1) )
        {
          if ( !sub_100B1470(*(_DWORD *)(a1 + 2796))
            || (v7 = sub_100B1470(*(_DWORD *)(a1 + 2796)), (*(int (__thiscall **)(int))(*(_DWORD *)v7 + 368))(v7) == v4) )
          {
            if ( sub_100B1470(*(_DWORD *)(a1 + 2796))
              && (*(unsigned __int8 (__thiscall **)(int, int))(*(_DWORD *)a1 + 1604))(a1, 1) )
            {
              (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)a1 + 1608))(a1, 1, 0.0);
            }
            if ( sub_10023D10((_DWORD *)a1, 10)
              && (*(unsigned __int8 (__thiscall **)(int, int))(*(_DWORD *)a1 + 2316))(a1, 1)
              && sub_1004AFF0((_DWORD *)a1, 8) )
            {
              return 44;
            }
            if ( a2 >= 3.0 && sub_1004AE20((_DWORD *)a1, 0, 1) )
              return (*(int (__thiscall **)(int, _DWORD, int))(*(_DWORD *)dword_106B31E4 + 8))(dword_106B31E4, 0, 100) >= 60
                   ? 98
                   : 35;
            return 27;
          }
        }
        if ( sub_10023D10((_DWORD *)a1, 21) && sub_1004AE20((_DWORD *)a1, 0, 1) )
          return 43;
        if ( sub_10023D10((_DWORD *)a1, 41) && sub_1004AE70((_DWORD *)a1, 0, 1) && sub_1004AFF0((_DWORD *)a1, 11) )
          return 94;
      }
    }
  }
  if ( (sub_10023D10((_DWORD *)a1, 4) || sub_10023D10((_DWORD *)a1, 3)) && !sub_10023D10((_DWORD *)a1, 23) )
    return 50;
  if ( sub_10023D10((_DWORD *)a1, 17)
    && (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 368))(a1)
    && !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)a1 + 2168))(a1) )
  {
    if ( !(*(int (__thiscall **)(int))(*(_DWORD *)a1 + 368))(a1) )
      return 27;
    a2 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
           dword_106B31E4,
           0.0,
           100.0);
    if ( a2 >= 50.0 )
      return 27;
    v8 = (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 368))(a1);
    if ( !sub_10029FD0((char *)a1, v8) )
      return 27;
    (*(void (__thiscall **)(int))(*(_DWORD *)a1 + 2172))(a1);
  }
  v9 = *(_DWORD *)a1;
  v10 = (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 368))(a1);
  if ( (*(int (__thiscall **)(int, int))(v9 + 1080))(a1, v10) == 2 )
  {
    if ( sub_10023D10((_DWORD *)a1, 10)
      || sub_10023D10((_DWORD *)a1, 8)
      || sub_10023D10((_DWORD *)a1, 17)
      || sub_10023D10((_DWORD *)a1, 18) )
    {
      (*(void (__thiscall **)(int))(*(_DWORD *)a1 + 1628))(a1);
      return 32;
    }
    v26 = (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 368))(a1);
    v11 = (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 1868))(a1);
    v12 = sub_100773C0(v11, v26, 0);
    if ( v12 && *(_BYTE *)(v12 + 54) || (sub_10021820((void *)a1), *(float *)(dword_106B31C8 + 12) - 5.0 < a2) )
    {
      v13 = (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 368))(a1);
      v14 = *(_DWORD *)a1;
      v15 = (*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)v13 + 504))(v13, v27);
      return ((*(unsigned __int8 (__thiscall **)(int, int))(v14 + 880))(a1, v15) != 0) + 14;
    }
  }
  result = sub_1033E010((_DWORD *)a1);
  if ( !result )
  {
    if ( sub_10023D10((_DWORD *)a1, 13) )
    {
      (*(void (__thiscall **)(int))(*(_DWORD *)a1 + 2176))(a1);
      v16 = *(int (__thiscall **)(int))(*(_DWORD *)a1 + 368);
      *(_BYTE *)(a1 + 3546) = 0;
      if ( v16(a1)
        && (*(_DWORD *)((*(int (__thiscall **)(int))(*(_DWORD *)a1 + 368))(a1) + 256) & 0x8000) == 0
        && sub_1004AE20((_DWORD *)a1, 0, 1) )
      {
        return 35;
      }
      v17 = (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 368))(a1);
      v18 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)a1 + 576))(a1);
      v19 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)v17 + 576))(v17);
      v20 = v19[1] - v18[1];
      v21 = v20 * v20;
      v22 = *v19 - *v18;
      v23 = v21;
      v24 = v19[2] - v18[2];
      if ( v22 * v22 + v23 + v24 * v24 > 9000000.0 )
      {
        return 35;
      }
      else
      {
        *(_DWORD *)(a1 + 2716) |= 2u;
        return 99;
      }
    }
    else if ( !sub_10023D10((_DWORD *)a1, 10) || sub_10023D10((_DWORD *)a1, 21) )
    {
      return 0;
    }
    else if ( (sub_10023D10((_DWORD *)a1, 39) || (v25 = *(_DWORD *)(a1 + 4980), v25 == 2) || v25 == 1)
           && sub_1004AE20((_DWORD *)a1, 0, 1) )
    {
      return 98;
    }
    else
    {
      (*(void (__thiscall **)(int))(*(_DWORD *)a1 + 2340))(a1);
      return 96;
    }
  }
  return result;
}
