void __thiscall sub_1020BF60(int *this, int a2, int a3, int a4, __int16 a5, int a6)
{
  int *v6; // edi
  int v7; // ebx
  int v8; // ebp
  int v9; // eax
  int v10; // edi
  int v11; // ecx
  float *v12; // edx
  float *v13; // ebx
  int v14; // ebp
  float v15; // ecx
  _DWORD *v16; // ebp
  float *v17; // edx
  float *v18; // ebx
  float v19; // ecx
  _DWORD *v20; // ebp
  float *v21; // eax
  int v22; // eax
  int v23; // ecx
  float *v24; // edx
  float *v25; // ebx
  int v26; // ebp
  float v27; // ecx
  _DWORD *v28; // ebp
  int v29; // eax
  int v30; // ecx
  float *v31; // edx
  float *v32; // ebx
  int v33; // ebp
  float v34; // ecx
  _DWORD *v35; // ebp
  int v36; // ecx
  float *v37; // edx
  float *v38; // edi
  _DWORD *v39; // ebx
  float *v40; // ecx
  bool v41; // cc
  int v42; // [esp+30h] [ebp-B10h]
  int v43; // [esp+30h] [ebp-B10h]
  int v44; // [esp+34h] [ebp-B0Ch]
  float v45; // [esp+38h] [ebp-B08h]
  float v46; // [esp+38h] [ebp-B08h]
  float v47; // [esp+38h] [ebp-B08h]
  float v48; // [esp+38h] [ebp-B08h]
  float v49; // [esp+38h] [ebp-B08h]
  float v50; // [esp+3Ch] [ebp-B04h]
  float v51; // [esp+3Ch] [ebp-B04h]
  float v52; // [esp+3Ch] [ebp-B04h]
  float v53; // [esp+3Ch] [ebp-B04h]
  float v54; // [esp+3Ch] [ebp-B04h]
  float v55; // [esp+40h] [ebp-B00h]
  float *v56; // [esp+44h] [ebp-AFCh]
  float *v57; // [esp+44h] [ebp-AFCh]
  float *v58; // [esp+44h] [ebp-AFCh]
  int v59; // [esp+48h] [ebp-AF8h]
  _BYTE v61[400]; // [esp+50h] [ebp-AF0h] BYREF
  _DWORD v62[300]; // [esp+1E0h] [ebp-960h] BYREF
  float v63[300]; // [esp+690h] [ebp-4B0h] BYREF

  v6 = this;
  sub_101F98F0((float *)a2, this[11]);
  v7 = a4;
  if ( a4 )
  {
    v8 = a3;
    while ( 1 )
    {
      if ( (unsigned int)v7 > 0x64 )
        v7 = 100;
      v59 = v7;
      (*(void (__thiscall **)(_DWORD, int, int, int, _DWORD, int, _DWORD *, int, int, int, float *, _BYTE *))(**((_DWORD **)off_103EE614 + 60) + 40))(
        *((_DWORD *)off_103EE614 + 60),
        a2,
        v6[11],
        v7,
        *((float *)v6 + 13),
        v6[12],
        v62,
        v6[14],
        v6[15],
        v6[16],
        v63,
        v61);
      v9 = 0;
      v44 = 0;
      if ( v7 >= 4 )
      {
        v42 = v8 + 1;
        v10 = 0;
        do
        {
          v11 = v8 & 3;
          v12 = (float *)(*(_DWORD *)(a2 + 6068) + 4 * (v11 + v8 / 4 * *(_DWORD *)(a2 + 6324)));
          v56 = (float *)(*(_DWORD *)(a2 + 6076) + 4 * (v11 + v8 / 4 * *(_DWORD *)(a2 + 6332)));
          v13 = (float *)(*(_DWORD *)(a2 + 6128) + 4 * (v11 + v8 / 4 * *(_DWORD *)(a2 + 6384)));
          v14 = v11 + v8 / 4 * *(_DWORD *)(a2 + 6380);
          v45 = *(float *)&v62[v10];
          v15 = *(float *)&v62[v10 + 2];
          v16 = (_DWORD *)(*(_DWORD *)(a2 + 6124) + 4 * v14);
          v50 = *(float *)&v62[v10 + 1];
          *v12 = v45;
          v12[4] = v50;
          v12[8] = v15;
          if ( v56 && (a5 & 4) != 0 )
          {
            *v56 = v45;
            v56[4] = v50;
            v56[8] = v15;
          }
          if ( v13 && a5 < 0 )
          {
            *v13 = v63[v10];
            v13[4] = v63[v10 + 1];
            v13[8] = v63[v10 + 2];
          }
          if ( v16 && (a5 & 0x4000) != 0 )
            *v16 = *(_DWORD *)&v61[4 * v44];
          v17 = (float *)(*(_DWORD *)(a2 + 6068) + 4 * ((v42 & 3) + v42 / 4 * *(_DWORD *)(a2 + 6324)));
          v18 = (float *)(*(_DWORD *)(a2 + 6128) + 4 * ((v42 & 3) + v42 / 4 * *(_DWORD *)(a2 + 6384)));
          v46 = *(float *)&v62[v10 + 3];
          v19 = *(float *)&v62[v10 + 5];
          v20 = (_DWORD *)(*(_DWORD *)(a2 + 6124) + 4 * ((v42 & 3) + v42 / 4 * *(_DWORD *)(a2 + 6380)));
          v51 = *(float *)&v62[v10 + 4];
          v21 = (float *)(*(_DWORD *)(a2 + 6076) + 4 * ((v42 & 3) + v42 / 4 * *(_DWORD *)(a2 + 6332)));
          *v17 = v46;
          v17[4] = v51;
          v17[8] = v19;
          if ( v21 && (a5 & 4) != 0 )
          {
            *v21 = v46;
            v21[4] = v51;
            v21[8] = v19;
          }
          if ( v18 && a5 < 0 )
          {
            *v18 = v63[v10 + 3];
            v18[4] = v63[v10 + 4];
            v18[8] = v63[v10 + 5];
          }
          if ( v20 && (a5 & 0x4000) != 0 )
            *v20 = *(_DWORD *)&v61[4 * v44 + 4];
          v22 = (v42 + 1) / 4;
          v23 = ((_BYTE)v42 + 1) & 3;
          v24 = (float *)(*(_DWORD *)(a2 + 6068) + 4 * (v23 + v22 * *(_DWORD *)(a2 + 6324)));
          v57 = (float *)(*(_DWORD *)(a2 + 6076) + 4 * (v23 + v22 * *(_DWORD *)(a2 + 6332)));
          v25 = (float *)(*(_DWORD *)(a2 + 6128) + 4 * (v23 + v22 * *(_DWORD *)(a2 + 6384)));
          v26 = v23 + v22 * *(_DWORD *)(a2 + 6380);
          v47 = *(float *)&v62[v10 + 6];
          v27 = *(float *)&v62[v10 + 8];
          v28 = (_DWORD *)(*(_DWORD *)(a2 + 6124) + 4 * v26);
          v52 = *(float *)&v62[v10 + 7];
          *v24 = v47;
          v24[4] = v52;
          v24[8] = v27;
          if ( v57 && (a5 & 4) != 0 )
          {
            *v57 = v47;
            v57[4] = v52;
            v57[8] = v27;
          }
          if ( v25 && a5 < 0 )
          {
            *v25 = v63[v10 + 6];
            v25[4] = v63[v10 + 7];
            v25[8] = v63[v10 + 8];
          }
          if ( v28 && (a5 & 0x4000) != 0 )
            *v28 = *(_DWORD *)&v61[4 * v44 + 8];
          v29 = (v42 + 2) / 4;
          v30 = ((_BYTE)v42 - 2) & 3;
          v31 = (float *)(*(_DWORD *)(a2 + 6068) + 4 * (v30 + v29 * *(_DWORD *)(a2 + 6324)));
          v58 = (float *)(*(_DWORD *)(a2 + 6076) + 4 * (v30 + v29 * *(_DWORD *)(a2 + 6332)));
          v32 = (float *)(*(_DWORD *)(a2 + 6128) + 4 * (v30 + v29 * *(_DWORD *)(a2 + 6384)));
          v33 = v30 + v29 * *(_DWORD *)(a2 + 6380);
          v48 = *(float *)&v62[v10 + 9];
          v34 = *(float *)&v62[v10 + 11];
          v35 = (_DWORD *)(*(_DWORD *)(a2 + 6124) + 4 * v33);
          v53 = *(float *)&v62[v10 + 10];
          *v31 = v48;
          v31[4] = v53;
          v31[8] = v34;
          if ( v58 && (a5 & 4) != 0 )
          {
            *v58 = v48;
            v58[4] = v53;
            v58[8] = v34;
          }
          if ( v32 && a5 < 0 )
          {
            *v32 = v63[v10 + 9];
            v32[4] = v63[v10 + 10];
            v32[8] = v63[v10 + 11];
          }
          if ( v35 && (a5 & 0x4000) != 0 )
            *v35 = *(_DWORD *)&v61[4 * v44 + 12];
          v7 = v59;
          v42 += 4;
          v9 = v44 + 4;
          v8 = a3 + 4;
          v10 += 12;
          a3 += 4;
          v44 = v9;
        }
        while ( v9 < v59 - 3 );
        v6 = this;
      }
      if ( v9 < v7 )
      {
        v43 = 3 * v9;
        do
        {
          v36 = v8 & 3;
          v37 = (float *)(*(_DWORD *)(a2 + 6068) + 4 * (v36 + v8 / 4 * *(_DWORD *)(a2 + 6324)));
          v38 = (float *)(*(_DWORD *)(a2 + 6128) + 4 * (v36 + v8 / 4 * *(_DWORD *)(a2 + 6384)));
          v39 = (_DWORD *)(*(_DWORD *)(a2 + 6124) + 4 * (v36 + v8 / 4 * *(_DWORD *)(a2 + 6380)));
          v49 = *(float *)&v62[v43];
          v54 = *(float *)&v62[v43 + 1];
          v55 = *(float *)&v62[v43 + 2];
          v40 = (float *)(*(_DWORD *)(a2 + 6076) + 4 * (v36 + v8 / 4 * *(_DWORD *)(a2 + 6332)));
          *v37 = v49;
          v37[4] = v54;
          v37[8] = v55;
          if ( v40 && (a5 & 4) != 0 )
          {
            *v40 = v49;
            v40[4] = v54;
            v40[8] = v55;
          }
          if ( v38 && a5 < 0 )
          {
            *v38 = v63[v43];
            v38[4] = v63[v43 + 1];
            v38[8] = v63[v43 + 2];
          }
          if ( v39 )
          {
            if ( (a5 & 0x4000) != 0 )
              *v39 = *(_DWORD *)&v61[4 * v44];
          }
          v7 = v59;
          ++v8;
          v41 = ++v44 < v59;
          v43 += 3;
        }
        while ( v41 );
        v6 = this;
        a3 = v8;
      }
      a4 -= v7;
      if ( !a4 )
        break;
      v7 = a4;
    }
  }
}
