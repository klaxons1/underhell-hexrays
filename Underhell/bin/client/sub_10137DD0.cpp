void __thiscall sub_10137DD0(float *this, int a2, int a3, int a4, int a5, float a6, float *a7, int a8)
{
  int v9; // ecx
  double v10; // st7
  float *v11; // ebx
  int v12; // edi
  double v13; // st7
  double v14; // st6
  double v15; // st5
  float *v16; // eax
  int *v17; // edi
  float *v18; // eax
  double v19; // st7
  float v20; // [esp+2Ch] [ebp-38h]
  int v21[3]; // [esp+3Ch] [ebp-28h] BYREF
  int v22[3]; // [esp+48h] [ebp-1Ch] BYREF
  int v23; // [esp+54h] [ebp-10h] BYREF
  float v24; // [esp+58h] [ebp-Ch]
  float v25; // [esp+5Ch] [ebp-8h]
  float *v26; // [esp+60h] [ebp-4h]
  float **v27; // [esp+70h] [ebp+Ch]

  v26 = this;
  v27 = (float **)(a3 + 868);
  sub_10136DD0(this, v27);
  v10 = 0.0;
  v11 = *v27;
  v12 = 0;
  if ( (*(_BYTE *)(a3 + 52) & 1) != 0 )
  {
    if ( !v11 )
    {
      v12 = *(_DWORD *)(v9 + 24);
      if ( !v12 )
        return;
      *(_DWORD *)(v9 + 24) = *(_DWORD *)v12;
      goto LABEL_8;
    }
    v13 = v11[2] - *(float *)(a3 + 60);
    *(float *)&v23 = v13;
    v14 = v11[3] - *(float *)(a3 + 64);
    v24 = v14;
    v15 = v11[4] - *(float *)(a3 + 68);
    v25 = v15;
    v20 = v13 * v13 + v14 * v14 + v15 * v15;
    v10 = off_103EDFE0(v20);
    if ( v10 >= 32.0 )
    {
      v16 = (float *)*((_DWORD *)v26 + 6);
      if ( v16 )
      {
        v12 = *((_DWORD *)v26 + 6);
        v26[6] = *v16;
LABEL_8:
        *(float *)(v12 + 8) = *(float *)(a3 + 60);
        *(float *)(v12 + 12) = *(float *)(a3 + 64);
        *(float *)(v12 + 16) = *(float *)(a3 + 68);
        *(float *)(v12 + 4) = *((float *)off_103DC81C + 3) + *(float *)(a3 + 216);
        *(float *)(v12 + 20) = flt_10459240;
        *(_QWORD *)(v12 + 24) = qword_10459244;
        *(float *)(a3 + 200) = *((float *)off_103DC81C + 3) + *(float *)(a3 + 216);
        *(_DWORD *)v12 = v11;
        *v27 = (float *)v12;
        v11 = (float *)v12;
      }
    }
  }
  else
  {
    v10 = 0.0;
  }
  if ( !v11 )
    return;
  if ( v12 || 0.0 == v10 )
  {
    if ( !*(_DWORD *)v11 )
      return;
    v23 = *((int *)v11 + 2);
    v17 = v22;
    v24 = v11[3];
    v25 = v11[4];
    (*(void (__thiscall **)(int, float *, int *))(*(_DWORD *)dword_1041316C + 40))(dword_1041316C, v11 + 2, v22);
    (*(void (__stdcall **)(int, int *))(*(_DWORD *)dword_1041316C + 40))(*(_DWORD *)v11 + 8, v21);
  }
  else
  {
    v23 = *(int *)(a3 + 60);
    v24 = *(float *)(a3 + 64);
    v25 = *(float *)(a3 + 68);
    (*(void (__thiscall **)(int, int, int *))(*(_DWORD *)dword_1041316C + 40))(dword_1041316C, a3 + 60, v22);
    v17 = v21;
    (*(void (__thiscall **)(int, float *, int *))(*(_DWORD *)dword_1041316C + 40))(dword_1041316C, v11 + 2, v21);
  }
  sub_10019B50(
    (int)v11,
    (int)v17,
    (int)v27,
    a2,
    *v27,
    a4,
    a5,
    (float *)&v23,
    (float *)v21,
    (float *)v22,
    *(float *)(a3 + 200),
    a3 + 60,
    *(_DWORD *)(a3 + 52),
    *(float *)(a3 + 204),
    *(float *)(a3 + 216),
    COERCE_INT(*(float *)(a3 + 196)),
    a7,
    1.0);
  v18 = *v27;
  if ( *v27 )
  {
    v19 = a6;
    do
    {
      v18[2] = v19 * v18[5] + v18[2];
      v18[3] = v18[6] * v19 + v18[3];
      v18[4] = v18[7] * v19 + v18[4];
      v18 = *(float **)v18;
    }
    while ( v18 );
  }
}
