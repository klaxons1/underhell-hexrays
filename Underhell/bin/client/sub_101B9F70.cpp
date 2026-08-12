char __stdcall sub_101B9F70(int a1, float a2, float a3, int a4, int a5, unsigned __int8 *a6, float a7, int *a8)
{
  int v9; // eax
  int v10; // edx
  _DWORD *v11; // eax
  int v12; // edx
  int v13; // esi
  int v14; // eax
  int v15; // eax
  int v17; // eax
  int v18; // esi
  unsigned __int8 *v19; // eax
  int v20; // edx
  double v21; // st7
  int v22; // edi
  double v23; // st7
  double v24; // st6
  int v25; // eax
  double v26; // st7
  double v27; // st7
  float v28; // [esp+30h] [ebp-74h]
  float v29; // [esp+30h] [ebp-74h]
  int v30; // [esp+40h] [ebp-64h] BYREF
  float v31; // [esp+44h] [ebp-60h]
  float v32; // [esp+48h] [ebp-5Ch]
  float v33; // [esp+4Ch] [ebp-58h]
  float v34; // [esp+50h] [ebp-54h]
  float v35; // [esp+54h] [ebp-50h]
  __int16 v36; // [esp+58h] [ebp-4Ch]
  int v37[3]; // [esp+5Ch] [ebp-48h] BYREF
  int v38[3]; // [esp+68h] [ebp-3Ch] BYREF
  int v39[3]; // [esp+74h] [ebp-30h] BYREF
  _DWORD v40[3]; // [esp+80h] [ebp-24h] BYREF
  int v41; // [esp+8Ch] [ebp-18h] BYREF
  float v42; // [esp+90h] [ebp-14h]
  float v43; // [esp+94h] [ebp-10h]
  int v44; // [esp+98h] [ebp-Ch]
  float v45; // [esp+9Ch] [ebp-8h]
  char v46[4]; // [esp+A0h] [ebp-4h]
  int v47; // [esp+ACh] [ebp+8h]

  v9 = (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 4))(a1);
  v41 = *(int *)v9;
  v42 = *(float *)(v9 + 4);
  v10 = *(_DWORD *)a1;
  v43 = *(float *)(v9 + 8);
  v11 = (_DWORD *)(*(int (__thiscall **)(int))(v10 + 8))(a1);
  v40[0] = *v11;
  v40[1] = v11[1];
  v12 = *(_DWORD *)a1;
  v40[2] = v11[2];
  v13 = *(_DWORD *)dword_10413178;
  v14 = (*(int (__thiscall **)(int))(v12 + 36))(a1);
  v15 = (*(int (__thiscall **)(int, int))(v13 + 40))(dword_10413178, v14);
  v44 = v15;
  if ( !v15 )
    return 0;
  v17 = sub_1021F0F0(v15);
  sub_1006BBA0(v17, (float *)&v41, (int)v40, (float *)v37, (float *)v38, (float *)v39);
  v18 = (int)a6;
  v19 = (unsigned __int8 *)a6[1];
  v47 = a6[2];
  *(_DWORD *)v46 = *a6;
  v20 = *(_DWORD *)dword_10413168;
  a6 = v19;
  v21 = ((double (__thiscall *)(int))*(_DWORD *)(v20 + 20))(dword_10413168);
  v22 = a4;
  v45 = v21;
  v23 = 1.0;
  if ( a4 && (a4 == 3 || a4 == 9) )
  {
    v24 = a7;
    if ( 0.0 == a7 )
    {
      v36 = 1;
      v30 = v41;
      v31 = v42;
      v32 = v43;
      v24 = 2.0;
    }
    else
    {
      v36 = 257;
      v30 = v41;
      v31 = v42;
      v32 = v43;
    }
    v25 = *(unsigned __int8 *)(v18 + 3);
    v33 = v24;
    v34 = 1.0;
    v35 = 0.0625;
    v26 = sub_1006B980((float *)&v30, a8, a4, a5, v25, &a2);
    v27 = v26 * v45;
    if ( v27 <= 0.0 )
      return 0;
    *(_DWORD *)v46 = (int)((double)*(int *)v46 * v27);
    a6 = (unsigned __int8 *)(int)((double)(int)a6 * v27);
    v47 = (int)((double)v47 * v27);
    v28 = v27;
    (*(void (__stdcall **)(_DWORD))(*(_DWORD *)dword_10413168 + 16))(LODWORD(v28));
    v23 = 1.0;
  }
  v29 = v23;
  sub_1006C050(
    a1,
    v22,
    v18,
    a1 - 4,
    v44,
    (float *)&v41,
    a2,
    a3,
    *(float *)&v22,
    v46[0],
    (unsigned __int8)a6,
    v47,
    *(_BYTE *)(v18 + 3),
    (int)v37,
    (float *)v38,
    (float *)v39,
    v29);
  if ( v22 == 3 || v22 == 9 )
    (*(void (__stdcall **)(float))(*(_DWORD *)dword_10413168 + 16))(COERCE_FLOAT(LODWORD(v45)));
  return 1;
}
