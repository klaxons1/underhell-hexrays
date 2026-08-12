void __userpurge sub_100A8130(_DWORD *a1@<ecx>, int a2@<ebx>, int a3@<edi>, float *a4, int a5)
{
  float *v6; // eax
  float *v7; // eax
  double v8; // st7
  int v9; // eax
  int v10; // ebx
  int v11; // eax
  float *v12; // eax
  int v13; // ebx
  double v14; // st7
  int v15; // eax
  int v16; // ebx
  double v17; // st7
  int v18; // eax
  float *v19; // eax
  double v20; // st7
  float *v21; // eax
  float *v22; // ecx
  double v23; // st2
  int v24; // ecx
  double v25; // st7
  float v27; // [esp+4h] [ebp-3Ch]
  float v28; // [esp+8h] [ebp-38h]
  float v29; // [esp+Ch] [ebp-34h]
  float v30; // [esp+10h] [ebp-30h]
  float v31; // [esp+14h] [ebp-2Ch]
  float v32; // [esp+18h] [ebp-28h]
  float v33; // [esp+1Ch] [ebp-24h]
  float v34; // [esp+20h] [ebp-20h]
  float v35; // [esp+24h] [ebp-1Ch]
  float v36; // [esp+28h] [ebp-18h]
  float v37; // [esp+2Ch] [ebp-14h]
  float v38; // [esp+30h] [ebp-10h]
  float v39; // [esp+34h] [ebp-Ch] BYREF
  float v40; // [esp+38h] [ebp-8h]
  float v41; // [esp+3Ch] [ebp-4h]
  int v42; // [esp+48h] [ebp+8h]
  int v43; // [esp+48h] [ebp+8h]

  v39 = *a4;
  v40 = a4[1];
  v6 = (float *)a1[2];
  v41 = a4[2];
  v33 = v6[38];
  v34 = v6[39];
  v35 = v6[40];
  v27 = v6[16];
  v28 = v6[17];
  v29 = v6[18];
  (*(void (__thiscall **)(_DWORD *, float *, int, int))(*a1 + 112))(a1, &v39, a5, a3);
  v7 = (float *)a1[2];
  v30 = v7[38];
  v31 = v7[39];
  v32 = v7[40];
  v36 = v7[16];
  v37 = v7[17];
  v38 = v7[18];
  v7[38] = v33;
  v7[39] = v34;
  v7[40] = v35;
  v7[16] = v27;
  v7[17] = v28;
  v7[18] = v29;
  v39 = v7[38];
  v40 = v7[39];
  v8 = v7[40];
  v9 = a1[1];
  v41 = v8;
  if ( *(_BYTE *)(v9 + 3688) )
    v41 = v8 + *(float *)(v9 + 3684) + 0.03125;
  v42 = *a1;
  v10 = a1[2] + 152;
  v11 = (*(int (__thiscall **)(_DWORD *, _DWORD, int, int, int))(*a1 + 44))(a1, 0, 8, a5, a2);
  (*(void (__thiscall **)(_DWORD *, int, float *, int))(v42 + 40))(a1, v10, &v39, v11);
  if ( !*(_BYTE *)(a5 + 55) && !*(_BYTE *)(a5 + 54) )
  {
    v12 = (float *)a1[2];
    v12[38] = *(float *)(a5 + 12);
    v12[39] = *(float *)(a5 + 16);
    v12[40] = *(float *)(a5 + 20);
  }
  (*(void (__thiscall **)(_DWORD *, _DWORD, _DWORD))(*a1 + 112))(a1, 0, 0);
  v13 = a1[2];
  v14 = *(float *)(v13 + 152);
  v15 = a1[1];
  v16 = v13 + 152;
  v39 = v14;
  v40 = *(float *)(v16 + 4);
  v17 = *(float *)(v16 + 8);
  v41 = *(float *)(v16 + 8);
  if ( *(_BYTE *)(v15 + 3688) )
    v41 = v17 - (*(float *)(v15 + 3684) + 0.03125);
  v43 = *a1;
  v18 = (*(int (__thiscall **)(_DWORD *, _DWORD))(*a1 + 44))(a1, 0);
  (*(void (__thiscall **)(_DWORD *, int, float *, int))(v43 + 40))(a1, v16, &v39, v18);
  if ( *(float *)(a5 + 32) >= 0.7 )
  {
    if ( !*(_BYTE *)(a5 + 55) && !*(_BYTE *)(a5 + 54) )
    {
      v21 = (float *)a1[2];
      v21[38] = *(float *)(a5 + 12);
      v21[39] = *(float *)(a5 + 16);
      v21[40] = *(float *)(a5 + 20);
    }
    v22 = (float *)a1[2];
    v23 = v22[38] - v33;
    if ( (v31 - v34) * (v31 - v34) + (v30 - v33) * (v30 - v33) > v23 * v23 + (v22[39] - v34) * (v22[39] - v34) )
    {
      v22[38] = v30;
      v22[39] = v31;
      v22[40] = v32;
      v22[16] = v36;
      v22[17] = v37;
    }
    v22[18] = v38;
    v24 = a1[2];
    v25 = *(float *)(v24 + 160) - v35;
    if ( v25 > 0.0 )
      *(float *)(v24 + 100) = v25 + *(float *)(v24 + 100);
  }
  else
  {
    v19 = (float *)a1[2];
    v19[38] = v30;
    v19[39] = v31;
    v19[40] = v32;
    v19[16] = v36;
    v19[17] = v37;
    v19[18] = v38;
    v20 = v19[40] - v35;
    if ( v20 > 0.0 )
      *(float *)(a1[2] + 100) = v20 + *(float *)(a1[2] + 100);
  }
}
