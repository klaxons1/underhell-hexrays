void __usercall sub_1015CD90(_DWORD *a1@<ecx>, int a2@<edi>)
{
  int v3; // ecx
  int v4; // eax
  int v5; // ecx
  int v6; // edx
  char v7; // bl
  int v8; // ecx
  int v9; // eax
  int v10; // ecx
  bool v11; // c0
  bool v12; // zf
  int v13; // eax
  int v14; // eax
  int v15; // ecx
  int v16; // eax
  bool v17; // dl
  float *v18; // ecx
  int v19; // eax
  float *v20; // ecx
  int v21; // eax
  int v22; // eax
  double v23; // st7
  double v24; // st7
  double v25; // st7
  _BYTE *v26; // ecx
  int v27; // ecx
  int v28; // ecx
  _BYTE *v29; // ecx
  int v30; // ecx
  int v31; // ecx
  int v32; // eax
  double v33; // st7
  double v34; // st7
  float *v35; // ecx
  float v36; // [esp+4h] [ebp-74h]
  float v37; // [esp+4h] [ebp-74h]
  _BYTE v38[44]; // [esp+10h] [ebp-68h] BYREF
  float v39; // [esp+3Ch] [ebp-3Ch]
  double v40; // [esp+64h] [ebp-14h] BYREF
  int v41; // [esp+6Ch] [ebp-Ch] BYREF
  char v42; // [esp+73h] [ebp-5h] BYREF
  char v43; // [esp+74h] [ebp-4h] BYREF
  bool v44; // [esp+75h] [ebp-3h]
  bool v45; // [esp+76h] [ebp-2h]
  bool v46; // [esp+77h] [ebp-1h]

  v3 = a1[2];
  v4 = *(_DWORD *)(v3 + 40);
  v5 = *(_DWORD *)(v3 + 36);
  v6 = v4 ^ v5;
  v7 = (v4 ^ v5) & v5;
  v8 = a1[1];
  LODWORD(v41) = v6 & v4;
  v9 = sub_101C5260(v8);
  v10 = a1[1];
  v11 = *(float *)(v10 + 2284) > 0.0;
  v12 = v9 == 0;
  v13 = *(_DWORD *)(v10 + 256);
  v43 = v12;
  v45 = (v13 & 2) != 0;
  v46 = v11;
  v44 = *(float *)(v10 + 2280) > 0.0;
  v14 = a1[2];
  if ( (*(_BYTE *)(v14 + 36) & 4) != 0 )
    *(_DWORD *)(v14 + 40) |= 4u;
  else
    *(_DWORD *)(v14 + 40) &= ~4u;
  if ( *(int *)(a1[1] + 220) <= 0 )
    return;
  (*(void (__thiscall **)(_DWORD *))(*a1 + 168))(a1);
  v15 = *(_DWORD *)(a1[2] + 36) & 4;
  if ( v15 || (v16 = a1[1], *(_BYTE *)(v16 + 2273)) )
  {
    v17 = v46;
  }
  else
  {
    v17 = v46;
    if ( !v45 && !v46 )
    {
      if ( *(int *)(v16 + 220) > 0
        && (*(_DWORD *)(v16 + 3416) & 8) == 0
        && !(*(unsigned __int8 (**)(void))(*(_DWORD *)v16 + 1088))() )
      {
        v18 = (float *)a1[1];
        if ( 0.0 == v18[570] )
        {
          v19 = (*(int (__thiscall **)(float *))(*(_DWORD *)v18 + 532))(v18);
          if ( fabs(*(float *)(v19 + 8) - *(float *)((*(int (__thiscall **)(_DWORD *, _DWORD))(*a1 + 28))(a1, 0) + 8)) > 0.1 )
          {
            DevMsg(1, "Restoring player view height\n");
            sub_10157520((_DWORD **)a1, 0.0);
          }
        }
      }
      return;
    }
  }
  if ( !v15 && !v17 )
  {
    if ( *(_BYTE *)(a1[1] + 2274) )
    {
      if ( sub_1015CCA0(a1, (int)v38) )
      {
        sub_1015C7E0(a1, a2, (int)v38);
        if ( v39 < 1.0 )
        {
          v20 = (float *)(a1[1] + 2280);
          v40 = (1.0 - v39) * 200.0 + 800.0;
          sub_1015B2A0(v20, &v40);
        }
      }
    }
    if ( !v44 )
    {
      v21 = a1[1];
      if ( *(_BYTE *)(v21 + 2336) || v43 || *(_BYTE *)(v21 + 2273) )
      {
        if ( (LOBYTE(v41) & 4) != 0 )
        {
          if ( v45 )
          {
            v41 = 1000.0;
            sub_1015B270((float *)(v21 + 2276), &v41);
          }
          else if ( *(_BYTE *)(v21 + 2273) && !*(_BYTE *)(v21 + 2272) )
          {
            v41 = (1000.0 - *(float *)(v21 + 2276)) * 0.0024999999 * 200.0 + 800.0;
            sub_1015B270((float *)(v21 + 2276), &v41);
          }
        }
        if ( (*(unsigned __int8 (__thiscall **)(_DWORD *))(*a1 + 180))(a1) )
        {
          v22 = a1[1];
          if ( *(_BYTE *)(v22 + 2273) || *(_BYTE *)(v22 + 2272) )
          {
            v23 = 1000.0 - *(float *)(v22 + 2276);
            if ( v23 < 0.0 )
              v23 = 0.0;
            v24 = v23 * 0.001;
            if ( v24 > 0.2 || v43 )
            {
              (*(void (__thiscall **)(_DWORD *))(*a1 + 172))(a1);
            }
            else
            {
              v25 = 1.0 - v24 * 5.0;
              v36 = 3.0 * (v25 * v25) - v25 * (v25 * v25 + v25 * v25);
              sub_10157520((_DWORD **)a1, v36);
              v26 = (_BYTE *)(a1[1] + 2273);
              v43 = 1;
              sub_1015B240(v26, &v43);
            }
          }
        }
        else if ( 1000.0 != *(float *)(a1[1] + 2276) )
        {
          sub_10157520((_DWORD **)a1, 1.0);
          v27 = a1[1];
          v41 = 1000.0;
          sub_1015B270((float *)(v27 + 2276), &v41);
          v28 = a1[1];
          v43 = 1;
          sub_1015B210((_BYTE *)(v28 + 2272), &v43);
          v29 = (_BYTE *)(a1[1] + 2273);
          v43 = 0;
          sub_1015B240(v29, &v43);
          sub_100EA940((int *)a1[1], 2);
        }
      }
    }
    return;
  }
  if ( (v7 & 4) != 0 && !v45 && !v17 && !v44 )
  {
    v30 = a1[1];
    v41 = 1000.0;
    sub_1015B270((float *)(v30 + 2276), &v41);
    v31 = a1[1];
    v42 = 1;
    sub_1015B240((_BYTE *)(v31 + 2273), &v42);
    v17 = v46;
  }
  v32 = a1[1];
  if ( *(_BYTE *)(v32 + 2273) )
  {
    if ( !v17 )
    {
      if ( !v44 )
      {
        v33 = 1000.0 - *(float *)(v32 + 2276);
        if ( v33 < 0.0 )
          v33 = 0.0;
        v34 = v33 * 0.001;
        if ( v34 > 0.4 || v45 || v43 )
        {
          (*(void (__thiscall **)(_DWORD *))(*a1 + 176))(a1);
        }
        else
        {
          v37 = 3.0 * (v34 * 2.5 * (v34 * 2.5)) - v34 * 2.5 * (v34 * 2.5 * (v34 * 2.5) + v34 * 2.5 * (v34 * 2.5));
          sub_10157520((_DWORD **)a1, v37);
        }
      }
      return;
    }
  }
  else if ( !v17 )
  {
    return;
  }
  if ( v45 )
  {
    if ( (*(_BYTE *)(a1[2] + 36) & 4) == 0 && sub_1015CCA0(a1, (int)v38) )
    {
      sub_1015C7E0(a1, a2, (int)v38);
      v35 = (float *)(a1[1] + 2280);
      v40 = (1.0 - v39) * 200.0 + 800.0;
      sub_1015B2A0(v35, &v40);
    }
  }
  else
  {
    sub_1015CB80(a1);
  }
}
