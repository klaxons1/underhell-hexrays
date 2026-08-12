void __usercall sub_101C41F0(int a1@<ecx>, int a2@<edi>)
{
  __int16 v3; // dx
  __int16 v4; // ax
  int *v5; // ecx
  int *v6; // ecx
  int v7; // ecx
  int *v8; // ecx
  double v9; // st7
  float v10; // edx
  float v11; // eax
  bool v12; // zf
  char v13; // bl
  int v14; // edi
  int v15; // eax
  int v16; // eax
  int v17; // edi
  float *v18; // eax
  double v19; // st4
  double v20; // st7
  double v21; // st4
  double v22; // st5
  _DWORD *v23; // eax
  double v24; // st7
  int *v25; // ebx
  int v26; // edi
  _DWORD *v27; // eax
  _DWORD *v28; // [esp+24h] [ebp-8Ch]
  BOOL v29; // [esp+24h] [ebp-8Ch]
  int v30; // [esp+28h] [ebp-88h]
  float v31; // [esp+28h] [ebp-88h]
  _BYTE v32[84]; // [esp+38h] [ebp-78h] BYREF
  float v33[3]; // [esp+8Ch] [ebp-24h] BYREF
  float v34[3]; // [esp+98h] [ebp-18h] BYREF
  int v35; // [esp+A4h] [ebp-Ch] BYREF
  float v36; // [esp+A8h] [ebp-8h]
  float v37; // [esp+ACh] [ebp-4h]

  v3 = a1 + 716;
  v4 = a1;
  if ( *(_BYTE *)(a1 + 84) )
  {
    *(_BYTE *)(a1 + 88) |= 1u;
  }
  else
  {
    v5 = *(int **)(a1 + 24);
    if ( v5 )
      sub_100194B0(v5, v3 - v4);
  }
  if ( *(_BYTE *)(a1 + 84) )
  {
    *(_BYTE *)(a1 + 88) |= 1u;
  }
  else
  {
    v6 = *(int **)(a1 + 24);
    if ( v6 )
      sub_100194B0(v6, 728);
  }
  v7 = *(_DWORD *)(a1 + 128);
  v37 = *(float *)(dword_106B31C8 + 12);
  if ( v7 != LODWORD(v37) )
  {
    if ( *(_BYTE *)(a1 + 84) )
    {
      *(_BYTE *)(a1 + 88) |= 1u;
    }
    else
    {
      v8 = *(int **)(a1 + 24);
      if ( v8 )
        sub_100194B0(v8, 128);
    }
    *(float *)(a1 + 128) = v37;
  }
  sub_101C8820(a1, 2);
  v36 = COERCE_FLOAT(sub_100E9270((_DWORD *)a1, 0));
  v9 = (double)SLODWORD(v36) * *(float *)(dword_106B31C8 + 28);
  v37 = v9;
  if ( v9 <= 0.0 || v9 - *(float *)(dword_106B31C8 + 12) > 0.5 )
  {
    sub_101C3040(a1, a2, *(float *)(dword_106B31C8 + 16));
    sub_101C7080(a1);
    sub_100E9470((_DWORD *)a1, -1, *(float *)(dword_106B31C8 + 12));
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)a1 + 620))(a1, *(float *)(dword_106B31C8 + 16));
    sub_100E0270((_DWORD *)a1, *(float *)(dword_106B31C8 + 16));
    return;
  }
  if ( (*(_DWORD *)(a1 + 252) & 0x800) != 0 )
    sub_100DAE60(a1);
  v10 = *(float *)(a1 + 584);
  v11 = *(float *)(a1 + 588);
  v33[0] = *(float *)(a1 + 580);
  v12 = *(_DWORD *)(dword_106BA5C4 + 48) == 0;
  v33[1] = v10;
  v33[2] = v11;
  v13 = !v12;
  if ( (unsigned __int8)sub_101C4640(6) )
  {
    v14 = sub_101C46F0(6);
    if ( *(float *)(dword_106B31C8 + 12) < (double)*(float *)(v14 + 4) )
    {
      v13 = 1;
LABEL_24:
      v17 = *(_DWORD *)(a1 + 424);
      if ( v17 && !sub_10019AD0((_DWORD *)a1) )
      {
        (*(void (__thiscall **)(int, float *, _DWORD))(*(_DWORD *)v17 + 276))(v17, v34, 0);
        v18 = (float *)sub_10019640((_DWORD *)a1);
        v19 = *v18 - v34[0];
        v20 = v19 * v19;
        v21 = v18[1] - v34[1];
        v22 = v18[2] - v34[2];
        if ( v22 * v22 + v21 * v21 + v20 < 1.0 )
        {
          v30 = (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 636))(a1);
          v28 = sub_10019640((_DWORD *)a1);
          v23 = sub_10019640((_DWORD *)a1);
          sub_101C11B0((int)v32, a1, (int)v23, (int)v28, v30);
          v13 = v32[55];
        }
        if ( v13 )
        {
          sub_100E0D20(a1, v34);
          sub_100DCB50((void *)a1, 0);
        }
      }
      goto LABEL_30;
    }
    v15 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(a1 + 424) + 280))(*(_DWORD *)(a1 + 424));
    (*(void (__thiscall **)(int, _DWORD, int *))(*(_DWORD *)v15 + 56))(v15, 0, &v35);
    v16 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(a1 + 424) + 280))(*(_DWORD *)(a1 + 424));
    (*(void (__thiscall **)(int, _DWORD, int))(*(_DWORD *)v16 + 8))(v16, *(float *)(v14 + 8), v35);
    sub_101C4770(6);
  }
  if ( v13 )
    goto LABEL_24;
LABEL_30:
  if ( SLODWORD(v36) <= *(_DWORD *)(dword_106B31C8 + 24) )
  {
    if ( *(float *)(dword_106B31C8 + 12) > (double)v37 )
      v37 = *(float *)(dword_106B31C8 + 12);
    v24 = sub_100E92C0((_DWORD *)a1, 0);
    v36 = v37 - v24;
    sub_101C3FD0((_DWORD *)a1, v36);
    sub_101C7080(a1);
    if ( *(_DWORD *)(a1 + 424) )
    {
      if ( (*(_DWORD *)(a1 + 252) & 0x800) != 0 )
        sub_100DAE60(a1);
      if ( !sub_10018D70(v33, (float *)(a1 + 580)) )
      {
        v25 = *(int **)(a1 + 424);
        v26 = *v25;
        v31 = v36;
        v29 = (*(_DWORD *)(a1 + 256) & 0x400) != 0;
        v27 = sub_10019640((_DWORD *)a1);
        (*(void (__thiscall **)(int *, _DWORD *, float *, BOOL, _DWORD))(v26 + 272))(
          v25,
          v27,
          &flt_106F1CB4,
          v29,
          LODWORD(v31));
      }
    }
    sub_100E0270((_DWORD *)a1, v36);
  }
}
