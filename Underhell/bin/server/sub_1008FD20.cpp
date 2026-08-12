int __thiscall sub_1008FD20(_DWORD *this, int a2, int a3)
{
  int v4; // eax
  int v5; // esi
  void *v6; // esp
  void *v7; // esp
  void *v8; // esp
  void *v9; // esp
  unsigned int v10; // ecx
  int v11; // eax
  float *v13; // esi
  float *v14; // eax
  double v15; // st4
  double v16; // st6
  double v17; // st4
  double v18; // st5
  double v19; // st6
  double v20; // st7
  int v21; // edx
  int v22; // edx
  int v23; // eax
  int v24; // eax
  int v25; // edx
  int v27; // edi
  _DWORD *v28; // esi
  int v29; // ecx
  unsigned __int8 (__thiscall *v30)(int, int, int); // eax
  bool v31; // cc
  __int16 *v32; // esi
  int *v33; // ecx
  int v34; // edx
  char v35; // al
  int v36; // esi
  double v37; // st7
  float *v38; // eax
  double v39; // st7
  int v40; // edi
  int v41; // ecx
  float *v42; // eax
  double v43; // st4
  double v44; // st6
  double v45; // st4
  double v46; // st5
  double v47; // st6
  double v48; // st7
  int v49; // ecx
  int v50; // eax
  int v51; // esi
  float v52; // [esp+8h] [ebp-88h]
  int v53; // [esp+8h] [ebp-88h]
  float v54; // [esp+8h] [ebp-88h]
  _BYTE v55[12]; // [esp+Ch] [ebp-84h] BYREF
  float v56[3]; // [esp+18h] [ebp-78h] BYREF
  float v57[3]; // [esp+24h] [ebp-6Ch] BYREF
  float v58[3]; // [esp+30h] [ebp-60h] BYREF
  float v59[3]; // [esp+3Ch] [ebp-54h] BYREF
  unsigned __int16 v60; // [esp+48h] [ebp-48h] BYREF
  unsigned __int16 v61; // [esp+4Ah] [ebp-46h]
  int v62; // [esp+50h] [ebp-40h]
  unsigned __int16 v63; // [esp+54h] [ebp-3Ch] BYREF
  unsigned __int16 v64; // [esp+56h] [ebp-3Ah]
  int v65; // [esp+5Ch] [ebp-34h]
  int v66; // [esp+60h] [ebp-30h]
  float v67; // [esp+64h] [ebp-2Ch]
  float *v68; // [esp+68h] [ebp-28h]
  int v69; // [esp+6Ch] [ebp-24h]
  int v70; // [esp+70h] [ebp-20h]
  _BYTE *v71; // [esp+74h] [ebp-1Ch]
  _BYTE *v72; // [esp+78h] [ebp-18h]
  _DWORD *v73; // [esp+7Ch] [ebp-14h]
  int v74; // [esp+80h] [ebp-10h]
  _BYTE *v75; // [esp+84h] [ebp-Ch]
  _BYTE *v76; // [esp+88h] [ebp-8h]
  int v77; // [esp+8Ch] [ebp-4h]
  int v78; // [esp+98h] [ebp+8h]
  int v79; // [esp+98h] [ebp+8h]

  v4 = this[5];
  if ( !*(_DWORD *)(v4 + 4) )
    return 0;
  v5 = *(_DWORD *)(v4 + 4);
  v77 = *(_DWORD *)(v4 + 8);
  v70 = v5;
  sub_1008E250(&v63, v5);
  sub_1008E250(&v60, v5);
  v6 = alloca(4 * v5);
  v76 = v55;
  v7 = alloca(4 * v5);
  v72 = v55;
  v8 = alloca(4 * v5);
  v75 = v55;
  v9 = alloca(4 * v5);
  v71 = v55;
  if ( v5 > 0 )
  {
    v10 = (unsigned int)(4 * v5) >> 2;
    memset(v55, 0xFFu, 4 * v10);
    memset32(v76, 2139095039, v10);
  }
  v11 = *(_DWORD *)(this[1] + 1676);
  *(float *)&v76[4 * a2] = 0.0;
  v78 = v11;
  v13 = sub_1008D160(*(_DWORD *)(v77 + 4 * a3), v58, v11);
  v14 = sub_1008D160(*(_DWORD *)(v77 + 4 * a2), v59, v78);
  v15 = v14[1] - v13[1];
  v16 = v15 * v15;
  v17 = *v14 - *v13;
  v18 = v16;
  v19 = v14[2] - v13[2];
  v52 = v17 * v17 + v18 + v19 * v19;
  v20 = off_10689708(v52) * 0.1;
  v21 = (int)v75;
  *(float *)&v72[4 * a2] = v20;
  *(float *)(v21 + 4 * a2) = v20;
  v22 = 1 << (a2 & 0x1F);
  v23 = 4 * (a2 >> 5);
  *(_DWORD *)(v23 + v65) |= v22;
  *(_DWORD *)(v23 + v62) |= v22;
  while ( 1 )
  {
    do
    {
LABEL_5:
      *(_DWORD *)(v65 + 4 * v64 - 4) &= dword_10603BC0[v63 & 0x1F];
      v24 = v64 - 1;
      v25 = v65;
      if ( v24 < 0 )
      {
LABEL_8:
        if ( v61 > 1u )
        {
          (*(void (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, v62);
          v25 = v65;
        }
        v62 = 0;
        if ( v64 > 1u )
          (*(void (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, v25);
        return 0;
      }
      while ( !*(_DWORD *)(v65 + 4 * v24) )
      {
        if ( --v24 < 0 )
          goto LABEL_8;
      }
      v27 = sub_100853A0((int)&v63, (int)v75, v70);
      v79 = v27;
      *(_DWORD *)(v65 + 4 * (v27 >> 5)) &= ~(1 << (v27 & 0x1F));
      v28 = *(_DWORD **)(v77 + 4 * v27);
      v29 = this[1];
      v53 = v28[24];
      v30 = *(unsigned __int8 (__thiscall **)(int, int, int))(*(_DWORD *)v29 + 1744);
      v73 = v28;
    }
    while ( v30(v29, v27, v53) );
    if ( v27 == a3 )
      break;
    v31 = v28[21] <= 0;
    v74 = 0;
    if ( !v31 )
    {
      while ( 1 )
      {
        v32 = *(__int16 **)(v28[18] + 4 * v74);
        if ( sub_1008FA50(this, (int)v32, v27) )
        {
          v33 = (int *)this[1];
          v34 = *v33;
          v69 = v33[419];
          v35 = (*(int (__thiscall **)(int *))(v34 + 1672))(v33);
          v69 = (unsigned __int8)(v35 & *((_BYTE *)v32 + v69 + 4));
          v36 = sub_10074630(v32, v27);
          sub_1008D160((int)v73, v58, *(_DWORD *)(this[1] + 1676));
          sub_1008D160(*(_DWORD *)(v77 + 4 * v36), v59, *(_DWORD *)(this[1] + 1676));
          v37 = sub_1007E240((_DWORD **)*(_DWORD *)(this[1] + 2588), v69, COERCE_FLOAT(v58), v59);
          if ( 3.4028235e38 != v37 )
            break;
        }
LABEL_26:
        if ( ++v74 >= v73[21] )
          goto LABEL_5;
        v28 = v73;
      }
      v38 = (float *)v76;
      v39 = v37 + *(float *)&v76[4 * v27];
      v67 = v39;
      v40 = 4 * (v36 >> 5);
      v66 = 1 << (v36 & 0x1F);
      if ( (v66 & *(_DWORD *)(v40 + v62)) != 0 )
      {
        if ( v39 < *(float *)&v76[4 * v36] )
        {
          v38 = (float *)v76;
          goto LABEL_23;
        }
      }
      else
      {
LABEL_23:
        v38[v36] = v39;
        *(_DWORD *)&v71[4 * v36] = v79;
        v41 = *(_DWORD *)(v77 + 4 * a3);
        v69 = *(_DWORD *)(this[1] + 1676);
        v68 = sub_1008D160(v41, v57, v69);
        v42 = sub_1008D160(*(_DWORD *)(v77 + 4 * v36), v56, v69);
        v43 = v42[1] - v68[1];
        v44 = v43 * v43;
        v45 = *v42 - *v68;
        v46 = v44;
        v47 = v42[2] - v68[2];
        v54 = v45 * v45 + v46 + v47 * v47;
        v48 = off_10689708(v54);
        v49 = (int)v75;
        *(float *)&v72[4 * v36] = v48;
        v50 = v66;
        *(float *)(v49 + 4 * v36) = v48 + v67;
        *(_DWORD *)(v40 + v62) |= v50;
        *(_DWORD *)(v40 + v65) |= v50;
      }
      v27 = v79;
      goto LABEL_26;
    }
  }
  v51 = sub_1008E460(this, (int)v71, a3);
  if ( v61 > 1u )
    (*(void (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, v62);
  v62 = 0;
  if ( v64 > 1u )
    (*(void (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, v65);
  return v51;
}
