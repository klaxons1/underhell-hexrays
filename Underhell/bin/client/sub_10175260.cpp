int __stdcall sub_10175260(float *a1, unsigned __int8 *a2)
{
  double v2; // st7
  double v3; // st5
  double v4; // st4
  double v5; // st3
  double v6; // st2
  double v7; // st1
  _DWORD *v8; // edi
  int v9; // esi
  int v10; // eax
  int result; // eax
  _BYTE v12[180]; // [esp+Ch] [ebp-2A8h] BYREF
  int v13; // [esp+C0h] [ebp-1F4h]
  char v14; // [esp+C8h] [ebp-1ECh]
  int v15; // [esp+DCh] [ebp-1D8h]
  int v16; // [esp+E0h] [ebp-1D4h]
  int v17; // [esp+E4h] [ebp-1D0h]
  int v18; // [esp+ECh] [ebp-1C8h]
  int v19; // [esp+F0h] [ebp-1C4h]
  int v20; // [esp+F4h] [ebp-1C0h]
  int v21; // [esp+F8h] [ebp-1BCh]
  int v22; // [esp+14Ch] [ebp-168h]
  int v23; // [esp+1A4h] [ebp-110h]
  int v24; // [esp+1ACh] [ebp-108h]
  int v25; // [esp+1B0h] [ebp-104h]
  int v26; // [esp+1B4h] [ebp-100h]
  int v27; // [esp+1E4h] [ebp-D0h]
  int v28; // [esp+1E8h] [ebp-CCh]
  int v29; // [esp+1ECh] [ebp-C8h]
  int v30; // [esp+1F4h] [ebp-C0h]
  _DWORD v31[23]; // [esp+1F8h] [ebp-BCh] BYREF
  float v32; // [esp+254h] [ebp-60h] BYREF
  float v33; // [esp+258h] [ebp-5Ch]
  float v34; // [esp+25Ch] [ebp-58h]
  float v35; // [esp+260h] [ebp-54h]
  float v36; // [esp+264h] [ebp-50h]
  float v37; // [esp+268h] [ebp-4Ch]
  float v38; // [esp+26Ch] [ebp-48h]
  float v39; // [esp+270h] [ebp-44h]
  float v40; // [esp+274h] [ebp-40h]
  float v41; // [esp+278h] [ebp-3Ch]
  float v42; // [esp+27Ch] [ebp-38h]
  float v43; // [esp+280h] [ebp-34h]
  float v44; // [esp+284h] [ebp-30h]
  float v45; // [esp+288h] [ebp-2Ch]
  float v46; // [esp+28Ch] [ebp-28h]
  float v47; // [esp+290h] [ebp-24h]
  float v48; // [esp+294h] [ebp-20h]
  float v49; // [esp+298h] [ebp-1Ch]
  float v50; // [esp+29Ch] [ebp-18h]
  float v51; // [esp+2A0h] [ebp-14h]
  float v52; // [esp+2A4h] [ebp-10h]
  float v53; // [esp+2A8h] [ebp-Ch]
  float v54; // [esp+2ACh] [ebp-8h]
  float v55; // [esp+2B0h] [ebp-4h]
  int v56; // [esp+2BCh] [ebp+8h]

  v2 = *a1 - 5.0;
  v3 = a1[1] - 5.0;
  v4 = a1[2] - 5.0;
  v5 = *a1;
  v31[1] = 3;
  v31[14] = 3;
  v6 = a1[1];
  v31[16] = 3;
  v30 = 0;
  v7 = a1[2];
  v31[2] = 1;
  v31[4] = 1;
  v32 = v2;
  v35 = v32;
  v31[0] = 2;
  v38 = v32;
  v31[3] = 0;
  v41 = v32;
  v31[5] = 5;
  v31[6] = 4;
  v33 = v3;
  v31[7] = 4;
  v36 = v33;
  v31[8] = 5;
  v45 = v33;
  v31[9] = 7;
  v48 = v33;
  v31[10] = 6;
  v31[11] = 2;
  v34 = v4;
  v31[12] = 6;
  v40 = v4;
  v31[13] = 7;
  v46 = v4;
  v31[15] = 1;
  v52 = v4;
  v31[17] = 7;
  v31[18] = 5;
  v37 = v7 + 5.0;
  v31[19] = 0;
  v43 = v37;
  v31[20] = 4;
  v49 = v37;
  v31[21] = 6;
  v55 = v37;
  v31[22] = 2;
  v8 = v31;
  v39 = v6 + 5.0;
  v56 = 6;
  v42 = v39;
  v51 = v39;
  v54 = v39;
  v44 = v5 + 5.0;
  v47 = v44;
  v50 = v44;
  v53 = v44;
  do
  {
    v13 = 0;
    v14 = 0;
    v15 = 0;
    v16 = 0;
    v17 = 0;
    v18 = 0;
    v19 = 0;
    v20 = -1;
    v21 = 0;
    v23 = 0;
    v28 = -1;
    v29 = 0;
    v25 = 0;
    v26 = 0;
    v24 = 0;
    v27 = 0;
    v22 = -1;
    v9 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_1047C96C + 380))(dword_1047C96C);
    if ( v9 )
      (*(void (__thiscall **)(int))(*(_DWORD *)v9 + 8))(v9);
    v10 = (*(int (__thiscall **)(int, int, _DWORD, _DWORD, _DWORD))(*(_DWORD *)v9 + 224))(v9, 1, 0, 0, 0);
    sub_10174EE0((int)v12, v10, &v32 + 3 * *(v8 - 1), &v32 + 3 * *v8, &v32 + 3 * v8[1], &v32 + 3 * v8[2], a2, 1);
    (*(void (__thiscall **)(int))(*(_DWORD *)v9 + 12))(v9);
    result = (*(int (__thiscall **)(int))(*(_DWORD *)v9 + 4))(v9);
    if ( v23 )
    {
      result = (*(int (__thiscall **)(int))(*(_DWORD *)v23 + 8))(v23);
      if ( (_BYTE)result )
        result = (*(int (__thiscall **)(int))(*(_DWORD *)v23 + 16))(v23);
    }
    if ( v15 )
    {
      result = (*(int (__thiscall **)(int))(*(_DWORD *)v15 + 8))(v15);
      if ( (_BYTE)result )
        result = (*(int (__thiscall **)(int))(*(_DWORD *)v15 + 16))(v15);
    }
    v8 += 4;
    --v56;
  }
  while ( v56 );
  return result;
}
