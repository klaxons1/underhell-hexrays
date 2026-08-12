float *__thiscall sub_101CF710(
        int this,
        int *a2,
        float *a3,
        int a4,
        int a5,
        int a6,
        float a7,
        int a8,
        int a9,
        int a10,
        float *a11,
        float a12,
        int a13)
{
  float v13; // edi
  int v14; // ebx
  int v16; // ebx
  _DWORD *v17; // eax
  bool v18; // zf
  int v19; // ebx
  int v20; // ecx
  int v21; // eax
  void (__thiscall *v22)(int, _BYTE *); // edx
  int v23; // eax
  int v24; // edi
  int v25; // ebx
  int v26; // eax
  _DWORD *v27; // ebx
  int v28; // ecx
  int v29; // ebx
  int *v30; // ecx
  int v31; // ebx
  int *v32; // ecx
  int v34; // [esp+8h] [ebp-1BCh]
  char v35; // [esp+Ch] [ebp-1B8h]
  _BYTE v36[48]; // [esp+1Ch] [ebp-1A8h] BYREF
  _BYTE v37[48]; // [esp+4Ch] [ebp-178h] BYREF
  _BYTE v38[48]; // [esp+7Ch] [ebp-148h] BYREF
  _BYTE v39[48]; // [esp+ACh] [ebp-118h] BYREF
  float v40[6]; // [esp+DCh] [ebp-E8h] BYREF
  _BYTE v41[48]; // [esp+F4h] [ebp-D0h] BYREF
  _BYTE v42[56]; // [esp+124h] [ebp-A0h] BYREF
  float v43; // [esp+15Ch] [ebp-68h]
  float v44; // [esp+160h] [ebp-64h]
  float v45; // [esp+164h] [ebp-60h]
  float v46; // [esp+168h] [ebp-5Ch]
  float v47; // [esp+16Ch] [ebp-58h]
  float v48; // [esp+170h] [ebp-54h]
  float v49; // [esp+174h] [ebp-50h]
  float v50; // [esp+178h] [ebp-4Ch]
  float v51; // [esp+17Ch] [ebp-48h]
  float v52; // [esp+180h] [ebp-44h]
  float v53; // [esp+184h] [ebp-40h]
  float v54; // [esp+188h] [ebp-3Ch]
  _BYTE v55[12]; // [esp+190h] [ebp-34h] BYREF
  _BYTE v56[12]; // [esp+19Ch] [ebp-28h] BYREF
  float v57[3]; // [esp+1A8h] [ebp-1Ch] BYREF
  float v58[3]; // [esp+1B4h] [ebp-10h] BYREF
  int v59; // [esp+1C0h] [ebp-4h]
  int v60; // [esp+1E4h] [ebp+20h]

  v13 = a12;
  v14 = 0;
  v59 = 0;
  if ( SLODWORD(a12) > 0 )
  {
    v16 = dword_10700AC8;
    (*(void (__thiscall **)(int))(*(_DWORD *)dword_10700AC8 + 100))(dword_10700AC8);
    if ( !*(_DWORD *)(this + 1100) && sub_100D7240((void *)this) )
      sub_100BD750((volatile signed __int32 *)this);
    v17 = *(_DWORD **)(this + 1100);
    if ( !v17 || (v18 = *v17 == 0, a12 = *(float *)(this + 1100), v18) )
      a12 = 0.0;
    (*(void (__thiscall **)(int))(*(_DWORD *)v16 + 104))(v16);
    v59 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)LODWORD(a12) + 160) + 216 * LODWORD(v13) + *(_DWORD *)LODWORD(a12) + 172);
    v14 = v59;
  }
  sub_101CD150(this, a3, a4, &flt_106F1CA8, a5, a6, a7, a8, 0, 1);
  v19 = *(_DWORD *)(this + 24 * v14 + 1156);
  (*(void (__thiscall **)(int, _BYTE *, int))(*(_DWORD *)v19 + 224))(v19, v55, a13);
  sub_101AFF90(v40);
  (*(void (__thiscall **)(int *, _BYTE *, float *))(*a2 + 220))(a2, v56, a11);
  v20 = a9;
  if ( (*(_DWORD *)(a9 + 252) & 0x800) != 0 )
  {
    sub_100DAE60(a9);
    v20 = a9;
  }
  v58[0] = 0.0;
  v58[1] = *(float *)(v20 + 708);
  v58[2] = 0.0;
  sub_10425040(v58, v56, v38);
  v21 = *a2;
  v43 = -2.0;
  v22 = *(void (__thiscall **)(int, _BYTE *))(v21 + 192);
  v44 = 2.0;
  v45 = 0.0;
  v46 = 20.0;
  v47 = 0.0;
  v48 = 0.0;
  v49 = 0.0;
  v50 = 0.0;
  v51 = -15.0;
  v52 = 15.0;
  v53 = 0.0;
  v54 = 20.0;
  v40[4] = 50.0;
  v22((int)a2, v39);
  sub_10424F80(v39, v37);
  (*(void (__thiscall **)(int, _BYTE *))(*(_DWORD *)v19 + 192))(v19, v39);
  sub_10424F80(v39, v36);
  sub_10421E30(v36, v38, v41);
  sub_10421E30(v37, v38, v42);
  sub_10421D00(v55, 3, v41);
  sub_101DAA50(a2, *(_DWORD *)(this + 1156));
  v23 = (*(int (__thiscall **)(int, int, int *, _DWORD, float *))(*(_DWORD *)dword_106BAFF4 + 60))(
          dword_106BAFF4,
          v19,
          a2,
          *(_DWORD *)(this + 1140),
          v40);
  v24 = a9;
  *(_DWORD *)(this + 5688) = v23;
  (*(void (__thiscall **)(int, int, int))(*(_DWORD *)this + 140))(this, v24, -1);
  (*(void (__thiscall **)(int, int))(*(_DWORD *)this + 76))(this, v24);
  v25 = *(_DWORD *)dword_106B31F0;
  v35 = (*(int (__thiscall **)(int, int))(*(_DWORD *)this + 24))(this, 1);
  v34 = (*(int (__thiscall **)(int))(*(_DWORD *)this + 24))(this);
  v26 = (*(int (__thiscall **)(int))(v25 + 16))(dword_106B31F0);
  sub_10217F40(this + 1132, v26, v34, v35);
  v60 = 0;
  if ( *(int *)(this + 1132) > 0 )
  {
    v27 = (_DWORD *)(this + 1156);
    do
    {
      (*(void (__thiscall **)(_DWORD, float *, int *))(*(_DWORD *)*v27 + 140))(*v27, &a12, &a9);
      v28 = *v27;
      a12 = a12 * 50.0;
      *(float *)&a9 = 50.0 * *(float *)&a9;
      (*(void (__thiscall **)(int, float *, int *))(*(_DWORD *)v28 + 136))(v28, &a12, &a9);
      v27 += 6;
      ++v60;
    }
    while ( v60 < *(_DWORD *)(this + 1132) );
  }
  v29 = a10;
  if ( *(_DWORD *)(this + 5652) != a10 )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
    }
    else
    {
      v30 = *(int **)(this + 24);
      if ( v30 )
        sub_100194B0(v30, 5652);
    }
    *(_DWORD *)(this + 5652) = v29;
  }
  v31 = v59;
  if ( *(_DWORD *)(this + 5656) != v59 )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
    }
    else
    {
      v32 = *(int **)(this + 24);
      if ( v32 )
        sub_100194B0(v32, 5656);
    }
    *(_DWORD *)(this + 5656) = v31;
  }
  sub_101CCC70((float *)(this + 5660), a11);
  sub_10421CE0(v41, 3, v57);
  return sub_101CCCE0((float *)(this + 5672), v57);
}
