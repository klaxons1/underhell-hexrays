// bad sp value at call has been detected, the output may be wrong!
int __userpurge sub_1004D970@<eax>(int a1@<ecx>, int a2@<ebp>, float *a3@<edi>, int a4@<esi>, char *a5)
{
  char *v5; // eax
  _DWORD *v6; // esi
  int v7; // edi
  int v8; // ecx
  _DWORD *v9; // ecx
  char *v10; // eax
  int v12; // esi
  int v13; // edi
  int v14; // edx
  float *v15; // eax
  int v16; // edx
  float *v17; // eax
  int v18; // esi
  int v19; // ecx
  int v20; // eax
  int v21; // esi
  _DWORD *v22; // edi
  int v23; // eax
  int *v24; // esi
  int v25; // esi
  _DWORD *v26; // esi
  double v27; // st7
  int v28; // ecx
  _DWORD *v29; // edi
  int v30; // edx
  int v31; // esi
  int *v34; // [esp+1Ch] [ebp-104h]
  _BYTE *v35; // [esp+20h] [ebp-100h]
  float v36[20]; // [esp+24h] [ebp-FCh] BYREF
  _BYTE v37[12]; // [esp+74h] [ebp-ACh] BYREF
  float v38[19]; // [esp+80h] [ebp-A0h] BYREF
  int v39; // [esp+CCh] [ebp-54h] BYREF
  float *v40; // [esp+D8h] [ebp-48h]
  int v41; // [esp+DCh] [ebp-44h]
  float *v42; // [esp+E0h] [ebp-40h]
  _DWORD *v43; // [esp+E4h] [ebp-3Ch] BYREF
  int v44; // [esp+E8h] [ebp-38h]
  int v45; // [esp+ECh] [ebp-34h]
  int v46; // [esp+F0h] [ebp-30h]
  _DWORD *v47; // [esp+F4h] [ebp-2Ch]
  _DWORD *v48; // [esp+F8h] [ebp-28h] BYREF
  int v49; // [esp+FCh] [ebp-24h]
  int v50; // [esp+100h] [ebp-20h]
  int v51; // [esp+104h] [ebp-1Ch]
  _DWORD *v52; // [esp+108h] [ebp-18h]
  int v53; // [esp+10Ch] [ebp-14h]
  int v54; // [esp+110h] [ebp-10h]
  int v55; // [esp+114h] [ebp-Ch]
  void *v56; // [esp+118h] [ebp-8h]
  void *retaddr; // [esp+120h] [ebp+0h]

  v55 = a2;
  v56 = retaddr;
  v5 = a5;
  v6 = 0;
  v7 = 0;
  v41 = a1;
  v48 = 0;
  v49 = 0;
  v50 = 0;
  v51 = 0;
  v52 = 0;
  v43 = 0;
  v44 = 0;
  v45 = 0;
  v46 = 0;
  v47 = 0;
  if ( !a5 )
    v5 = (char *)String;
  v53 = sub_1012BF20(0, v5, 0, 0, 0, 0);
  if ( !v53 )
    goto LABEL_14;
  do
  {
    v8 = v7;
    v54 = v7;
    if ( v7 + 1 > v49 )
    {
      sub_102ABFC0(v7 - v49 + 1);
      v7 = v51;
      v6 = v48;
      v8 = v54;
    }
    v51 = ++v7;
    v52 = v6;
    if ( v7 - v8 - 1 > 0 )
    {
      memcpy(&v6[v8 + 1], &v6[v8], 4 * (v7 - v8 - 1));
      v8 = v54;
    }
    v9 = &v6[v8];
    if ( v9 )
      *v9 = v53;
    v10 = a5;
    if ( !a5 )
      v10 = (char *)String;
    v53 = sub_1012BF20(v53, v10, 0, 0, 0, 0);
  }
  while ( v53 );
  if ( v7 < 1 )
  {
LABEL_14:
    sub_102375F0(&v43);
    sub_102375F0(&v48);
    return 0;
  }
  if ( v7 == 1 )
  {
    v12 = *v6;
LABEL_17:
    sub_102375F0(&v43);
    sub_102375F0(&v48);
    return v12;
  }
  v53 = 0;
  while ( 1 )
  {
    v13 = *(_DWORD *)(v41 + 4);
    v14 = *(_DWORD *)(v13 + 320);
    v54 = v6[v53];
    v15 = (float *)(*(int (__thiscall **)(int, float *, int, int *, _BYTE *))(v14 + 8))(v13 + 320, a3, a4, v34, v35);
    v16 = *(_DWORD *)(v13 + 320);
    v40 = v15;
    v17 = (float *)(*(int (__thiscall **)(int))(v16 + 4))(v13 + 320);
    v18 = v54;
    v19 = *(_DWORD *)(v54 + 252) >> 11;
    v42 = v17;
    if ( (v19 & 1) != 0 )
      sub_100DAE60(v54);
    if ( (*(_DWORD *)(v18 + 252) & 0x800) != 0 )
      sub_100DAE60(v18);
    sub_1001F200(v36, (float *)(v18 + 580), (float *)(v18 + 580), v42, v40);
    sub_10265570(v13, 0);
    v35 = v37;
    v34 = &v39;
    a4 = 33570827;
    a3 = v36;
    (*(void (__thiscall **)(int))(*(_DWORD *)dword_106B31F4 + 16))(dword_106B31F4);
    if ( *(_DWORD *)(dword_106CE63C + 48) )
      sub_101A0AD0((int)v37, (int)v38, 255, 255, 0, 1, -1.0);
    if ( 1.0 == v38[8] )
    {
      v20 = v46;
      v21 = v46;
      if ( v46 + 1 > v44 )
      {
        sub_102ABFC0(v46 - v44 + 1);
        v20 = v46;
      }
      v22 = v43;
      v46 = v20 + 1;
      v23 = v20 - v21;
      v47 = v43;
      if ( v23 > 0 )
        memcpy(&v43[v21 + 1], &v43[v21], 4 * v23);
      v24 = &v22[v21];
      if ( v24 )
        *v24 = v54;
    }
    if ( ++v53 >= v51 )
      break;
    v6 = v48;
  }
  v25 = v46;
  if ( v46 == 1 )
  {
    v12 = *v43;
    goto LABEL_17;
  }
  if ( v46 < 1 )
  {
    v26 = v48;
    v12 = v26[(*(int (__thiscall **)(int, _DWORD, int))(*(_DWORD *)dword_106B31E4 + 8))(dword_106B31E4, 0, v51 - 1)];
    goto LABEL_17;
  }
  v27 = -1.0;
  v28 = 0;
  v54 = -1;
  do
  {
    v29 = v43;
    v30 = v43[v28];
    if ( v27 < *(float *)(v30 + 860) )
    {
      v54 = v28;
      v27 = *(float *)(v30 + 860);
    }
    ++v28;
  }
  while ( v28 < v46 );
  if ( v46 - v54 - 1 > 0 )
    memcpy(&v43[v54], &v43[v54 + 1], 4 * (v46 - v54 - 1));
  v31 = v29[(*(int (__thiscall **)(int, _DWORD, int))(*(_DWORD *)dword_106B31E4 + 8))(dword_106B31E4, 0, v25 - 2)];
  if ( v45 >= 0 && v29 )
    (*(void (__thiscall **)(_DWORD, _DWORD *))(*g_pMemAlloc + 20))(g_pMemAlloc, v29);
  if ( v50 >= 0 )
  {
    if ( v48 )
      (*(void (__thiscall **)(_DWORD, _DWORD *))(*g_pMemAlloc + 20))(g_pMemAlloc, v48);
  }
  return v31;
}
