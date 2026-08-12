int __thiscall sub_10050BD0(int this, void (__thiscall ***a2)(_DWORD, float *, float *))
{
  int v3; // edi
  int v4; // ebx
  double v5; // st7
  float v6; // edx
  float v7; // eax
  float v8; // ecx
  bool v9; // cc
  double v10; // st7
  double v11; // st6
  double v12; // st5
  double v13; // rt1
  double v14; // st5
  double v15; // st7
  int v16; // eax
  int v17; // edi
  double v18; // st4
  double v19; // st2
  double v20; // rt0
  double v21; // st1
  double v22; // st3
  double v23; // st4
  double v24; // st2
  double v25; // rt0
  double v26; // st1
  double v27; // st3
  _BYTE v29[208]; // [esp+Ch] [ebp-28Ch] BYREF
  int v30; // [esp+DCh] [ebp-1BCh]
  int v31; // [esp+1A4h] [ebp-F4h]
  _BYTE v32[20]; // [esp+1F4h] [ebp-A4h] BYREF
  float v33; // [esp+208h] [ebp-90h]
  float v34; // [esp+214h] [ebp-84h]
  float v35; // [esp+218h] [ebp-80h]
  float v36; // [esp+224h] [ebp-74h]
  float v37; // [esp+230h] [ebp-68h]
  float v38; // [esp+23Ch] [ebp-5Ch]
  float v39[3]; // [esp+248h] [ebp-50h] BYREF
  int v40; // [esp+254h] [ebp-44h]
  float v41; // [esp+258h] [ebp-40h] BYREF
  float v42; // [esp+25Ch] [ebp-3Ch]
  float v43; // [esp+260h] [ebp-38h]
  float v44; // [esp+264h] [ebp-34h] BYREF
  float v45; // [esp+268h] [ebp-30h]
  float v46; // [esp+26Ch] [ebp-2Ch]
  int v47; // [esp+270h] [ebp-28h]
  int v48; // [esp+274h] [ebp-24h]
  float v49; // [esp+278h] [ebp-20h] BYREF
  float v50; // [esp+27Ch] [ebp-1Ch]
  float v51; // [esp+280h] [ebp-18h]
  float v52; // [esp+284h] [ebp-14h] BYREF
  float v53; // [esp+288h] [ebp-10h]
  float v54; // [esp+28Ch] [ebp-Ch]
  int v55; // [esp+290h] [ebp-8h]
  int v56; // [esp+294h] [ebp-4h]

  v3 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_1047C96C + 380))(dword_1047C96C);
  v40 = v3;
  if ( v3 )
    (*(void (__thiscall **)(int))(*(_DWORD *)v3 + 8))(v3);
  *(_DWORD *)(this + 1244) = *(_DWORD *)(this + 2260);
  (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v3 + 16))(v3, 0);
  (*(void (__thiscall **)(int, _DWORD, int))(*(_DWORD *)v3 + 36))(v3, *(_DWORD *)(this + 2256), this + 4);
  v4 = (*(int (__thiscall **)(int, int, _DWORD, _DWORD, _DWORD))(*(_DWORD *)v3 + 224))(v3, 1, 0, 0, 0);
  sub_10016C20((int)v29);
  v41 = *(float *)(this + 1212) * -1.0;
  v42 = *(float *)(this + 1216) * -1.0;
  v43 = -1.0 * *(float *)(this + 1220);
  sub_101EE190(&v41, v32);
  sub_101EE040(v32, 0, &v52, &v49);
  v5 = *(float *)(this + 1204);
  v6 = *(float *)(this + 1224);
  v7 = *(float *)(this + 1228);
  v8 = *(float *)(this + 1232);
  v9 = *(_DWORD *)(this + 1196) <= 0;
  v52 = v52 * v5;
  v44 = v6;
  v45 = v7;
  v46 = v8;
  v56 = 0;
  v53 = v53 * v5;
  v54 = v5 * v54;
  v10 = *(float *)(this + 1208);
  v11 = v49 * v10;
  v49 = v11;
  v12 = v50 * v10;
  v50 = v12;
  v13 = v12;
  v14 = v10 * v51;
  v15 = v13;
  v51 = v14;
  if ( !v9 )
  {
    v47 = this + 1788;
    while ( 1 )
    {
      v16 = 0;
      v17 = 0;
      v55 = 0;
      if ( *(int *)(this + 1200) <= 0 )
        goto LABEL_14;
      do
      {
        if ( (*(_BYTE *)(v47 + v17) & 1) != 0 )
        {
          ++v16;
        }
        else
        {
          if ( v16 <= 0 )
            goto LABEL_11;
          v48 = v17 - v16;
          v18 = (double)(v17 - v16);
          v34 = v18 * v14;
          v19 = (double)v56;
          v36 = v52 * v19;
          v38 = v36 + *(float *)(this + 1224);
          v20 = v19 * v54 + *(float *)(this + 1232);
          v21 = v53 * v19 + *(float *)(this + 1228);
          v44 = v18 * v11 + v38;
          v45 = v18 * v15 + v21;
          v46 = v20 + v34;
          v22 = (double)v55;
          v41 = v11 * v22;
          v42 = v15 * v22;
          v43 = v14 * v22;
          sub_1004F650((float *)this, a2, v4, (int)v29, &v44, &v52, &v41);
          v16 = 0;
          v11 = v49;
          v14 = v51;
          v15 = v50;
        }
        v55 = v16;
LABEL_11:
        ++v17;
      }
      while ( v17 < *(_DWORD *)(this + 1200) );
      if ( v16 )
      {
        v48 = v17 - v16;
        v23 = (double)(v17 - v16);
        v33 = v23 * v14;
        v24 = (double)v56;
        v37 = v52 * v24;
        v35 = v37 + *(float *)(this + 1224);
        v25 = v24 * v54 + *(float *)(this + 1232);
        v26 = v53 * v24 + *(float *)(this + 1228);
        v44 = v23 * v11 + v35;
        v45 = v23 * v15 + v26;
        v46 = v25 + v33;
        v27 = (double)v55;
        v39[0] = v11 * v27;
        v39[1] = v15 * v27;
        v39[2] = v14 * v27;
        sub_1004F650((float *)this, a2, v4, (int)v29, &v44, &v52, v39);
        v11 = v49;
        v14 = v51;
        v15 = v50;
      }
LABEL_14:
      v47 += 16;
      if ( ++v56 >= *(_DWORD *)(this + 1196) )
      {
        v3 = v40;
        break;
      }
    }
  }
  if ( v31 && (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v31 + 8))(v31) )
    (*(void (__thiscall **)(int))(*(_DWORD *)v31 + 16))(v31);
  if ( v30 && (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v30 + 8))(v30) )
    (*(void (__thiscall **)(int))(*(_DWORD *)v30 + 16))(v30);
  (*(void (__thiscall **)(int))(*(_DWORD *)v3 + 12))(v3);
  return (*(int (__thiscall **)(int))(*(_DWORD *)v3 + 4))(v3);
}
