int __userpurge sub_100B3390@<eax>(_DWORD *a1@<ecx>, int a2@<esi>, float *a3, float *a4, int a5, float a6, float a7)
{
  int v8; // eax
  int v9; // esi
  int v10; // esi
  const char *v11; // edi
  float v12; // eax
  float v13; // ecx
  double v15; // st7
  void *v16; // esp
  int v17; // esi
  int v18; // eax
  int v19; // ebx
  double v20; // st4
  double v21; // st7
  double v22; // st4
  double v23; // st5
  double v24; // st7
  int v25; // eax
  float *v26; // eax
  int v27; // ecx
  int v28; // eax
  __int16 v29; // ax
  int v30; // eax
  int v31; // eax
  int v32; // edx
  int v33; // eax
  int v34; // eax
  int v35; // eax
  int v36; // ecx
  int v37; // edx
  int v38; // eax
  int v39; // eax
  __int16 *v40; // ebx
  int v41; // esi
  int v42; // edx
  int v43; // ebx
  int v44; // eax
  int v45; // eax
  int v46; // eax
  int v47; // eax
  int v48; // edx
  int v49; // eax
  int v50; // ecx
  float *v51; // eax
  double v52; // st7
  double v53; // st6
  double v54; // st5
  double v55; // st1
  double v56; // st3
  double v57; // st4
  double v58; // st3
  int v59; // [esp+20h] [ebp-80h]
  float v60; // [esp+20h] [ebp-80h]
  _BYTE v61[12]; // [esp+24h] [ebp-7Ch] BYREF
  _BYTE *v62; // [esp+30h] [ebp-70h] BYREF
  int v63; // [esp+34h] [ebp-6Ch]
  int v64; // [esp+38h] [ebp-68h]
  int v65; // [esp+3Ch] [ebp-64h]
  _BYTE *v66; // [esp+40h] [ebp-60h]
  BOOL (__cdecl *v67)(float *, float *); // [esp+44h] [ebp-5Ch]
  float v68[3]; // [esp+48h] [ebp-58h] BYREF
  _BYTE v69[12]; // [esp+54h] [ebp-4Ch] BYREF
  float v70[3]; // [esp+60h] [ebp-40h] BYREF
  unsigned __int16 v71; // [esp+6Ch] [ebp-34h] BYREF
  unsigned __int16 v72; // [esp+6Eh] [ebp-32h]
  int v73; // [esp+74h] [ebp-2Ch]
  float v74; // [esp+78h] [ebp-28h] BYREF
  float v75; // [esp+7Ch] [ebp-24h]
  float v76; // [esp+80h] [ebp-20h]
  float v77[2]; // [esp+84h] [ebp-1Ch] BYREF
  int v78; // [esp+8Ch] [ebp-14h]
  float v79; // [esp+90h] [ebp-10h] BYREF
  float v80; // [esp+94h] [ebp-Ch]
  float v81; // [esp+98h] [ebp-8h]
  int v82; // [esp+9Ch] [ebp-4h]
  _DWORD *v83; // [esp+B4h] [ebp+14h]
  int i; // [esp+B4h] [ebp+14h]
  int v85; // [esp+B8h] [ebp+18h]

  if ( !byte_1069362C )
    return -1;
  v8 = a1[1];
  if ( v8 )
    *(_DWORD *)(v8 + 2716) |= 8u;
  *(float *)&v9 = COERCE_FLOAT(sub_1008D680(a1[3], (int)a1, a2, a3));
  v78 = v9;
  if ( *(float *)&v9 == NAN )
  {
    v10 = a1[1];
    if ( (*(_DWORD *)(v10 + 252) & 0x800) != 0 )
      sub_100DAE60(a1[1]);
    v11 = *(const char **)(a1[1] + 92);
    v12 = *(float *)(v10 + 584);
    v13 = *(float *)(v10 + 588);
    v74 = *(float *)(v10 + 580);
    v75 = v12;
    v76 = v13;
    if ( !v11 )
      v11 = String;
    DevWarning(2, "FindCover() - %s has no nearest node! (Check near %f %f %f)\n", v11, v74, v75, v76);
    return -1;
  }
  v15 = a7;
  if ( 0.0 == a7 )
  {
    v15 = 784.0;
    a7 = 784.0;
  }
  if ( v15 * 0.5 < a6 )
    a6 = v15 * 0.5;
  v16 = alloca(8 * *(_DWORD *)(a1[2] + 4));
  v63 = *(_DWORD *)(a1[2] + 4);
  v62 = v61;
  v64 = -1;
  v65 = 0;
  v66 = v61;
  v67 = sub_10084F20;
  sub_1008E250(&v71, v63);
  v79 = 0.0;
  v80 = *(float *)&v9;
  sub_10085760((int *)&v62, &v79);
  v81 = a6 * a6;
  v80 = a7 * a7;
  *(_DWORD *)(v73 + 4 * (v9 >> 5)) |= 1 << (v9 & 0x1F);
  if ( !v65 )
  {
LABEL_69:
    sub_10044830((_DWORD *)a1[1], 0.0);
    if ( v72 > 1u )
      (*(void (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, v73);
    v73 = 0;
    sub_102375F0(&v62);
    return -1;
  }
  while ( 1 )
  {
    v82 = *((_DWORD *)v62 + 1);
    v17 = v82;
    sub_10085690((int *)&v62);
    v18 = a1[2];
    if ( v17 < 0 || v17 >= *(_DWORD *)(v18 + 4) )
    {
      ++dword_10691DE0;
      v19 = 0;
    }
    else
    {
      v19 = *(_DWORD *)(*(_DWORD *)(v18 + 8) + 4 * v17);
    }
    sub_1008D160(v19, &v74, *(_DWORD *)(a1[1] + 1676));
    v20 = *a3 - v74;
    v21 = v20 * v20;
    v22 = a3[1] - v75;
    v23 = a3[2] - v76;
    v24 = v23 * v23 + v22 * v22 + v21;
    if ( v81 <= v24 && v24 < v80 )
    {
      v25 = (*(int (__thiscall **)(_DWORD, _DWORD))(*(_DWORD *)a1[1] + 2068))(a1[1], *(_DWORD *)(v19 + 96));
      v26 = (float *)(*(int (__thiscall **)(_DWORD, _BYTE *, int))(*(_DWORD *)a1[1] + 1796))(a1[1], v69, v25);
      v27 = a1[1];
      v70[0] = v74 + *v26;
      v70[1] = v26[1] + v75;
      v59 = *(_DWORD *)(v19 + 96);
      v70[2] = v26[2] + v76;
      if ( (*(unsigned __int8 (__thiscall **)(int, float *, int))(*(_DWORD *)v27 + 1932))(v27, &v74, v59) )
      {
        if ( (*(unsigned __int8 (__thiscall **)(_DWORD, int, float *))(*(_DWORD *)a1[1] + 1944))(a1[1], a5, v70) )
          break;
      }
    }
    v32 = 0;
    for ( i = 0; ; v32 = i )
    {
      v33 = a1[2];
      if ( v17 < 0 || v17 >= *(_DWORD *)(v33 + 4) )
      {
        ++dword_10691DE0;
        v34 = 0;
      }
      else
      {
        v34 = *(_DWORD *)(*(_DWORD *)(v33 + 8) + 4 * v17);
      }
      if ( v32 >= *(_DWORD *)(v34 + 84) )
        break;
      v35 = a1[2];
      if ( v17 < 0 || v17 >= *(_DWORD *)(v35 + 4) )
      {
        ++dword_10691DE0;
        v36 = 0;
      }
      else
      {
        v36 = *(_DWORD *)(*(_DWORD *)(v35 + 8) + 4 * v17);
      }
      v37 = (v32 + dword_106952B4) % *(_DWORD *)(v36 + 84);
      v38 = a1[2];
      if ( v17 < 0 || v17 >= *(_DWORD *)(v38 + 4) )
      {
        ++dword_10691DE0;
        v39 = 0;
      }
      else
      {
        v39 = *(_DWORD *)(*(_DWORD *)(v38 + 8) + 4 * v17);
      }
      v40 = *(__int16 **)(*(_DWORD *)(v39 + 72) + 4 * v37);
      if ( sub_1008FA50((_DWORD *)a1[3], (int)v40, v78) )
      {
        v41 = sub_10074630(v40, v17);
        v42 = 1 << (v41 & 0x1F);
        v43 = 4 * (v41 >> 5);
        v85 = v42;
        if ( (v42 & *(_DWORD *)(v73 + v43)) == 0 )
        {
          v44 = a1[2];
          if ( v41 < 0 || v41 >= *(_DWORD *)(v44 + 4) )
          {
            ++dword_10691DE0;
            v45 = 0;
          }
          else
          {
            v45 = *(_DWORD *)(*(_DWORD *)(v44 + 8) + 4 * v41);
          }
          if ( *(_DWORD *)(v45 + 60) != 4 )
          {
            v46 = a1[2];
            if ( v41 < 0 || v41 >= *(_DWORD *)(v46 + 4) )
            {
              ++dword_10691DE0;
              v47 = 0;
            }
            else
            {
              v47 = *(_DWORD *)(*(_DWORD *)(v46 + 8) + 4 * v41);
            }
            if ( *(float *)(dword_106B31C8 + 12) >= (double)*(float *)(v47 + 92) )
            {
              v48 = *(_DWORD *)(a1[1] + 1676);
              v49 = a1[2];
              if ( v41 < 0 || v41 >= *(_DWORD *)(v49 + 4) )
              {
                ++dword_10691DE0;
                v50 = 0;
              }
              else
              {
                v50 = *(_DWORD *)(*(_DWORD *)(v49 + 8) + 4 * v41);
              }
              v51 = sub_1008D160(v50, v68, v48);
              v52 = *v51;
              v74 = *v51;
              v53 = v51[1];
              v75 = v51[1];
              v54 = v51[2];
              v76 = v51[2];
              v55 = a3[1] - v53;
              v56 = a3[2] - v54;
              v57 = (*a3 - v52) * (*a3 - v52) + v55 * v55 + v56 * v56;
              v58 = a4[1] - v53;
              if ( ((*a4 - v52) * (*a4 - v52) + v58 * v58 + (a4[2] - v54) * (a4[2] - v54)) * 1.5 > v57 )
              {
                v77[0] = v57;
                LODWORD(v77[1]) = v41;
                sub_10085760((int *)&v62, v77);
              }
              v42 = v85;
            }
          }
          *(_DWORD *)(v73 + v43) |= v42;
        }
        v17 = v82;
      }
      ++i;
    }
    if ( !v65 )
      goto LABEL_69;
  }
  v28 = *(_DWORD *)(v19 + 96);
  *(float *)(v19 + 92) = *(float *)(dword_106B31C8 + 12) + 1.0;
  if ( v28 )
  {
    v29 = *(_WORD *)(v28 + 816);
    if ( v29 == 100 || v29 == 101 )
    {
      v83 = (_DWORD *)a1[1];
      if ( sub_1002A5B0(v83) )
      {
        v30 = sub_1002A5B0((_DWORD *)a1[1]);
        v60 = ((double (__thiscall *)(_DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)a1[1] + 2064))(
                a1[1],
                *(__int16 *)(v30 + 816));
        v31 = sub_1002A5B0(v83);
        sub_10070510(v31, v60);
        sub_100448D0((_DWORD *)a1[1], 0);
      }
      sub_100448D0((_DWORD *)a1[1], *(_DWORD *)(v19 + 96));
    }
  }
  dword_106952B4 = v17;
  if ( v72 > 1u )
    (*(void (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, v73);
  v73 = 0;
  sub_102375F0(&v62);
  return v17;
}
