// bad sp value at call has been detected, the output may be wrong!
char __userpurge sub_10081C70@<al>(int a1@<ecx>, int a2@<ebx>, int a3@<esi>, int a4, float a5, _DWORD *a6)
{
  char result; // al
  _DWORD *v9; // ecx
  float *v10; // eax
  double v11; // st7
  bool v12; // c0
  double v13; // st7
  _DWORD *v14; // ecx
  int v15; // edi
  float *v16; // eax
  double v17; // st7
  double v18; // st7
  bool v19; // c0
  bool v20; // c3
  double v21; // st5
  int v22; // eax
  double v23; // st7
  int v24; // edi
  double v25; // st3
  double v26; // st5
  double v27; // st3
  double v28; // st4
  double v29; // st5
  int v30; // edi
  _DWORD v33[14]; // [esp+20h] [ebp-54h] BYREF
  int v34; // [esp+58h] [ebp-1Ch] BYREF
  float v35; // [esp+5Ch] [ebp-18h]
  float v36; // [esp+60h] [ebp-14h]
  float v37; // [esp+64h] [ebp-10h] BYREF
  float v38; // [esp+68h] [ebp-Ch]
  float v39; // [esp+6Ch] [ebp-8h]
  int v40; // [esp+70h] [ebp-4h]
  int v41; // [esp+7Ch] [ebp+8h]
  int v42; // [esp+7Ch] [ebp+8h]
  int v43; // [esp+7Ch] [ebp+8h]

  if ( (*(unsigned __int8 (__stdcall **)(int, _DWORD, _DWORD *, int, int, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, int, float, float, float, float))(*(_DWORD *)(*(_DWORD *)(a1 - 4) + 2104) + 12))(
         a4,
         LODWORD(a5),
         a6,
         a3,
         a2,
         v33[0],
         v33[1],
         v33[2],
         v33[3],
         v33[4],
         v33[5],
         v33[6],
         v33[7],
         v33[8],
         v33[9],
         v33[10],
         v33[11],
         v33[12],
         v33[13],
         v34,
         COERCE_FLOAT(LODWORD(v35)),
         COERCE_FLOAT(LODWORD(v36)),
         COERCE_FLOAT(LODWORD(v37)),
         COERCE_FLOAT(LODWORD(v38))) )
  {
    return 1;
  }
  if ( (*(_BYTE *)(a4 + 56) & 1) != 0 )
  {
    v9 = *(_DWORD **)(a1 + 28);
    if ( *v9 )
    {
      v41 = *(_DWORD *)(a1 - 4);
      v40 = *(_DWORD *)(a1 + 4);
      v10 = (float *)sub_100A6030(v9);
      sub_10079A70(v40, (float *)(v41 + 716), v10);
      v11 = a5 + *(float *)(**(_DWORD **)(a1 + 28) + 20);
    }
    else
    {
      v11 = 0.0;
    }
    v12 = a5 < v11;
    v13 = a5;
    if ( !v12 )
      goto LABEL_21;
    if ( *(float *)(a4 + 40) - *(float *)(*(_DWORD *)(a1 + 28) + 4) < v13 )
    {
      if ( v13 < *(float *)(a4 + 40) )
        *(float *)(a4 + 40) = a5;
      if ( v13 < 0.125 )
        (*(void (__thiscall **)(int))(*(_DWORD *)(a1 - 8) + 48))(a1 - 8);
      *(_DWORD *)(a4 + 56) |= 2u;
      *a6 = 0;
      return 1;
    }
  }
  else
  {
    v13 = a5;
  }
  if ( (*(_BYTE *)(a4 + 56) & 4) == 0 )
  {
    v14 = *(_DWORD **)(a1 + 28);
    if ( *v14 )
    {
      v15 = *(_DWORD *)(a1 - 4);
      v42 = *(_DWORD *)(a1 + 4);
      v16 = (float *)sub_100A6030(v14);
      sub_10079A70(v42, (float *)(v15 + 716), v16);
    }
    else
    {
      v13 = 0.0;
    }
    *(float *)&v43 = v13;
    v17 = sub_100737B0(*(_DWORD *)(*(_DWORD *)(a1 - 4) + 1676)) * 0.5;
    if ( *(float *)&v43 >= v17 )
    {
      v13 = a5;
    }
    else
    {
      v18 = v17 + *(float *)&v43;
      v19 = a5 < v18;
      v20 = a5 == v18;
      v13 = a5;
      if ( !v19 && !v20 )
      {
LABEL_21:
        *a6 = 0;
        return 1;
      }
    }
  }
  if ( *(_DWORD *)(a4 + 68) == -3 )
  {
    if ( sub_1001F080((float *)(a4 + 84), &flt_106F1CA8) )
    {
      memset(v33, 0, sizeof(v33));
      sub_1007DCD0(*(_DWORD *)(a1 - 4) + 716, (float *)(a4 + 12), (float *)(a4 + 84), &v37);
      if ( *(float *)(a4 + 16) * v38 + v37 * *(float *)(a4 + 12) > 0.7 )
      {
        v21 = *(float *)(a4 + 44);
        v22 = *(_DWORD *)(a1 - 4) + 716;
        v37 = COERCE_FLOAT(v33);
        v36 = 0.0;
        v35 = 9.569271e-38;
        v34 = (int)&v34;
        v33[13] = v22;
        v35 = v38 * v21 + *(float *)(v22 + 4);
        v23 = v21 * v39 + *(float *)(v22 + 8);
        v33[12] = *(_DWORD *)(a1 + 4);
        v36 = v23;
        sub_10060730(v33[12], v22, (int)&v34, SLODWORD(v35), SLODWORD(v36), (int)v33);
        if ( !v33[0] )
        {
          *(float *)(a4 + 12) = v37;
          result = 1;
          *(float *)(a4 + 16) = v38;
          *(float *)(a4 + 20) = v39;
          *(float *)(a4 + 40) = *(float *)(a4 + 44);
          *a6 = 0;
          return result;
        }
      }
    }
    v13 = a5;
  }
  if ( *(float *)(a1 + 124) == flt_10689730
    && *(float *)(a1 + 128) == flt_10689734
    && *(float *)(a1 + 132) == flt_10689738 )
  {
    goto LABEL_39;
  }
  v24 = *(_DWORD *)(a1 - 4);
  if ( (*(_DWORD *)(v24 + 252) & 0x800) != 0 )
  {
    sub_100DAE60(*(_DWORD *)(a1 - 4));
    v13 = a5;
  }
  v25 = *(float *)(a1 + 128) - *(float *)(v24 + 584);
  v26 = v25 * v25;
  v27 = *(float *)(a1 + 124) - *(float *)(v24 + 580);
  v28 = v26;
  v29 = *(float *)(a1 + 132) - *(float *)(v24 + 588);
  if ( v27 * v27 + v28 + v29 * v29 > 144.0 )
  {
LABEL_39:
    v30 = *(_DWORD *)(a1 - 4);
    if ( (*(_DWORD *)(v30 + 252) & 0x800) != 0 )
    {
      sub_100DAE60(*(_DWORD *)(a1 - 4));
      v13 = a5;
    }
    *(float *)(a1 + 124) = *(float *)(v30 + 580);
    *(float *)(a1 + 128) = *(float *)(v30 + 584);
    *(float *)(a1 + 132) = *(float *)(v30 + 588);
    *(float *)(a1 + 136) = *(float *)(dword_106B31C8 + 12);
  }
  else if ( !*(_DWORD *)(a1 + 4)
         && *(float *)(dword_106B31C8 + 12) - *(float *)(a1 + 136) > 1.0
         && *(float *)(*(_DWORD *)(a1 - 4) + 800) > 12.0 )
  {
    *a6 = -4;
    return 1;
  }
  if ( (*(_BYTE *)(a4 + 56) & 0x10) != 0 )
    return 0;
  if ( v13 >= *(float *)(a4 + 40) )
    return 0;
  v36 = v13;
  if ( !sub_1007F130(a1 - 8, v36, a4 + 68) )
    return 0;
  *a6 = 1;
  return 1;
}
