void __usercall sub_10262700(int a1@<ecx>, double a2@<st0>)
{
  int v3; // ebx
  int v4; // eax
  int v5; // eax
  int v6; // eax
  int v7; // ebp
  int v8; // ebx
  int v9; // ecx
  int v10; // edx
  int v11; // edi
  int v12; // edi
  int v13; // ecx
  int v14; // edx
  int v15; // edi
  int v16; // ecx
  int v17; // edx
  int v18; // eax
  double v19; // st7
  int v20; // edx
  int v21; // ebp
  int v22; // eax
  int (__thiscall ***v23)(void *, _BYTE *, int *); // edi
  _BYTE *v24; // ebx
  int v25; // edi
  int v26; // ecx
  int v27; // eax
  int (__thiscall ***v28)(void *, int, int); // ebx
  int v29; // ebp
  int v30; // edi
  int v31; // eax
  int v32; // eax
  int v33; // eax
  int (__thiscall ***v34)(void *, int, int); // edi
  int v35; // eax
  int v36; // ecx
  int v37; // ebp
  int v38; // ebx
  int v39; // edx
  int v40; // eax
  int v41; // ecx
  int v42; // edi
  int (__thiscall ***v43)(void *, int, int); // ebx
  int v44; // ebp
  int (__thiscall ***v45)(void *, int *, _BYTE *); // ecx
  int v46; // eax
  int v47; // eax
  int v48; // ebp
  double (__thiscall *v49)(int); // eax
  int v50; // edi
  int v51; // eax
  int v52; // ebp
  int (__thiscall ***v53)(void *, int *, _BYTE *); // edi
  int v54; // edi
  int (__thiscall ***v55)(void *, int, int); // eax
  int (__thiscall ***v56)(void *, int, int); // eax
  int v57; // [esp+12h] [ebp-44h]
  char v58; // [esp+29h] [ebp-2Dh]
  char v59; // [esp+29h] [ebp-2Dh]
  int j; // [esp+2Ah] [ebp-2Ch]
  int k; // [esp+2Ah] [ebp-2Ch]
  int v62; // [esp+2Eh] [ebp-28h]
  int v63; // [esp+2Eh] [ebp-28h]
  int v64; // [esp+32h] [ebp-24h]
  int v65; // [esp+32h] [ebp-24h]
  int v66; // [esp+36h] [ebp-20h]
  int v67; // [esp+36h] [ebp-20h]
  int m; // [esp+36h] [ebp-20h]
  int v69; // [esp+3Ah] [ebp-1Ch]
  int v70; // [esp+3Ah] [ebp-1Ch]
  int v71; // [esp+3Eh] [ebp-18h]
  int v72; // [esp+3Eh] [ebp-18h]
  int v73; // [esp+42h] [ebp-14h] BYREF
  int v74; // [esp+46h] [ebp-10h] BYREF
  int i; // [esp+4Ah] [ebp-Ch]
  int v76; // [esp+4Eh] [ebp-8h] BYREF
  int v77; // [esp+52h] [ebp-4h] BYREF

  if ( !*(_DWORD *)(a1 + 272) )
    return;
  if ( (*(_BYTE *)(a1 + 376) & 1) != 0 )
    (*(void (__thiscall **)(int))(*(_DWORD *)a1 + 824))(a1);
  (*(void (__thiscall **)(int))(*(_DWORD *)a1 + 1032))(a1);
  v3 = *(_DWORD *)(a1 + 336);
  (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(a1 + 368) + 124))(*(_DWORD *)(a1 + 368), 1);
  (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(a1 + 368) + 200))(*(_DWORD *)(a1 + 368), 0);
  (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(a1 + 368) + 784))(*(_DWORD *)(a1 + 368), (int)a2);
  (*(void (__thiscall **)(_DWORD, _DWORD, int))(**(_DWORD **)(a1 + 368) + 776))(*(_DWORD *)(a1 + 368), 0, v3);
  (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(a1 + 368) + 816))(*(_DWORD *)(a1 + 368), 1);
  sub_102361D0((int (__thiscall ***)(void *, int, int))a1, (int)&v73, (int)&v76);
  v4 = sub_102374C0(*(int (__thiscall ****)(void *, int *, _BYTE *))(a1 + 368));
  sub_10236140(*(int (__thiscall ****)(void *, int, int))(a1 + 368), v73 - v4 - 2, 0);
  v57 = v76 - 2;
  v5 = sub_102374C0(*(int (__thiscall ****)(void *, int *, _BYTE *))(a1 + 368));
  sub_102361A0(*(int (__thiscall ****)(void *, int, int))(a1 + 368), v5, v57);
  (*(void (__thiscall **)(_DWORD, _DWORD, _DWORD))(**(_DWORD **)(a1 + 368) + 244))(*(_DWORD *)(a1 + 368), 0, 0);
  v6 = sub_102374C0(*(int (__thiscall ****)(void *, int *, _BYTE *))(a1 + 368));
  v7 = *(_DWORD *)(a1 + 272);
  v8 = v73 - v6 - 2;
  v69 = v8;
  v64 = v7;
  v62 = 0;
  if ( *(_DWORD *)(a1 + 280) == -1 )
  {
    v9 = 0;
    if ( v7 > 0 )
    {
      v10 = *(_DWORD *)(a1 + 216);
      v11 = *(_DWORD *)(a1 + 260);
      do
      {
        if ( *(_BYTE *)(v10 + 72 * *(unsigned __int8 *)(v11 + v9) + 12)
          && !*(_BYTE *)(v10 + 72 * *(unsigned __int8 *)(v11 + v9) + 25) )
        {
          ++v62;
        }
        ++v9;
      }
      while ( v9 < v7 );
    }
  }
  else
  {
    v62 = 1;
  }
  v12 = v7 - 1;
  v74 = 0;
  v77 = 0;
  v71 = v7 - 1;
  if ( v7 - 1 >= 0 )
  {
    v13 = *(_DWORD *)(a1 + 216);
    v14 = *(_DWORD *)(a1 + 260);
    while ( *(_BYTE *)(v13 + 72 * *(unsigned __int8 *)(v14 + v12) + 25) )
    {
      if ( --v12 < 0 )
        goto LABEL_18;
    }
    sub_10236170(
      *(int (__thiscall ****)(void *, int, int))(v13 + 72 * *(unsigned __int8 *)(v14 + v12)),
      (int)&v74,
      (int)&v77);
    v71 = v12;
  }
LABEL_18:
  v15 = 0;
  v58 = 0;
  if ( v62 )
  {
    if ( v74 )
    {
      i = v8 - *(_DWORD *)(a1 + 284);
      v19 = (double)i;
    }
    else
    {
      v66 = 0;
      if ( v7 > 0 )
      {
        do
        {
          v20 = *(_DWORD *)(a1 + 216);
          if ( !*(_BYTE *)(v20 + 72 * *(unsigned __int8 *)(*(_DWORD *)(a1 + 260) + v15) + 25) )
            v66 += sub_102374C0(*(int (__thiscall ****)(void *, int *, _BYTE *))(v20
                                                                               + 72
                                                                               * *(unsigned __int8 *)(*(_DWORD *)(a1 + 260) + v15)));
          ++v15;
        }
        while ( v15 < v7 );
      }
      i = v8 - v66;
      v19 = (double)(v8 - v66);
    }
    v18 = (int)(v19 / (double)v62);
  }
  else
  {
    v16 = 0;
    if ( v7 > 0 )
    {
      v17 = *(_DWORD *)(a1 + 216);
      do
      {
        if ( !*(_BYTE *)(v17 + 72 * *(unsigned __int8 *)(*(_DWORD *)(a1 + 260) + v16) + 25) )
          v15 += *(_DWORD *)(v17 + 72 * *(unsigned __int8 *)(*(_DWORD *)(a1 + 260) + v16) + 4);
        ++v16;
      }
      while ( v16 < v7 );
    }
    if ( v15 <= v8 )
    {
      v63 = 0;
      goto LABEL_36;
    }
    i = v8 - v15;
    v18 = (int)((double)(v8 - v15) / (double)v7);
    v58 = 1;
  }
  v63 = v18;
LABEL_36:
  v21 = 0;
  for ( *(_DWORD *)(a1 + 284) = v8; v21 < v64; ++v21 )
  {
    v22 = *(_DWORD *)(a1 + 216);
    v23 = *(int (__thiscall ****)(void *, _BYTE *, int *))(v22 + 72 * *(unsigned __int8 *)(*(_DWORD *)(a1 + 260) + v21));
    v24 = *(_BYTE **)(v22 + 72 * *(unsigned __int8 *)(*(_DWORD *)(a1 + 260) + v21) + 4);
    if ( sub_102374C0((int (__thiscall ***)(void *, int *, _BYTE *))v23) < (int)v24 )
      sub_10239D70(v23, v24);
  }
  for ( i = 0; i < 1000; ++i )
  {
    v25 = 0;
    v67 = -1;
    for ( j = 0; v25 < v64; j = ++v25 )
    {
      v26 = *(_DWORD *)(a1 + 260);
      v27 = *(_DWORD *)(a1 + 216);
      v28 = *(int (__thiscall ****)(void *, int, int))(v27 + 72 * *(unsigned __int8 *)(v26 + v25));
      v29 = v27 + 72 * *(unsigned __int8 *)(v26 + v25);
      if ( *(_BYTE *)(v29 + 25) )
      {
        ((void (__thiscall *)(int (__thiscall ***)(void *, int, int), _DWORD))(*v28)[31])(v28, 0);
      }
      else
      {
        sub_10236140(v28, v67, 0);
        ((void (__thiscall *)(int (__thiscall ***)(void *, int, int), int))(*v28)[31])(v28, 1);
        if ( v67 + *(_DWORD *)(v29 + 4) >= v69 && !v58 )
          break;
        v30 = sub_102374C0((int (__thiscall ***)(void *, int *, _BYTE *))v28);
        if ( j == v71 )
        {
          v30 = v69 - v67;
        }
        else
        {
          v31 = *(_DWORD *)(a1 + 280);
          if ( j == v31 || v31 == -1 && (*(_BYTE *)(v29 + 12) || v58) )
            v30 += v63;
        }
        v32 = *(_DWORD *)(v29 + 4);
        if ( v30 < v32 && !v58 || (v32 = *(_DWORD *)(v29 + 8), v30 > v32) )
          v30 = v32;
        v33 = sub_102374C0(*(int (__thiscall ****)(void *, int *, _BYTE *))(a1 + 368));
        sub_102361A0(v28, v30, v33);
        v67 += v30;
        v34 = *(int (__thiscall ****)(void *, int, int))(v29 + 16);
        ((void (__stdcall *)(bool))(*v34)[31])(j != v71);
        ((void (__thiscall *)(int (__thiscall ***)(void *, int, int)))(*v34)[53])(v34);
        sub_10236140(v34, v67 - 4, 0);
        v35 = sub_102374C0(*(int (__thiscall ****)(void *, int *, _BYTE *))(a1 + 368));
        sub_102361A0(v34, 8, v35);
        v25 = j;
      }
    }
    v36 = v64;
    if ( v25 == v64 )
      break;
    v37 = 0;
    v38 = 0;
    if ( v64 > 0 )
    {
      do
      {
        v39 = *(_DWORD *)(a1 + 216);
        if ( !*(_BYTE *)(v39 + 72 * *(unsigned __int8 *)(*(_DWORD *)(a1 + 260) + v38) + 25) )
        {
          v40 = sub_102374C0(*(int (__thiscall ****)(void *, int *, _BYTE *))(v39
                                                                            + 72
                                                                            * *(unsigned __int8 *)(*(_DWORD *)(a1 + 260)
                                                                                                 + v38)));
          v36 = v64;
          v37 += v40;
        }
        ++v38;
      }
      while ( v38 < v36 );
    }
    v41 = v36 - 1;
    for ( k = v41; v41 >= 0; k = --v41 )
    {
      v42 = *(_DWORD *)(a1 + 216) + 72 * *(unsigned __int8 *)(*(_DWORD *)(a1 + 260) + v41);
      if ( !*(_BYTE *)(v42 + 25) )
      {
        v43 = *(int (__thiscall ****)(void *, int, int))v42;
        v44 = v37 - sub_102374C0(*(int (__thiscall ****)(void *, int *, _BYTE *))v42);
        v45 = *(int (__thiscall ****)(void *, int *, _BYTE *))(a1 + 368);
        if ( *(_DWORD *)(v42 + 4) + v44 <= v69 )
        {
          v47 = sub_102374C0(v45);
          sub_102361A0(v43, v69 - v44, v47);
          v41 = k;
          break;
        }
        v37 = *(_DWORD *)(v42 + 4) + v44;
        v46 = sub_102374C0(v45);
        sub_102361A0(v43, *(_DWORD *)(v42 + 4), v46);
        v41 = k;
      }
    }
    v63 -= 5;
    if ( v63 < 0 )
      v63 = 0;
    if ( v41 == -1 )
      break;
  }
  if ( sub_10237C80((_DWORD *)(a1 + 444)) )
  {
    v48 = *(_DWORD *)(a1 + 336);
    v49 = *(double (__thiscall **)(int))(*(_DWORD *)a1 + 1032);
    *(_DWORD *)(a1 + 416) = *(_DWORD *)(a1 + 380) + 1;
    v50 = 0;
    *(_DWORD *)(a1 + 412) = 0;
    v65 = v48;
    if ( (int)v49(a1) <= v48 )
      v50 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(a1 + 368) + 772))(*(_DWORD *)(a1 + 368));
    v59 = 0;
    v70 = 0;
    v51 = v50;
    for ( i = v50; v51 < v48; i = ++v51 )
    {
      if ( v59 )
        break;
      v72 = 0;
      if ( v51 >= 0 && v51 < *(_DWORD *)(a1 + 336) )
      {
        v52 = 0;
        for ( m = *(_DWORD *)(*(_DWORD *)(a1 + 324) + 4 * v51); v52 < *(_DWORD *)(a1 + 272); ++v52 )
        {
          v53 = *(int (__thiscall ****)(void *, int *, _BYTE *))(*(_DWORD *)(a1 + 216)
                                                               + 72 * *(unsigned __int8 *)(*(_DWORD *)(a1 + 260) + v52));
          if ( ((unsigned __int8 (__thiscall *)(int (__thiscall ***)(void *, int *, _BYTE *)))(*v53)[32])(v53) )
          {
            v54 = sub_102374C0(v53);
            if ( m == *(_DWORD *)(a1 + 448) && v52 == *(_DWORD *)(a1 + 452) )
            {
              v55 = (int (__thiscall ***)(void *, int, int))sub_10237C80((_DWORD *)(a1 + 444));
              sub_10236140(v55, *(_DWORD *)(a1 + 412) + v72 + 2, *(_DWORD *)(a1 + 416) + v70 * *(_DWORD *)(a1 + 384));
              v56 = (int (__thiscall ***)(void *, int, int))sub_10237C80((_DWORD *)(a1 + 444));
              sub_102361A0(v56, v54, *(_DWORD *)(a1 + 384) - 1);
              v59 = 1;
            }
            v72 += v54;
          }
        }
        ++v70;
        v51 = i;
        v48 = v65;
      }
    }
  }
  (*(void (__thiscall **)(int))(*(_DWORD *)a1 + 16))(a1);
  *(_DWORD *)(a1 + 280) = -1;
}
