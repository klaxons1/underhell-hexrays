int __usercall sub_101F5070@<eax>(int a1@<ecx>, int a2@<ebp>, int a3@<edi>)
{
  int v4; // ebx
  int result; // eax
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // ebp
  int v10; // eax
  int v11; // eax
  double v12; // st7
  int (__thiscall **v13)(int, int, int); // edi
  int v14; // eax
  int v15; // eax
  int v16; // ebx
  int v17; // ebp
  int (__thiscall **v18)(int, int); // edi
  int v19; // eax
  int v20; // eax
  int v21; // eax
  int v22; // eax
  int v23; // eax
  int v24; // [esp+14h] [ebp-19ACh]
  int v25; // [esp+14h] [ebp-19ACh]
  int v26; // [esp+18h] [ebp-19A8h]
  int v27; // [esp+28h] [ebp-1998h]
  int v28; // [esp+30h] [ebp-1990h]
  float v29[3]; // [esp+34h] [ebp-198Ch] BYREF
  int v30; // [esp+40h] [ebp-1980h] BYREF
  _DWORD v31[8]; // [esp+44h] [ebp-197Ch] BYREF
  int v32[5]; // [esp+64h] [ebp-195Ch] BYREF
  int v33[5]; // [esp+78h] [ebp-1948h] BYREF
  int v34; // [esp+8Ch] [ebp-1934h]
  int v35; // [esp+98h] [ebp-1928h] BYREF
  int v36; // [esp+9Ch] [ebp-1924h]
  int v37; // [esp+A0h] [ebp-1920h]
  int v38; // [esp+A8h] [ebp-1918h]
  _BYTE v39[8]; // [esp+D0h] [ebp-18F0h] BYREF
  int v40[9]; // [esp+D8h] [ebp-18E8h] BYREF
  int v41[5]; // [esp+FCh] [ebp-18C4h] BYREF
  int v42[5]; // [esp+110h] [ebp-18B0h] BYREF
  int v43; // [esp+124h] [ebp-189Ch]
  int v44; // [esp+130h] [ebp-1890h] BYREF
  int v45; // [esp+134h] [ebp-188Ch]
  int v46; // [esp+138h] [ebp-1888h]
  int v47; // [esp+140h] [ebp-1880h]
  _BYTE v48[40]; // [esp+160h] [ebp-1860h] BYREF
  _BYTE v49[4]; // [esp+188h] [ebp-1838h] BYREF
  _BYTE v50[60]; // [esp+18Ch] [ebp-1834h] BYREF
  _BYTE v51[6136]; // [esp+1C8h] [ebp-17F8h] BYREF

  v4 = a1 + 1068;
  result = sub_102356B0(a1 + 1068);
  if ( (_WORD)result != 0xFFFF )
  {
    v6 = sub_101F42A0();
    (*(void (__thiscall **)(int, _BYTE *, int, int))(*(_DWORD *)v6 + 36))(v6, v49, a3, a2);
    sub_101F4640((_BYTE *)a1);
    v7 = sub_101F4260();
    v8 = (*(int (__thiscall **)(int))(*(_DWORD *)v7 + 380))(v7);
    v9 = v8;
    v28 = v8;
    if ( v8 )
      (*(void (__thiscall **)(int))(*(_DWORD *)v8 + 8))(v8);
    (*(void (__thiscall **)(int))(*(_DWORD *)v9 + 540))(v9);
    v10 = sub_101F4270();
    if ( (*(int (__thiscall **)(int))(*(_DWORD *)v10 + 200))(v10) )
    {
      if ( (unsigned __int8)sub_101F58D0(a1) )
        v11 = sub_101F58E0(1);
      else
        v11 = *(_DWORD *)(a1 + 2724);
    }
    else if ( (unsigned __int8)sub_101F58D0(a1) )
    {
      v11 = sub_101F58E0(0);
    }
    else
    {
      v11 = *(_DWORD *)(a1 + 2720);
    }
    (*(void (__thiscall **)(int, int))(*(_DWORD *)v9 + 20))(v9, v11);
    if ( (*(_BYTE *)(a1 + 2728) & 2) != 0 )
      sub_101F63D0(a1);
    if ( (*(_BYTE *)(a1 + 2728) & 0x10) != 0 )
    {
      sub_101F5A70(v48);
      sub_101EDA00((int)v48, 3, v29);
      v12 = v29[0];
      *(_BYTE *)(a1 + 2648) = 1;
      *(float *)(a1 + 2636) = v12;
      *(float *)(a1 + 2640) = v29[1];
      *(float *)(a1 + 2644) = v29[2];
    }
    v24 = dword_1047CA88;
    v13 = (int (__thiscall **)(int, int, int))(*(_DWORD *)dword_1047CA88 + 40);
    v14 = sub_102356B0(v4);
    v15 = (*v13)(dword_1047CA88, v14, v24);
    sub_101288D0((int)v31, v15, v26);
    v16 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_1047CA5C + 88))(
            dword_1047CA5C,
            *(_DWORD *)(v31[0] + 156));
    sub_10235BE0(a1 + 2652, *(_DWORD *)(v30 + 156), v16);
    (*(void (__thiscall **)(int))(*(_DWORD *)dword_1047CA5C + 92))(dword_1047CA5C);
    sub_102359B0(a1 + 2652, v16);
    if ( *(int *)(a1 + 2712) > 0 )
    {
      v17 = 0;
      v27 = *(_DWORD *)(a1 + 2712);
      do
      {
        v25 = dword_1047CA88;
        v18 = (int (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA88 + 40);
        v19 = sub_102356B0(v17 + *(_DWORD *)(a1 + 2700));
        v20 = (*v18)(dword_1047CA88, v19);
        sub_101288D0((int)v39, v20, v25);
        sub_102356E0(v39, v51, &v30, v16, a1 + 2652);
        sub_102359B0(v17 + *(_DWORD *)(a1 + 2700) + 1584, v51);
        nullsub_4();
        if ( v43 )
          sub_10034930(v43);
        sub_100F9890(&v44);
        sub_100F9B70(&v44);
        v21 = v44;
        if ( v46 >= 0 )
        {
          if ( v44 )
          {
            (*(void (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, v44);
            v21 = 0;
            v44 = 0;
          }
          v45 = 0;
        }
        v47 = v21;
        if ( v46 >= 0 )
        {
          if ( v21 )
          {
            (*(void (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, v21);
            v44 = 0;
          }
          v45 = 0;
        }
        sub_1011A810(v42);
        sub_1011A810(v41);
        sub_1011A810(v40);
        v17 += 1632;
        --v27;
      }
      while ( v27 );
      v9 = v28;
    }
    if ( (*(_BYTE *)(a1 + 2728) & 1) != 0 )
      sub_101F4B90(a1, v16);
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v9 + 16))(v9, 0);
    v22 = sub_101F42A0();
    (*(void (__thiscall **)(int, _BYTE *))(*(_DWORD *)v22 + 32))(v22, v50);
    (*(void (__thiscall **)(int))(*(_DWORD *)v9 + 20))(v9);
    nullsub_4();
    if ( v34 )
      sub_10034930(v34);
    sub_100F9890(&v35);
    sub_100F9B70(&v35);
    v23 = v35;
    if ( v37 >= 0 )
    {
      if ( v35 )
      {
        (*(void (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, v35);
        v23 = 0;
        v35 = 0;
      }
      v36 = 0;
    }
    v38 = v23;
    if ( v37 >= 0 )
    {
      if ( v23 )
      {
        (*(void (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, v23);
        v35 = 0;
      }
      v36 = 0;
    }
    sub_1011A810(v33);
    sub_1011A810(v32);
    sub_1011A810(&v30);
    (*(void (__thiscall **)(int))(*(_DWORD *)v9 + 12))(v9);
    return (*(int (__thiscall **)(int))(*(_DWORD *)v9 + 4))(v9);
  }
  return result;
}
