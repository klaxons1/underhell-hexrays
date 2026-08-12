double __cdecl sub_101C01F0(int a1, int a2, int a3, float a4, char a5, _DWORD *a6, char a7)
{
  int v7; // ebx
  BOOL v9; // edi
  double result; // st7
  int v11; // ebx
  int v12; // ecx
  double v13; // st7
  float *v14; // ebx
  double v15; // st5
  int (__thiscall *v16)(int); // eax
  double v17; // st4
  int v18; // eax
  int v19; // eax
  int v20; // ebx
  double v21; // st7
  double v22; // st7
  float *v23; // ebx
  double v24; // st7
  double v25; // st6
  float *v26; // ebx
  double v27; // st7
  long double v28; // st6
  double v29; // st4
  long double v30; // st7
  int v31; // ebx
  int v32; // ecx
  double (__thiscall *v33)(int); // eax
  double v34; // st7
  int v35; // eax
  int v36; // eax
  int v37; // ebx
  double v38; // st7
  double v39; // st7
  int v40; // esi
  unsigned __int8 (__thiscall *v41)(int); // eax
  float v42; // [esp+20h] [ebp-1030h]
  float v43; // [esp+20h] [ebp-1030h]
  float v44; // [esp+24h] [ebp-102Ch]
  float v45; // [esp+24h] [ebp-102Ch]
  float v46; // [esp+24h] [ebp-102Ch]
  float v47; // [esp+24h] [ebp-102Ch]
  _DWORD v48[1024]; // [esp+34h] [ebp-101Ch] BYREF
  float v49[3]; // [esp+1034h] [ebp-1Ch] BYREF
  float *v50; // [esp+1040h] [ebp-10h]
  float v51; // [esp+1044h] [ebp-Ch]
  float v52; // [esp+1048h] [ebp-8h]
  int v53; // [esp+104Ch] [ebp-4h]
  int v54; // [esp+105Ch] [ebp+Ch]
  int v55; // [esp+105Ch] [ebp+Ch]
  float v56; // [esp+106Ch] [ebp+1Ch]
  int v57; // [esp+106Ch] [ebp+1Ch]
  float v58; // [esp+106Ch] [ebp+1Ch]
  int v59; // [esp+106Ch] [ebp+1Ch]

  v7 = a1;
  *a6 = 1;
  v9 = a1 == 0;
  if ( *(_DWORD *)(a2 + 104) == *(_DWORD *)(a2 + 108)
    || ((*(int (__thiscall **)(_DWORD))(**(_DWORD **)(a2 + 4 * (a1 == 0)) + 76))(*(_DWORD *)(a2 + 4 * (a1 == 0))) & 0x800) != 0
    && ((*(unsigned __int8 (__thiscall **)(_DWORD))(**(_DWORD **)(a2 + 4 * a1 + 104) + 284))(*(_DWORD *)(a2 + 4 * a1 + 104))
     || (*(unsigned __int8 (__thiscall **)(_DWORD))(**(_DWORD **)(a2 + 4 * a1 + 104) + 320))(*(_DWORD *)(a2 + 4 * a1 + 104))) )
  {
    return 0.0;
  }
  if ( ((*(int (__thiscall **)(_DWORD))(**(_DWORD **)(a2 + 4 * v9) + 76))(*(_DWORD *)(a2 + 4 * v9)) & 8) != 0
    && (*(unsigned __int8 (__thiscall **)(_DWORD))(**(_DWORD **)(a2 + 4 * a1 + 104) + 320))(*(_DWORD *)(a2 + 4 * a1 + 104)) )
  {
    (*(void (__thiscall **)(_DWORD, int, int))(**(_DWORD **)(a2 + 4 * v9) + 216))(
      *(_DWORD *)(a2 + 4 * v9),
      a2 + 12 * v9 + 32,
      a2 + 12 * v9 + 80);
    v7 = a1;
  }
  if ( ((*(int (__thiscall **)(_DWORD))(**(_DWORD **)(a2 + 4 * v9) + 76))(*(_DWORD *)(a2 + 4 * v9)) & 0x200) != 0
    && (*(_DWORD *)(*(_DWORD *)(a2 + 4 * v7 + 104) + 252) & 0x8000000) == 0 )
  {
    result = 1000.0;
    *a6 |= 0x4000000u;
    return result;
  }
  result = 0.0;
  if ( a4 > 0.0 )
  {
    if ( ((*(int (__thiscall **)(_DWORD))(**(_DWORD **)(a2 + 4 * v9) + 76))(*(_DWORD *)(a2 + 4 * v9)) & 0x402) != 0
      || !a7 && ((*(int (__thiscall **)(_DWORD))(**(_DWORD **)(a2 + 4 * v9) + 76))(*(_DWORD *)(a2 + 4 * v9)) & 4) != 0 )
    {
      return 0.0;
    }
    if ( ((*(int (__thiscall **)(_DWORD))(**(_DWORD **)(a2 + 4 * v9) + 76))(*(_DWORD *)(a2 + 4 * v9)) & 0x10) != 0 )
    {
      v11 = 0;
      v54 = (*(int (__thiscall **)(_DWORD, _DWORD *, int))(**(_DWORD **)(a2 + 4 * v9 + 104) + 624))(
              *(_DWORD *)(a2 + 4 * v9 + 104),
              v48,
              1024);
      if ( v54 > 0 )
      {
        while ( ((*(int (__thiscall **)(_DWORD))(*(_DWORD *)v48[v11] + 76))(v48[v11]) & 0x402) == 0 )
        {
          if ( ++v11 >= v54 )
            goto LABEL_19;
        }
        return 0.0;
      }
    }
LABEL_19:
    if ( ((*(int (__thiscall **)(_DWORD))(**(_DWORD **)(a2 + 4 * a1) + 76))(*(_DWORD *)(a2 + 4 * a1)) & 4) != 0 )
    {
      if ( (*(unsigned __int8 (__thiscall **)(_DWORD))(**(_DWORD **)(a2 + 4 * v9 + 104) + 320))(*(_DWORD *)(a2 + 4 * v9 + 104)) )
        return 0.0;
      a5 = 0;
    }
    v12 = *(_DWORD *)(a2 + 4 * v9);
    v13 = *(float *)(a2 + 12 * v9 + 36);
    v14 = (float *)(a2 + 12 * v9);
    v15 = v14[10];
    v16 = *(int (__thiscall **)(int))(*(_DWORD *)v12 + 76);
    v17 = v14[8];
    v50 = v14;
    v51 = v13 * v13 + v17 * v17 + v15 * v15;
    v52 = 0.0;
    if ( (v16(v12) & 1) != 0 )
      v52 = v14[21] * v14[21] + v14[20] * v14[20] + v14[22] * v14[22];
    *(float *)&v55 = ((double (__thiscall *)(_DWORD))*(_DWORD *)(**(_DWORD **)(a2 + 4 * v9) + 116))(*(_DWORD *)(a2 + 4 * v9));
    if ( ((*(int (__thiscall **)(_DWORD))(**(_DWORD **)(a2 + 4 * v9) + 76))(*(_DWORD *)(a2 + 4 * v9)) & 4) != 0 )
    {
      v18 = *(_DWORD *)(dword_106B31C8 + 20);
      if ( v18 == 1 )
      {
        v19 = sub_10261B20();
LABEL_33:
        if ( v19 )
          *(float *)&v55 = ((double (__thiscall *)(int, _DWORD))*(_DWORD *)(*(_DWORD *)v19 + 1480))(
                             v19,
                             *(_DWORD *)(a2 + 4 * v9));
        goto LABEL_35;
      }
      v53 = 1;
      if ( v18 >= 1 )
      {
        while ( 1 )
        {
          v20 = sub_1025FB50(v53);
          if ( v20 )
          {
            if ( *(_DWORD *)(a2 + 4 * a1 + 104) == (*(int (__thiscall **)(int))(*(_DWORD *)v20 + 1484))(v20) )
              break;
          }
          if ( ++v53 > *(_DWORD *)(dword_106B31C8 + 20) )
          {
            v14 = v50;
            goto LABEL_35;
          }
        }
        v19 = v20;
        v14 = v50;
        goto LABEL_33;
      }
    }
LABEL_35:
    if ( *(_DWORD *)(a2 + 4 * v9 + 104)
      && ((*(int (__thiscall **)(_DWORD))(**(_DWORD **)(a2 + 4 * v9) + 76))(*(_DWORD *)(a2 + 4 * v9)) & 0x10) != 0 )
    {
      *(float *)&v55 = sub_101B4DE0(*(_DWORD *)(a2 + 4 * v9 + 104));
    }
    if ( ((*(int (__thiscall **)(_DWORD))(**(_DWORD **)(a2 + 4 * v9) + 76))(*(_DWORD *)(a2 + 4 * v9)) & 0x20) != 0 )
    {
      v21 = *(float *)(a3 + 40);
      v55 = *(int *)(a3 + 40);
      if ( a4 < 2.0 )
        a4 = 2.0;
    }
    else
    {
      v21 = *(float *)&v55;
    }
    if ( a5 )
      goto LABEL_50;
    if ( v21 >= *(float *)(a3 + 24) && (v21 >= *(float *)(a3 + 28) || *(float *)(a3 + 36) <= (double)v51) )
    {
      if ( *(float *)(a3 + 16) > (double)v51 && *(float *)(a3 + 20) > (double)v52 )
        return 0.0;
LABEL_50:
      if ( sub_100D72C0(*(_DWORD **)(a2 + 4 * a1 + 104))
        && (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106B31D0 + 72))(
             dword_106B31D0,
             *(_DWORD *)(*(_DWORD *)(a2 + 4 * v9 + 104) + 24))
        && a4 < 3.0 )
      {
        a4 = 3.0;
      }
      *(float *)&v53 = 0.0;
      if ( *(float *)(a3 + 20) < (double)v52 )
      {
        (*(void (__thiscall **)(_DWORD, float *))(**(_DWORD **)(a2 + 4 * v9) + 124))(*(_DWORD *)(a2 + 4 * v9), v49);
        v42 = (fabs(v14[20] * v49[0]) + fabs(v14[21] * v49[1]) + fabs(v14[22] * v49[2])) * a4;
        v22 = sub_101C0130(*(_DWORD *)(a3 + 4), *(_DWORD *)(a3 + 12), v42, 0);
        *(float *)&v53 = v22;
        if ( v22 > 0.0 )
          *a6 |= 4u;
      }
      v23 = (float *)(a2 + 12 * a1);
      v44 = v23[9] * v23[9] + v23[8] * v23[8] + v23[10] * v23[10];
      v56 = off_10689708(v44);
      v45 = v23[15] * v23[15] + v23[14] * v23[14] + v23[16] * v23[16];
      v24 = v56 - off_10689708(v45);
      *(float *)&v57 = v24;
      (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(a2 + 4 * a1) + 116))(*(_DWORD *)(a2 + 4 * a1));
      v25 = 0.0;
      if ( *(float *)&v57 <= 0.0 || *(float *)&v57 >= (double)*(float *)(a3 + 52) )
        v25 = *(float *)&v57;
      v26 = v50;
      v52 = v24 * (v25 * v25);
      v46 = v50[9] * v50[9] + v50[8] * v50[8] + v50[10] * v50[10];
      v58 = off_10689708(v46);
      v47 = v26[15] * v26[15] + v26[14] * v26[14] + v26[16] * v26[16];
      v27 = v58 - off_10689708(v47);
      v28 = v27 * v27 * *(float *)&v55;
      if ( *(float *)&v55 < (double)*(float *)(a3 + 40)
        || (v28 = v28 * *(float *)(a3 + 44), v29 = v26[10] - v26[16], v27 <= 0.0)
        || v29 >= 0.0
        || v26[10] >= 0.0 )
      {
        v30 = v28;
      }
      else
      {
        v30 = (fabs(v29 / v27) * (*(float *)(a3 + 48) - 1.0) + 1.0) * v28;
      }
      v31 = a1;
      v32 = *(_DWORD *)(a2 + 4 * a1);
      v33 = *(double (__thiscall **)(int))(*(_DWORD *)v32 + 120);
      v52 = v30 + v52;
      v51 = v33(v32);
      if ( !(*(unsigned __int8 (__thiscall **)(_DWORD))(**(_DWORD **)(a2 + 4 * v31) + 40))(*(_DWORD *)(a2 + 4 * v31)) )
      {
        v34 = 1.0
            / ((double (__thiscall *)(_DWORD))*(_DWORD *)(**(_DWORD **)(a2 + 4 * a1) + 116))(*(_DWORD *)(a2 + 4 * a1));
LABEL_81:
        v43 = v34 * a4 * v52;
        v39 = sub_101C0130(*(_DWORD *)a3, *(_DWORD *)(a3 + 8), v43, 0);
        v40 = *(_DWORD *)(a2 + 4 * v9);
        v41 = *(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v40 + 4);
        *(float *)&v53 = v39 + *(float *)&v53;
        if ( v41(v40) )
          return *(float *)&v53;
        if ( *(float *)(a3 + 28) <= (double)*(float *)&v55 )
          return *(float *)&v53;
        result = 0.0;
        if ( *(float *)(a3 + 32) <= 0.0 )
          return *(float *)&v53;
        if ( *(float *)&v53 > (double)*(float *)(a3 + 32) )
          return *(float *)(a3 + 32);
        if ( *(float *)&v53 >= 0.0 )
          return *(float *)&v53;
        return result;
      }
      if ( ((*(int (__thiscall **)(_DWORD))(**(_DWORD **)(a2 + 4 * a1) + 76))(*(_DWORD *)(a2 + 4 * a1)) & 4) != 0 )
      {
        v35 = *(_DWORD *)(dword_106B31C8 + 20);
        if ( v35 == 1 )
        {
          v36 = sub_10261B20();
        }
        else
        {
          v59 = 1;
          if ( v35 < 1 )
            goto LABEL_80;
          while ( 1 )
          {
            v37 = sub_1025FB50(v59);
            if ( v37 )
            {
              if ( *(_DWORD *)(a2 + 4 * a1 + 104) == (*(int (__thiscall **)(int))(*(_DWORD *)v37 + 1484))(v37) )
                break;
            }
            if ( ++v59 > *(_DWORD *)(dword_106B31C8 + 20) )
              goto LABEL_80;
          }
          v36 = v37;
          v31 = a1;
        }
        if ( v36 )
        {
          v38 = ((double (__thiscall *)(int, _DWORD))*(_DWORD *)(*(_DWORD *)v36 + 1480))(v36, *(_DWORD *)(a2 + 4 * v31));
          if ( v38 > 0.0 )
          {
            v34 = 1.0 / v38;
            goto LABEL_81;
          }
        }
      }
LABEL_80:
      v34 = v51;
      goto LABEL_81;
    }
    return 0.0;
  }
  return result;
}
