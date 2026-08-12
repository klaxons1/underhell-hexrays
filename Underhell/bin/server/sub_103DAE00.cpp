// bad sp value at call has been detected, the output may be wrong!
char __usercall sub_103DAE00@<al>(int a1@<ecx>, int a2@<ebp>, int a3@<edi>, int a4@<esi>)
{
  int v5; // eax
  float v6; // ecx
  double v7; // st7
  double v8; // st5
  int v9; // eax
  int *v10; // ecx
  int v11; // edi
  int v12; // ecx
  int v13; // eax
  int v14; // edi
  float *v15; // eax
  double v16; // st7
  double v17; // st4
  double v18; // st3
  double v19; // st2
  void (__thiscall *v20)(int, float *, int, _DWORD *); // edx
  char result; // al
  float *v22; // eax
  double v23; // st7
  double v24; // st6
  double v25; // st5
  _DWORD v27[50]; // [esp+38h] [ebp-1FCh]
  _BYTE v28[12]; // [esp+100h] [ebp-134h] BYREF
  float v29[19]; // [esp+10Ch] [ebp-128h] BYREF
  _DWORD v30[2]; // [esp+158h] [ebp-DCh] BYREF
  float v31; // [esp+160h] [ebp-D4h] BYREF
  _DWORD v32[3]; // [esp+16Ch] [ebp-C8h] BYREF
  float v33[16]; // [esp+178h] [ebp-BCh] BYREF
  char v34; // [esp+1B8h] [ebp-7Ch]
  bool v35; // [esp+1B9h] [ebp-7Bh]
  _DWORD v36[5]; // [esp+1CCh] [ebp-68h] BYREF
  float v37; // [esp+1E0h] [ebp-54h] BYREF
  float v38; // [esp+1E4h] [ebp-50h]
  float v39; // [esp+1E8h] [ebp-4Ch]
  float v40; // [esp+1ECh] [ebp-48h] BYREF
  float v41; // [esp+1F0h] [ebp-44h]
  float v42; // [esp+1F4h] [ebp-40h]
  float v43; // [esp+1F8h] [ebp-3Ch] BYREF
  float v44; // [esp+1FCh] [ebp-38h]
  float v45; // [esp+200h] [ebp-34h]
  int v46; // [esp+204h] [ebp-30h]
  int v47; // [esp+208h] [ebp-2Ch]
  float v48; // [esp+20Ch] [ebp-28h] BYREF
  float v49; // [esp+210h] [ebp-24h]
  float v50; // [esp+214h] [ebp-20h]
  int v51; // [esp+218h] [ebp-1Ch] BYREF
  float v52; // [esp+21Ch] [ebp-18h]
  float v53; // [esp+220h] [ebp-14h]
  int *v54; // [esp+224h] [ebp-10h]
  int v55; // [esp+228h] [ebp-Ch]
  void *v56; // [esp+22Ch] [ebp-8h]
  void *retaddr; // [esp+234h] [ebp+0h]

  v55 = a2;
  v56 = retaddr;
  v5 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)a1 + 368))(a1, a3, a4);
  v6 = *(float *)(*(int (__thiscall **)(int))(*(_DWORD *)v5 + 576))(v5);
  *(_DWORD *)(a1 + 3656) = -1;
  v7 = *(float *)(a1 + 3708);
  *(float *)&v51 = v6;
  v8 = *(float *)(a1 + 3708);
  v43 = v6 + v7;
  memset(v36, 0, sizeof(v36));
  v44 = COERCE_FLOAT(50) + v7;
  v45 = v8 + 0.0;
  *(float *)&v51 = v6 - v7;
  v52 = COERCE_FLOAT(50) - v7;
  v53 = 0.0 - v8;
  sub_1025F990(v30, v51, SLODWORD(v52), SLODWORD(v53));
  v9 = sub_1025F9C0((int)&v51, (int)&v43, (int)v30);
  v10 = 0;
  v47 = v9;
  v46 = 0;
  v54 = 0;
  if ( v9 <= 0 )
    return 0;
  do
  {
    v11 = v27[(_DWORD)v10];
    if ( *(char **)(v11 + 92) != "func_breakable"
      && !sub_100D6240((_DWORD *)v11, "func_breakable")
      && *(char **)(v11 + 92) != "prop_physics"
      && !sub_100D6240((_DWORD *)v11, "prop_physics")
      && *(char **)(v11 + 92) != "func_physbox"
      && !sub_100D6240((_DWORD *)v11, "func_physbox") )
    {
      goto LABEL_14;
    }
    v12 = *(_DWORD *)(v11 + 424);
    if ( !v12 || ((double (__thiscall *)(int))*(_DWORD *)(*(_DWORD *)v12 + 116))(v12) > 200.0 )
      goto LABEL_14;
    if ( ((*(int (__thiscall **)(_DWORD))(**(_DWORD **)(v11 + 424) + 76))(*(_DWORD *)(v11 + 424)) & 4) != 0
      && (*(unsigned __int8 (__thiscall **)(int, int, int, _DWORD))(*(_DWORD *)a1 + 548))(a1, v11, 16449, 0) )
    {
      *(_DWORD *)(a1 + 3656) = *(_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)v11 + 8))(v11);
      v22 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)v11 + 576))(v11);
      *(float *)(a1 + 3664) = *v22;
      *(float *)(a1 + 3668) = v22[1];
      v23 = v22[2];
      result = 1;
      *(float *)(a1 + 3672) = v23;
      return result;
    }
    v13 = v46;
    v36[v46] = v11;
    if ( v13 == 4 )
      break;
    v46 = v13 + 1;
LABEL_14:
    v10 = (int *)((char *)v54 + 1);
    v54 = v10;
  }
  while ( (int)v10 < v47 );
  if ( !v46 )
    return 0;
  v54 = 0;
  v47 = v46 - 1;
  while ( 1 )
  {
    v14 = v36[(*(int (__thiscall **)(int, _DWORD, int, int *))(*(_DWORD *)dword_106B31E4 + 8))(
                dword_106B31E4,
                0,
                v47,
                v54)];
    v15 = sub_103D9500((float *)a1, &v31);
    v48 = *v15;
    v16 = v15[1];
    v54 = &v51;
    v49 = v16;
    v50 = v15[2];
    v40 = 0.60000002;
    v41 = 0.60000002;
    v42 = 0.60000002;
    v37 = 0.1;
    v38 = 0.1;
    v39 = 0.1;
    sub_10111860(v14 + 320, &v37, &v40, (float *)&v51);
    v43 = *(float *)&v51 - v48;
    v44 = v52 - v49;
    v45 = v53 - v50;
    off_10689714();
    v17 = v43 * 32.0 + *(float *)&v51 - v48;
    v33[4] = v17;
    v18 = v44 * 32.0 + v52 - v49;
    v33[5] = v18;
    v19 = 32.0 * v45 + v53 - v50;
    v33[6] = v19;
    v35 = 0.0 != v17 * v17 + v18 * v18 + v19 * v19;
    v33[14] = 0.0;
    v33[13] = 0.0;
    v33[12] = 0.0;
    v33[10] = 0.0;
    v34 = 1;
    v33[9] = 0.0;
    v33[8] = 0.0;
    v33[0] = v48;
    v33[1] = v49;
    v33[2] = v50;
    sub_10265570(v32, a1, 0);
    v20 = *(void (__thiscall **)(int, float *, int, _DWORD *))(*(_DWORD *)dword_106B31F4 + 16);
    v54 = (int *)v28;
    v20(dword_106B31F4, v33, 16449, v32);
    if ( *(_DWORD *)(dword_106CE63C + 48) )
      sub_101A0AD0((int)v28, (int)v29, 255, 0, 0, 1, 5.0);
    if ( LODWORD(v29[16]) == v14 || 1.0 == v29[8] )
      break;
    v54 = (int *)((char *)v54 + 1);
    if ( (int)v54 >= 4 )
      return 0;
  }
  if ( v14 )
    *(_DWORD *)(a1 + 3656) = *(_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)v14 + 8))(v14);
  else
    *(_DWORD *)(a1 + 3656) = -1;
  *(float *)(a1 + 3664) = v29[0];
  v53 = COERCE_FLOAT(&v48);
  *(float *)(a1 + 3668) = v29[1];
  v52 = COERCE_FLOAT(&v37);
  *(float *)(a1 + 3672) = v29[2];
  v37 = 0.75;
  v38 = 0.75;
  v39 = 0.75;
  v40 = 0.25;
  v41 = 0.25;
  v42 = 0.25;
  sub_10111860(v14 + 320, &v40, (float *)LODWORD(v52), (float *)LODWORD(v53));
  if ( (*(_DWORD *)(v14 + 252) & 0x800) != 0 )
    sub_100DAE60(v14);
  result = 1;
  v24 = v49 - *(float *)(v14 + 584);
  v25 = v50 - *(float *)(v14 + 588);
  *(float *)(a1 + 3664) = v48 - *(float *)(v14 + 580) + *(float *)(a1 + 3664);
  *(float *)(a1 + 3668) = v24 + *(float *)(a1 + 3668);
  *(float *)(a1 + 3672) = v25 + *(float *)(a1 + 3672);
  return result;
}
