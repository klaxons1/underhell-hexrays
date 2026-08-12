int __userpurge sub_1011ED20@<eax>(_DWORD *a1@<ecx>, int a2@<esi>, int a3)
{
  _DWORD *v3; // ebx
  int v4; // ecx
  int result; // eax
  int *v6; // eax
  int v7; // edi
  void *v8; // esp
  void *v9; // esp
  int v10; // ecx
  int v11; // eax
  _DWORD *v12; // esi
  _DWORD *v13; // edi
  int v14; // eax
  int v15; // eax
  int v16; // ebx
  int v17; // ecx
  int *v18; // eax
  int v19; // eax
  _DWORD *v20; // eax
  int v21; // ecx
  int v22; // edx
  int v23; // ecx
  int v24; // edx
  int v25; // ecx
  int v26; // edx
  int v27; // ecx
  int v28; // edx
  int v29; // ecx
  int v30; // edx
  int v31; // ecx
  int v32; // edx
  int v33; // ecx
  int v34; // edx
  _DWORD *v35; // ecx
  int v36; // eax
  int i; // esi
  int *v38; // eax
  _BYTE v39[12]; // [esp+4h] [ebp-78h] BYREF
  _DWORD *v40; // [esp+10h] [ebp-6Ch]
  _DWORD v41[7]; // [esp+14h] [ebp-68h]
  _DWORD *v42; // [esp+30h] [ebp-4Ch]
  _DWORD v43[7]; // [esp+34h] [ebp-48h]
  _DWORD *v44; // [esp+50h] [ebp-2Ch]
  int v45; // [esp+54h] [ebp-28h]
  _BYTE *v46; // [esp+58h] [ebp-24h]
  int v47; // [esp+5Ch] [ebp-20h]
  int v48; // [esp+60h] [ebp-1Ch]
  _BYTE *v49; // [esp+64h] [ebp-18h]
  int *v50; // [esp+68h] [ebp-14h]
  int v51; // [esp+6Ch] [ebp-10h]
  _DWORD *v52; // [esp+70h] [ebp-Ch]
  int v53; // [esp+74h] [ebp-8h]
  char v54; // [esp+7Ah] [ebp-2h]
  char v55; // [esp+7Bh] [ebp-1h]

  v3 = a1;
  v4 = a1[32];
  v52 = v3;
  result = sub_10142B50(v4);
  if ( (_BYTE)result )
  {
    (*(void (__stdcall **)(_DWORD))(*(_DWORD *)dword_10413168 + 16))(1.0);
    v55 = (*(int (__thiscall **)(_DWORD *))(*v3 + 28))(v3);
    v54 = (*(int (__thiscall **)(_DWORD *))(*v3 + 24))(v3);
    if ( v55 )
    {
      v6 = sub_1005FF10();
      (*(void (__thiscall **)(int *))(*v6 + 4))(v6);
    }
    if ( v54 )
      sub_101FAD20(off_103EE614);
    v7 = a3;
    sub_1011E8F0((int)v3, a3, a2, (_DWORD *)(v3[36] + 589832), v3[36] + 589832 + 12 * *(_DWORD *)(v3[36] + 688184), a3);
    v45 = *(_DWORD *)(v3[36] + 688140)
        + *(_DWORD *)(v3[36] + 688156)
        + *(_DWORD *)(v3[36] + 688148)
        + *(_DWORD *)(v3[36] + 688164);
    v8 = alloca(4 * v45);
    v49 = v39;
    v9 = alloca(12 * v45);
    v10 = 0;
    v46 = v39;
    v53 = 0;
    v48 = 0;
    v51 = 0;
    v47 = 0;
    do
    {
      v11 = v3[36];
      v12 = (_DWORD *)(v11 + v10 + 49160);
      v44 = &v12[3 * *(_DWORD *)(v11 + v51 + 688140)];
      if ( v12 < v44 )
      {
        v13 = &v46[12 * v53];
        v50 = (int *)&v49[4 * (v45 - v53)];
        do
        {
          if ( *v12 )
          {
            v14 = (**(int (__thiscall ***)(_DWORD))*v12)(*v12);
            v15 = (*(int (__thiscall **)(int))(*(_DWORD *)v14 + 28))(v14);
            v16 = v15;
            if ( v15 )
            {
              if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v15 + 520))(v15) )
              {
                v17 = *v12;
                ++v53;
                *v13 = v17;
                v13[1] = v12[1];
                v13[2] = v12[2];
                v18 = v50 - 1;
                v13 += 3;
                *v18 = v16;
                v50 = v18;
                *v12 = 0;
                *((_WORD *)v12 + 4) = 0;
              }
              else if ( (*(int (__thiscall **)(int))(*(_DWORD *)v16 + 164))(v16) )
              {
                v19 = v48;
                *(_DWORD *)&v49[4 * v48] = v16;
                v48 = v19 + 1;
              }
            }
            v3 = v52;
          }
          v12 += 3;
        }
        while ( v12 < v44 );
        v7 = a3;
        v10 = v47;
      }
      v51 += 8;
      v10 += 98304;
      v47 = v10;
    }
    while ( v10 < 393216 );
    v20 = (_DWORD *)v3[36];
    v21 = 3 * v20[172035];
    v42 = v20 + 12290;
    v22 = (int)&v20[v21 + 12290];
    v23 = v20[172034];
    v43[0] = v22;
    v40 = v20 + 2;
    v24 = (int)&v20[3 * v23 + 2];
    v25 = v20[172037];
    v41[0] = v24;
    v43[1] = v20 + 36866;
    v26 = (int)&v20[3 * v25 + 36866];
    v27 = v20[172036];
    v43[2] = v26;
    v41[1] = v20 + 24578;
    v28 = (int)&v20[3 * v27 + 24578];
    v29 = v20[172039];
    v41[2] = v28;
    v43[3] = v20 + 61442;
    v30 = (int)&v20[3 * v29 + 61442];
    v31 = v20[172038];
    v43[4] = v30;
    v41[3] = v20 + 49154;
    v32 = (int)&v20[3 * v31 + 49154];
    v33 = v20[172041];
    v41[4] = v32;
    v43[5] = v20 + 86018;
    v34 = (int)&v20[3 * v33 + 86018];
    v35 = v20 + 73730;
    v36 = 3 * v20[172040];
    v41[5] = v35;
    v43[6] = v34;
    v41[6] = &v35[v36];
    for ( i = 0; i < 8; i += 2 )
    {
      sub_1011EA70((int)v3, v7, i * 4, v43[i - 1], v43[i], v7);
      sub_1011E810((_DWORD *)v41[i - 1], (_DWORD *)v41[i], v7);
    }
    result = sub_1011EA70((int)v3, v7, i * 4, (int)v46, (unsigned int)&v46[12 * v53], v7);
    if ( v55 )
    {
      v38 = sub_1005FF10();
      result = (*(int (__thiscall **)(int *, int))(*v38 + 12))(v38, v7);
    }
    if ( v54 )
      return sub_101FD270(v7);
  }
  return result;
}
