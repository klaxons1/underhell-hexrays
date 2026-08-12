void __usercall sub_100215E0(
        int a1@<ebp>,
        int a2@<edi>,
        int a3@<esi>,
        _DWORD *a4,
        float *a5,
        int a6,
        int a7,
        int a8,
        float a9,
        float *a10,
        float a11,
        int a12)
{
  double v12; // st7
  int v13; // eax
  int v14; // edi
  void *v15; // esp
  float *v16; // eax
  int v17; // ecx
  double v18; // st7
  float v19; // esi
  double v20; // st6
  int v21; // edx
  int v22; // edx
  float *v23; // edi
  float *v24; // esi
  double v25; // st7
  double v26; // st7
  float *v27; // eax
  int v28; // ecx
  double v29; // st7
  int v30; // ecx
  float *v31; // edi
  float *v32; // esi
  int v33; // edx
  double v34; // st7
  int v35; // edx
  bool v36; // zf
  float *v37; // eax
  int v38; // ecx
  double v39; // st6
  double v40; // st7
  double v41; // st5
  float v42; // [esp+0h] [ebp-94h]
  float v43; // [esp+0h] [ebp-94h]
  _DWORD v44[4]; // [esp+8h] [ebp-8Ch] BYREF
  _BYTE v45[16]; // [esp+18h] [ebp-7Ch] BYREF
  _BYTE v46[16]; // [esp+28h] [ebp-6Ch] BYREF
  float v47[4]; // [esp+38h] [ebp-5Ch] BYREF
  float v48[4]; // [esp+48h] [ebp-4Ch] BYREF
  float v49[4]; // [esp+58h] [ebp-3Ch] BYREF
  int v50; // [esp+68h] [ebp-2Ch]
  int v51; // [esp+6Ch] [ebp-28h]
  float i; // [esp+70h] [ebp-24h]
  _DWORD *v53; // [esp+74h] [ebp-20h]
  int v54; // [esp+78h] [ebp-1Ch]
  float v55; // [esp+7Ch] [ebp-18h]
  float *v56; // [esp+80h] [ebp-14h]
  int v57; // [esp+84h] [ebp-10h]
  int v58; // [esp+88h] [ebp-Ch]
  void *v59; // [esp+8Ch] [ebp-8h]
  void *retaddr; // [esp+94h] [ebp+0h]

  v58 = a1;
  v59 = retaddr;
  v44[1] = a3;
  v44[0] = a2;
  v12 = a11;
  if ( a11 > 0.0 )
  {
    if ( v12 > 1.0 )
    {
      v12 = 1.0;
      a11 = 1.0;
    }
    v55 = *(float *)(a7 + 12);
    if ( (LOWORD(v55) & 0x4000) != 0 )
    {
      v42 = v12;
      sub_100211E0(a4, a5, a6, a7, a8, SLODWORD(a9), a10, v42, a12);
      return;
    }
    v13 = a4[1];
    v54 = 0;
    if ( v13 )
      v54 = *(_DWORD *)(v13 + 88) + 144 * *(_DWORD *)(*(_DWORD *)(v13 + 8) + 16 * a8 + 8);
    v51 = *(_DWORD *)(*a4 + 156);
    v14 = v51;
    v15 = alloca(4 * v51);
    v16 = (float *)v44;
    v17 = 0;
    v53 = v44;
    if ( v51 > 0 )
    {
      v18 = a11;
      LODWORD(v19) = a4[11] - (_DWORD)v44;
      for ( i = v19; ; v19 = i )
      {
        if ( (a12 & *(_DWORD *)((_BYTE *)v16 + LODWORD(v19))) == 0 )
          goto LABEL_16;
        if ( !v54 )
        {
          v20 = *(float *)(*(_DWORD *)(a7 + 156) + 4 * v17 + a7) * v18;
          goto LABEL_17;
        }
        v21 = *(_DWORD *)(*(_DWORD *)(v54 + 4) + 4 * v17);
        if ( v21 >= 0 )
          v20 = *(float *)(*(_DWORD *)(a7 + 156) + 4 * v21 + a7) * v18;
        else
LABEL_16:
          v20 = 0.0;
LABEL_17:
        *v16 = v20;
        ++v17;
        ++v16;
        if ( v17 >= v14 )
          break;
      }
    }
    if ( (LOBYTE(v55) & 4) != 0 )
    {
      v57 = 0;
      if ( v14 > 0 )
      {
        v22 = LODWORD(a9);
        v56 = a10;
        v23 = a5 + 2;
        i = a9;
        v24 = (float *)(a6 + 4);
        v54 = (int)a10 - a6;
        do
        {
          v25 = *(float *)&v53[v57];
          v55 = *(float *)&v53[v57];
          if ( v25 > 0.0 )
          {
            v43 = v25;
            if ( (*(_BYTE *)(a7 + 12) & 0x10) != 0 )
            {
              sub_101EEBE0(v22, v43, (int)v46);
              sub_101EECB0(v23 - 2, v46, v49);
              sub_101EEB80(v49);
              *(v23 - 2) = v49[0];
              *(v23 - 1) = v49[1];
              *v23 = v49[2];
              v26 = v49[3];
            }
            else
            {
              sub_101EEBE0(v22, v43, (int)v45);
              sub_101EECB0(v45, v23 - 2, v48);
              sub_101EEB80(v48);
              *(v23 - 2) = v48[0];
              *(v23 - 1) = v48[1];
              *v23 = v48[2];
              v26 = v48[3];
            }
            v27 = v56;
            v23[1] = v26;
            v28 = v54;
            v29 = v55;
            *(v24 - 1) = *v27 * v55 + *(v24 - 1);
            *v24 = *(float *)((char *)v24 + v28) * v29 + *v24;
            v24[1] = v29 * v27[2] + v24[1];
          }
          v56 += 3;
          v22 = LODWORD(i) + 16;
          v23 += 4;
          v24 += 3;
          ++v57;
          LODWORD(i) += 16;
        }
        while ( v57 < v51 );
      }
    }
    else
    {
      v30 = 0;
      v57 = 0;
      if ( v14 > 0 )
      {
        v31 = a5;
        v56 = a10;
        v32 = (float *)(a6 + 4);
        v33 = LODWORD(a9) - (_DWORD)a5;
        v54 = (int)a10 - a6;
        v50 = LODWORD(a9) - (_DWORD)a5;
        do
        {
          v34 = *(float *)&v53[v30];
          v55 = *(float *)&v53[v30];
          if ( v34 > 0.0 )
          {
            v35 = (int)v31 + v33;
            v36 = (*(_DWORD *)(a4[11] + 4 * v30) & 0x100000) == 0;
            i = 1.0 - v34;
            if ( v36 )
              sub_101F0F00(v35, (int)v31, i, (int)v47);
            else
              sub_101EEA50(v35, (int)v31, i, (int)v47);
            v37 = v56;
            *v31 = v47[0];
            v38 = v54;
            v33 = v50;
            v31[1] = v47[1];
            v31[2] = v47[2];
            v31[3] = v47[3];
            v39 = i;
            v40 = v55;
            *(v32 - 1) = *(v32 - 1) * i + v55 * *v37;
            v41 = *(float *)((char *)v32 + v38);
            v30 = v57;
            *v32 = v41 * v40 + *v32 * v39;
            v32[1] = v40 * v37[2] + v39 * v32[1];
          }
          v56 += 3;
          ++v30;
          v31 += 4;
          v32 += 3;
          v57 = v30;
        }
        while ( v30 < v51 );
      }
    }
  }
}
