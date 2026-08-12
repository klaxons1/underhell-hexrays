void __userpurge sub_101A7E70(int a1@<ecx>, int a2@<esi>, int a3, int a4, int a5, int a6)
{
  int v7; // esi
  int v8; // ecx
  int *v9; // ecx
  int v10; // edx
  int (__thiscall *v11)(int *); // eax
  int v12; // eax
  int *v13; // ecx
  int v14; // edx
  double v15; // st7
  int (__thiscall *v16)(int *); // eax
  int v17; // eax
  int *v18; // ecx
  int v19; // edx
  double v20; // st7
  int (__thiscall *v21)(int *); // eax
  int v22; // eax
  int *v23; // ecx
  int v24; // edx
  double v25; // st7
  int (__thiscall *v26)(int *); // eax
  int v27; // eax
  int v28; // edx
  int v29; // ecx
  double v30; // st7
  int v31; // eax
  int (__cdecl *v32)(_DWORD, int, int); // edx
  int v33; // eax
  int v34; // ecx
  int v35; // [esp+3Ch] [ebp-5Ch]
  _DWORD v36[4]; // [esp+48h] [ebp-50h] BYREF
  _DWORD v37[4]; // [esp+58h] [ebp-40h] BYREF
  int v38; // [esp+68h] [ebp-30h]
  int v39; // [esp+6Ch] [ebp-2Ch]
  float v40; // [esp+70h] [ebp-28h]
  float v41; // [esp+74h] [ebp-24h]
  float v42; // [esp+78h] [ebp-20h]
  float v43; // [esp+7Ch] [ebp-1Ch]
  float v44; // [esp+80h] [ebp-18h]
  float v45; // [esp+84h] [ebp-14h]
  int v46; // [esp+88h] [ebp-10h]
  float v47; // [esp+8Ch] [ebp-Ch]
  int v48; // [esp+90h] [ebp-8h] BYREF
  float v49; // [esp+94h] [ebp-4h]

  if ( 0.0 != *(float *)(a1 + 16) && (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)a1 + 20))(a1) )
  {
    v7 = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_1047C96C + 380))(dword_1047C96C, a2);
    if ( v7 )
      (*(void (__thiscall **)(int))(*(_DWORD *)v7 + 8))(v7);
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v7 + 80))(v7, 0);
    (*(void (__thiscall **)(int))(*(_DWORD *)v7 + 84))(v7);
    (*(void (__thiscall **)(int))(*(_DWORD *)v7 + 124))(v7);
    (*(void (__thiscall **)(int, int))(*(_DWORD *)v7 + 80))(v7, 1);
    (*(void (__thiscall **)(int))(*(_DWORD *)v7 + 84))(v7);
    (*(void (__thiscall **)(int))(*(_DWORD *)v7 + 124))(v7);
    if ( *(_BYTE *)(a1 + 20) )
    {
      v37[0] = a3;
      v37[3] = a6;
      v37[1] = a4;
      v8 = *(_DWORD *)(a1 + 4);
      v37[2] = a5;
      (*(void (__thiscall **)(int, int, _DWORD, _DWORD *, _DWORD))(*(_DWORD *)v7 + 444))(v7, v8, 0, v37, 0);
      *(_BYTE *)(a1 + 20) = 0;
    }
    v48 = 0xFFFFFF;
    HIBYTE(v48) = sub_101A77C0(a1);
    if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)dword_1047C97C + 236))(dword_1047C97C) )
    {
      LODWORD(v47) = (int)((double)HIBYTE(v48) * 0.69999999);
      HIBYTE(v48) = LOBYTE(v47);
    }
    if ( *(_BYTE *)(a1 + 22) )
    {
      if ( !HIBYTE(v48) )
      {
        ((void (__thiscall *)(int (***)(), const char *))(*off_103E4FC0)[8])(off_103E4FC0, "episodic_intro");
        *(_BYTE *)(a1 + 20) = 1;
      }
    }
    v9 = *(int **)(a1 + 4);
    v10 = *v9;
    v40 = cos(*((float *)off_103DC81C + 3));
    v41 = cos(*((float *)off_103DC81C + 3) * 6.0);
    v42 = v40;
    v43 = *((float *)off_103DC81C + 3) * 5.0;
    v11 = *(int (__thiscall **)(int *))(v10 + 12);
    v49 = cos(*((float *)off_103DC81C + 3) + *((float *)off_103DC81C + 3))
        * 0.0099999998
        * cos(*((float *)off_103DC81C + 3) * 0.5)
        + 0.02;
    v12 = v11(v9);
    v13 = *(int **)(a1 + 4);
    v14 = *v13;
    LODWORD(v47) = v12 - 1;
    v15 = (double)(v12 - 1);
    v16 = *(int (__thiscall **)(int *))(v14 + 16);
    v47 = v15 * v49 * 0.5;
    v17 = v16(v13);
    v18 = *(int **)(a1 + 4);
    v19 = *v18;
    v46 = v17 - 1;
    v20 = (double)(v17 - 1);
    v21 = *(int (__thiscall **)(int *))(v19 + 12);
    v49 = v20 * v49 * 0.5;
    v22 = v21(v18);
    v23 = *(int **)(a1 + 4);
    v24 = *v23;
    v46 = v22 - 1;
    v25 = (double)(v22 - 1);
    v26 = *(int (__thiscall **)(int *))(v24 + 16);
    v44 = v25 - v47;
    v27 = v26(v23);
    v28 = *(_DWORD *)(a1 + 8);
    v29 = *(_DWORD *)(a1 + 4);
    v46 = v27 - 1;
    v30 = (double)(v27 - 1);
    v31 = *(_DWORD *)v7;
    v36[0] = 1;
    v39 = v28;
    v32 = *(int (__cdecl **)(_DWORD, int, int))(*(_DWORD *)v29 + 16);
    v45 = v30 - v49;
    v46 = v29;
    v38 = v31;
    v33 = v32(0, 1, 1);
    v35 = (*(int (__thiscall **)(int, int))(*(_DWORD *)v46 + 12))(v46, v33);
    (*(void (__thiscall **)(int, int, int, int, int, int, float, float, float, float, int))(v38 + 412))(
      v7,
      v39,
      (int)(fabs(v41 * v40) * -2.0),
      (int)(cos(v43) * (v42 + v42)),
      a5,
      a6,
      COERCE_FLOAT(LODWORD(v47)),
      COERCE_FLOAT(LODWORD(v49)),
      COERCE_FLOAT(LODWORD(v44)),
      COERCE_FLOAT(LODWORD(v45)),
      v35);
    (*(void (__thiscall **)(int, int *, _DWORD))(*(_DWORD *)dword_10413168 + 96))(
      dword_10413168,
      &v48,
      *(_DWORD *)(a1 + 8));
    v36[0] = a3;
    v36[3] = a6;
    v36[1] = a4;
    v34 = *(_DWORD *)(a1 + 4);
    v36[2] = a5;
    (*(void (__thiscall **)(int, int, _DWORD, _DWORD *, _DWORD))(*(_DWORD *)v7 + 444))(v7, v34, 0, v36, 0);
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v7 + 80))(v7, 0);
    (*(void (__thiscall **)(int))(*(_DWORD *)v7 + 88))(v7);
    (*(void (__thiscall **)(int, int))(*(_DWORD *)v7 + 80))(v7, 1);
    (*(void (__thiscall **)(int))(*(_DWORD *)v7 + 88))(v7);
    (*(void (__thiscall **)(int))(*(_DWORD *)v7 + 12))(v7);
    (*(void (__thiscall **)(int))(*(_DWORD *)v7 + 4))(v7);
  }
}
