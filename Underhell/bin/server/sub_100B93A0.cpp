char __userpurge sub_100B93A0@<al>(int a1@<ecx>, int *a2@<ebx>, char a3)
{
  unsigned int v4; // eax
  int *v5; // ecx
  int v6; // edi
  int v7; // eax
  int v8; // ecx
  double v9; // st6
  double v10; // st5
  double v11; // rt0
  double v12; // st5
  double v13; // st6
  int v14; // esi
  int v15; // eax
  int v16; // eax
  float *v18; // ebx
  float *v19; // eax
  double v20; // st7
  int (__thiscall *v21)(int, int *); // edx
  int v22; // ebx
  double v23; // st5
  float *v24; // eax
  int (__thiscall *v25)(int); // edx
  float *v26; // eax
  int *v27; // ecx
  double v28; // st7
  int (__thiscall *v29)(int, float *, int *); // edx
  int v30; // ebx
  double v31; // st4
  float *v32; // eax
  int (__thiscall *v33)(int); // edx
  float *v34; // eax
  int *v35; // [esp+1Ch] [ebp-A8h]
  int v36[3]; // [esp+28h] [ebp-9Ch] BYREF
  int v37; // [esp+34h] [ebp-90h]
  float v38; // [esp+38h] [ebp-8Ch]
  float v39; // [esp+3Ch] [ebp-88h]
  float v40; // [esp+54h] [ebp-70h]
  int v41; // [esp+74h] [ebp-50h]
  int v42[3]; // [esp+7Ch] [ebp-48h] BYREF
  float v43[3]; // [esp+88h] [ebp-3Ch] BYREF
  float v44; // [esp+94h] [ebp-30h]
  float v45; // [esp+98h] [ebp-2Ch]
  float v46; // [esp+9Ch] [ebp-28h]
  int v47; // [esp+A0h] [ebp-24h] BYREF
  float v48; // [esp+A4h] [ebp-20h]
  float v49; // [esp+A8h] [ebp-1Ch]
  float v50; // [esp+ACh] [ebp-18h]
  float v51; // [esp+B0h] [ebp-14h]
  float v52; // [esp+B4h] [ebp-10h]
  int v53; // [esp+B8h] [ebp-Ch] BYREF
  float v54; // [esp+BCh] [ebp-8h]
  float v55; // [esp+C0h] [ebp-4h]
  int savedregs; // [esp+C4h] [ebp+0h] BYREF

  v4 = *(_DWORD *)(a1 + 8);
  if ( v4 == -1 || (v5 = &off_1061BE18[4 * (*(_DWORD *)(a1 + 8) & 0xFFF) + 1], v5[1] != v4 >> 12) )
    v6 = 0;
  else
    v6 = *v5;
  v7 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(a1 + 4) + 1868))(*(_DWORD *)(a1 + 4));
  v8 = sub_100773C0(v7, v6, 0);
  if ( a3 && *(float *)(a1 + 12) <= 0.0 )
  {
    if ( *(float *)(a1 + 52) <= 0.1 )
      return 1;
    if ( v8 )
      v9 = *(float *)(v8 + 28);
    else
      v9 = -3.402823466385289e38;
    if ( v8 )
      v10 = *(float *)(v8 + 44);
    else
      v10 = -3.402823466385289e38;
    v35 = a2;
    if ( -3.402823466385289e38 == v9 )
    {
      v13 = v10;
    }
    else
    {
      v11 = v10;
      v12 = *(float *)(dword_106B31C8 + 12) - v9;
      v13 = v11;
      if ( v12 <= *(float *)(a1 + 52) )
      {
LABEL_16:
        if ( *(_DWORD *)(dword_106954A4 + 48) )
        {
          v14 = *(_DWORD *)(a1 + 4);
          v15 = (*(int (__thiscall **)(int, float *, int *))(*(_DWORD *)v6 + 504))(v6, v43, v35);
          v53 = *(int *)v15;
          v54 = *(float *)(v15 + 4);
          v55 = *(float *)(v15 + 8) - 2.0;
          v16 = (*(int (__thiscall **)(int))(*(_DWORD *)v14 + 504))(v14);
          sub_1011BC50(v16, (int)v42, (int)&v53, 255, 0, 0, 0.0);
        }
        return 1;
      }
    }
    if ( v13 != -3.402823466385289e38 && *(float *)(dword_106B31C8 + 12) - v13 <= *(float *)(a1 + 56) )
      goto LABEL_16;
    v18 = (float *)(*(int (__thiscall **)(_DWORD, int *, int *))(**(_DWORD **)(a1 + 4) + 504))(
                     *(_DWORD *)(a1 + 4),
                     &v53,
                     a2);
    v19 = (float *)(*(int (__thiscall **)(int, int *))(*(_DWORD *)v6 + 504))(v6, &v47);
    v44 = *v19 - *v18;
    v45 = v19[1] - v18[1];
    v46 = 0.0;
    off_10689714();
    v20 = -v45;
    v21 = *(int (__thiscall **)(int, int *))(*(_DWORD *)v6 + 504);
    *(float *)&v53 = v20;
    v22 = *(_DWORD *)(a1 + 4);
    v54 = v44;
    v23 = *(float *)(a1 + 60);
    v50 = v20 * v23;
    v51 = v44 * v23;
    v52 = v23 * 0.0 - *(float *)(a1 + 64);
    v24 = (float *)v21(v6, v42);
    v25 = *(int (__thiscall **)(int))(*(_DWORD *)v22 + 504);
    *(float *)&v47 = *v24 + v50;
    v48 = v24[1] + v51;
    v49 = v24[2] + v52;
    v26 = (float *)v25(v22);
    sub_1002A5F0((int)&savedregs, a1, v26, v43, (int)&v47, 16449, v22, 0);
    if ( 1.0 == v40 || v41 == v6 )
    {
      v28 = *(float *)(a1 + 64);
      v29 = *(int (__thiscall **)(int, float *, int *))(*(_DWORD *)v6 + 504);
      v30 = *(_DWORD *)(a1 + 4);
      v31 = *(float *)(a1 + 60);
      v50 = -*(float *)&v53 * v31;
      v51 = -v54 * v31;
      v52 = v31 * -0.0 - v28;
      v32 = (float *)v29(v6, v43, v36);
      v33 = *(int (__thiscall **)(int))(*(_DWORD *)v30 + 504);
      *(float *)&v53 = v50 + *v32;
      v54 = v32[1] + v51;
      v35 = v36;
      v55 = v32[2] + v52;
      v34 = (float *)v33(v30);
      sub_1002A5F0((int)&savedregs, a1, v34, (float *)v42, (int)&v53, 16449, v30, 0);
      if ( 1.0 == v40 || v41 == v6 )
        goto LABEL_16;
      if ( !*(_DWORD *)(dword_106954A4 + 48) )
        return 0;
      v53 = v37;
      v27 = &v53;
      v54 = v38;
      v55 = v39 - 2.0;
    }
    else
    {
      if ( !*(_DWORD *)(dword_106954A4 + 48) )
        return 0;
      v47 = v37;
      v27 = &v47;
      v48 = v38;
      v49 = v39 - 2.0;
    }
    sub_1011BC50((int)v36, (int)v27, 0, 255, 0, 0, 0.1);
    return 0;
  }
  return 0;
}
