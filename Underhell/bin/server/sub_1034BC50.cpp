int __thiscall sub_1034BC50(_DWORD *this, float *a2, float *a3, int a4, float *a5)
{
  int v6; // eax
  float *v7; // eax
  unsigned int v9; // eax
  void *v10; // ecx
  unsigned int v12; // eax
  int v13; // ecx
  unsigned int v14; // eax
  _DWORD *v15; // ecx
  long double v16; // st7
  long double v17; // st5
  long double v18; // st6
  long double v19; // st4
  double v20; // st3
  double v21; // st2
  unsigned int v22; // eax
  int v23; // ecx
  double v24; // st7
  unsigned int v25; // eax
  _DWORD *v26; // ecx
  unsigned int v27; // eax
  int v28; // ecx
  double v29; // st7
  unsigned int v30; // eax
  _DWORD *v31; // ecx
  unsigned int v32; // esi
  int *v33; // eax
  float v35; // [esp+Ch] [ebp-B4h]
  float v36; // [esp+Ch] [ebp-B4h]
  float v37; // [esp+10h] [ebp-B0h]
  float v38; // [esp+10h] [ebp-B0h]
  float v39; // [esp+10h] [ebp-B0h]
  float v40; // [esp+10h] [ebp-B0h]
  float v41[16]; // [esp+20h] [ebp-A0h] BYREF
  _BYTE v42[48]; // [esp+60h] [ebp-60h] BYREF
  _BYTE v43[12]; // [esp+90h] [ebp-30h] BYREF
  float v44[3]; // [esp+9Ch] [ebp-24h] BYREF
  float v45; // [esp+A8h] [ebp-18h] BYREF
  float v46; // [esp+ACh] [ebp-14h]
  float v47; // [esp+B0h] [ebp-10h]
  float v48; // [esp+B4h] [ebp-Ch] BYREF
  float v49; // [esp+B8h] [ebp-8h]
  float v50; // [esp+BCh] [ebp-4h]
  float v51; // [esp+C8h] [ebp+8h]
  float v52; // [esp+CCh] [ebp+Ch]

  v6 = (*(int (__thiscall **)(_DWORD *))(*this + 368))(this);
  v7 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)v6 + 576))(v6);
  *a3 = *v7;
  a3[1] = v7[1];
  a3[2] = v7[2];
  v9 = this[1004];
  if ( v9 == -1 || off_1061BE18[4 * (this[1004] & 0xFFF) + 2] != v9 >> 12 )
    v10 = 0;
  else
    v10 = (void *)off_1061BE18[4 * (this[1004] & 0xFFF) + 1];
  sub_100BCCA0(v10, this[1033], (int)a2, (int)v43);
  v12 = this[1004];
  v44[0] = *a2;
  v44[1] = a2[1];
  v44[2] = a2[2];
  if ( v12 == -1 || off_1061BE18[4 * (v12 & 0xFFF) + 2] != v12 >> 12 )
    v13 = 0;
  else
    v13 = off_1061BE18[4 * (v12 & 0xFFF) + 1];
  (*(void (__thiscall **)(int, _DWORD, _BYTE *))(*(_DWORD *)v13 + 796))(v13, this[1035], v42);
  sub_10421BA0(v44, v42, &v45);
  v14 = this[1004];
  if ( v14 == -1 || off_1061BE18[4 * (this[1004] & 0xFFF) + 2] != v14 >> 12 )
    v15 = 0;
  else
    v15 = (_DWORD *)off_1061BE18[4 * (this[1004] & 0xFFF) + 1];
  sub_102608F0(v41, v15, this[1034]);
  sub_100D5C50(v41, &v48, a3);
  v16 = v49;
  v17 = v48;
  v18 = v16 * v16 + v17 * v17;
  v19 = v50;
  v20 = v19 * v19 + v18;
  v52 = v46 * v46;
  v21 = v47;
  v51 = v21 * v21;
  if ( v45 * v45 + v52 + v51 < v20 )
  {
    v22 = this[1004];
    v48 = (atan2(-v21, sqrt(v20 - v51)) + atan2(v19, sqrt(v18))) * 57.29578;
    v49 = (atan2(v46, sqrt(v20 - v52)) + atan2(v16, v17)) * 57.29578;
    if ( v22 == -1 || off_1061BE18[4 * (v22 & 0xFFF) + 2] != v22 >> 12 )
      v23 = 0;
    else
      v23 = off_1061BE18[4 * (v22 & 0xFFF) + 1];
    v35 = sub_100BE820(v23, dword_106E6714);
    v24 = v48;
    sub_10424B50(v48, v35, 10.0);
    v37 = v24;
    sub_10424CA0(v37);
    v25 = this[1004];
    if ( v25 == -1 || off_1061BE18[4 * (this[1004] & 0xFFF) + 2] != v25 >> 12 )
      v26 = 0;
    else
      v26 = (_DWORD *)off_1061BE18[4 * (this[1004] & 0xFFF) + 1];
    v38 = v24;
    sub_10019C10(v26, dword_106E6714, v38);
    v27 = this[1004];
    if ( v27 == -1 || off_1061BE18[4 * (this[1004] & 0xFFF) + 2] != v27 >> 12 )
      v28 = 0;
    else
      v28 = off_1061BE18[4 * (this[1004] & 0xFFF) + 1];
    v36 = sub_100BE820(v28, dword_106E6718);
    v29 = v49;
    sub_10424B50(v49, v36, 10.0);
    v39 = v29;
    sub_10424CA0(v39);
    v30 = this[1004];
    if ( v30 == -1 || off_1061BE18[4 * (this[1004] & 0xFFF) + 2] != v30 >> 12 )
      v31 = 0;
    else
      v31 = (_DWORD *)off_1061BE18[4 * (this[1004] & 0xFFF) + 1];
    v40 = v29;
    sub_10019C10(v31, dword_106E6718, v40);
    v32 = this[1004];
    if ( v32 == -1 || off_1061BE18[4 * (v32 & 0xFFF) + 2] != v32 >> 12 )
    {
      (*(void (__thiscall **)(_DWORD))(MEMORY[0] + 728))(0);
    }
    else
    {
      v33 = &off_1061BE18[4 * (v32 & 0xFFF) + 1];
      (*(void (__thiscall **)(int))(*(_DWORD *)*v33 + 728))(*v33);
    }
  }
  *a3 = *a3 - *a2;
  a3[1] = a3[1] - a2[1];
  a3[2] = a3[2] - a2[2];
  *a5 = off_10689714();
  return sub_10422220(v43, a4);
}
