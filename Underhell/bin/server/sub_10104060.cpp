int __cdecl sub_10104060(_DWORD *a1, _DWORD *a2, int a3, int a4, int a5, int a6, float *a7, float a8, int a9)
{
  int v9; // ebx
  int *v10; // eax
  int v11; // edx
  int v12; // edi
  double v13; // st7
  _DWORD *v14; // ecx
  float *v15; // esi
  int v16; // edi
  int v17; // eax
  double v18; // st5
  int v19; // eax
  double v20; // st6
  char *v21; // eax
  double v22; // st6
  int v23; // eax
  double v24; // st6
  double v25; // st7
  int v26; // eax
  _BYTE v28[48]; // [esp+14h] [ebp-148h] BYREF
  _BYTE v29[48]; // [esp+44h] [ebp-118h] BYREF
  char v30[12]; // [esp+74h] [ebp-E8h] BYREF
  int v31[4]; // [esp+80h] [ebp-DCh] BYREF
  int v32[4]; // [esp+90h] [ebp-CCh] BYREF
  int v33[4]; // [esp+A0h] [ebp-BCh] BYREF
  _BYTE v34[12]; // [esp+B0h] [ebp-ACh] BYREF
  _BYTE v35[12]; // [esp+BCh] [ebp-A0h] BYREF
  _BYTE v36[12]; // [esp+C8h] [ebp-94h] BYREF
  _BYTE v37[48]; // [esp+D4h] [ebp-88h] BYREF
  int v38; // [esp+104h] [ebp-58h]
  int v39; // [esp+108h] [ebp-54h]
  char *v40; // [esp+10Ch] [ebp-50h]
  _DWORD v41[4]; // [esp+110h] [ebp-4Ch] BYREF
  _DWORD v42[4]; // [esp+120h] [ebp-3Ch] BYREF
  char *v43; // [esp+130h] [ebp-2Ch]
  float v44; // [esp+134h] [ebp-28h]
  char *v45; // [esp+138h] [ebp-24h]
  int *v46; // [esp+13Ch] [ebp-20h]
  int v47; // [esp+140h] [ebp-1Ch]
  char *v48; // [esp+144h] [ebp-18h]
  char *v49; // [esp+148h] [ebp-14h]
  float *v50; // [esp+14Ch] [ebp-10h]
  int v51; // [esp+150h] [ebp-Ch]
  int *v52; // [esp+154h] [ebp-8h]
  int *v53; // [esp+158h] [ebp-4h]

  sub_10422700(v37);
  v9 = 0;
  v49 = (char *)sub_100FE100(&dword_1069A680);
  if ( !v49 )
  {
    v49 = (char *)sub_10184390(6144);
    if ( ((unsigned __int8)v49 & 7) != 0 )
      __debugbreak();
  }
  memset(v42, 0, sizeof(v42));
  v48 = (char *)sub_100FE100(&dword_1069A680);
  if ( !v48 )
  {
    v48 = (char *)sub_10184390(6144);
    if ( ((unsigned __int8)v48 & 7) != 0 )
      __debugbreak();
  }
  memset(v41, 0, sizeof(v41));
  v10 = sub_100FE100(&dword_1069A680);
  v52 = v10;
  if ( !v10 )
  {
    v52 = (int *)sub_10184390(6144);
    if ( ((unsigned __int8)v52 & 7) != 0 )
      __debugbreak();
    v10 = v52;
  }
  v11 = a1[1];
  v47 = 0;
  if ( v11 )
    v47 = *(_DWORD *)(v11 + 88) + 144 * *(_DWORD *)(*(_DWORD *)(v11 + 8) + 16 * a5 + 8);
  v12 = *a1 + *(_DWORD *)(*a1 + 160);
  if ( *(int *)(*a1 + 156) > 0 )
  {
    v13 = a8;
    v14 = a2;
    v50 = a7;
    v43 = (char *)a7 - a3;
    v38 = a6 - (_DWORD)a2;
    v46 = (int *)(v12 + 4);
    v39 = v48 - v49;
    v15 = (float *)(a3 + 8);
    v51 = (int)a2;
    v53 = v10;
    v40 = (char *)(v49 - (char *)v10);
    do
    {
      if ( (a9 & *(_DWORD *)(a1[11] + 4 * v9)) != 0 )
      {
        v16 = *v46;
        if ( v47 )
        {
          v17 = *(_DWORD *)(*(_DWORD *)(v47 + 4) + 4 * v9);
          if ( v17 < 0 )
            goto LABEL_30;
          v18 = *(float *)(*(_DWORD *)(a4 + 156) + 4 * v17 + a4) * v13;
          v44 = v18;
          if ( v16 == -1 )
            goto LABEL_25;
          v19 = *(_DWORD *)(a4 + 156) + 4 * *(_DWORD *)(*(_DWORD *)(v47 + 4) + 4 * v16);
        }
        else
        {
          v18 = *(float *)(*(_DWORD *)(a4 + 156) + 4 * v9 + a4) * v13;
          v44 = v18;
          if ( v16 == -1 )
            goto LABEL_25;
          v19 = *(_DWORD *)(a4 + 156) + 4 * v16;
        }
        if ( 1.0 != *(float *)(v19 + a4) * v13 )
        {
LABEL_25:
          v20 = v18;
LABEL_26:
          if ( v20 > 0.0 )
          {
            sub_10102F30((int)a1, (int)v37, a3, (int)a2, v9, (int)v48, (int)v41);
            sub_10102F30((int)a1, (int)v37, (int)a7, a6, v9, (int)v49, (int)v42);
            v45 = (char *)v53 + (_DWORD)v40;
            sub_10424D60((char *)v53 + (_DWORD)v40 + v39, v32, v36);
            sub_10424D60(v45, v33, v30);
            sub_104251E0((int)v32, (int)v33, v44, (int)v31);
            sub_104252F0(v31, v34);
            sub_104256B0(v34, v36, v53);
            if ( v16 == -1 )
            {
              sub_10424D60(v53, v51, v35);
              v13 = a8;
              v14 = (_DWORD *)v51;
            }
            else
            {
              sub_10424F80(&v52[12 * v16], v29);
              sub_10421E30(v29, v53, v28);
              sub_10424D60(v28, v51, v35);
              v14 = (_DWORD *)v51;
              v24 = (*(float *)((char *)v15 + (_DWORD)v43 - 4) - *(v15 - 1)) * v44 + *(v15 - 1);
              v25 = (*(float *)((char *)v15 + (_DWORD)v43) - *v15) * v44 + *v15;
              *(v15 - 2) = (*v50 - *(v15 - 2)) * v44 + *(v15 - 2);
              *(v15 - 1) = v24;
              *v15 = v25;
              v13 = a8;
            }
          }
          goto LABEL_30;
        }
        v20 = v18;
        if ( v18 != 1.0 )
          goto LABEL_26;
        v21 = v43;
        *(v15 - 2) = *v50;
        *(v15 - 1) = *(float *)((char *)v15 + (_DWORD)v21 - 4);
        v22 = *(float *)((char *)v15 + (_DWORD)v21);
        v23 = v38;
        *v15 = v22;
        *v14 = *(_DWORD *)((char *)v14 + v23);
        v14[1] = *(_DWORD *)((char *)v14 + v23 + 4);
        v14[2] = *(_DWORD *)((char *)v14 + v23 + 8);
        v14[3] = *(_DWORD *)((char *)v14 + v23 + 12);
      }
LABEL_30:
      v26 = *a1;
      v46 += 54;
      v53 += 12;
      v50 += 3;
      ++v9;
      v14 += 4;
      v15 += 3;
      v51 = (int)v14;
    }
    while ( v9 < *(_DWORD *)(v26 + 156) );
  }
  sub_100FE090(&dword_1069A680, (int *)v49);
  sub_100FE090(&dword_1069A680, (int *)v48);
  return sub_100FE090(&dword_1069A680, v52);
}
