unsigned int __userpurge sub_100F3CC0@<eax>(
        int a1@<ebp>,
        int a2,
        int a3,
        float a4,
        float a5,
        int a6,
        float *a7,
        float a8,
        float a9,
        float a10,
        float *a11,
        float *a12)
{
  double v12; // st7
  unsigned int result; // eax
  _DWORD *v14; // edx
  _DWORD *v15; // edi
  DWORD CurrentThreadId; // eax
  float v17; // eax
  int v18; // edi
  int v19; // eax
  int v20; // edi
  double v21; // st6
  double v22; // st7
  float v23; // eax
  int v24; // ecx
  int v25; // edi
  int v26; // eax
  double v27; // st5
  double v28; // st5
  double v29; // st4
  double v30; // st4
  double v31; // rt2
  double v32; // st5
  int v33; // eax
  double v34; // st7
  double v35; // st6
  double v36; // st7
  float *v38; // eax
  float *v39; // ecx
  float *v40; // eax
  double v41; // st6
  double v42; // st7
  int v43; // edx
  int v44; // ecx
  __int16 v45; // ax
  double v46; // st5
  double v47; // st5
  double v48; // st4
  double v49; // st4
  double v50; // rtt
  double v51; // st5
  double v52; // st7
  int v53; // eax
  int v54; // edx
  double v55; // st6
  double v56; // st5
  double v57; // st4
  double v58; // st4
  double v59; // st7
  float *v61; // eax
  float *v62; // ecx
  int v63; // ecx
  float *v64; // edx
  int v65; // edi
  int v66; // esi
  double v67; // st6
  float *v68; // esi
  _DWORD v69[128]; // [esp+38h] [ebp-43Ch] BYREF
  _BYTE v70[88]; // [esp+238h] [ebp-23Ch] BYREF
  _BYTE v71[88]; // [esp+290h] [ebp-1E4h] BYREF
  float v72[20]; // [esp+2E8h] [ebp-18Ch] BYREF
  _BYTE v73[48]; // [esp+338h] [ebp-13Ch] BYREF
  float v74[16]; // [esp+368h] [ebp-10Ch] BYREF
  __int16 v75; // [esp+3A8h] [ebp-CCh]
  float v76[3]; // [esp+3BCh] [ebp-B8h] BYREF
  float v77[3]; // [esp+3C8h] [ebp-ACh] BYREF
  float v78; // [esp+3D4h] [ebp-A0h] BYREF
  float v79; // [esp+3D8h] [ebp-9Ch]
  float v80; // [esp+3DCh] [ebp-98h]
  float v81[3]; // [esp+3E0h] [ebp-94h] BYREF
  int v82; // [esp+3ECh] [ebp-88h]
  float v83; // [esp+3F0h] [ebp-84h] BYREF
  float v84; // [esp+3F4h] [ebp-80h]
  float v85; // [esp+3F8h] [ebp-7Ch]
  float v86; // [esp+3FCh] [ebp-78h]
  float v87; // [esp+400h] [ebp-74h] BYREF
  float v88; // [esp+404h] [ebp-70h]
  float v89; // [esp+408h] [ebp-6Ch]
  float v90; // [esp+40Ch] [ebp-68h] BYREF
  float v91; // [esp+410h] [ebp-64h]
  float v92; // [esp+414h] [ebp-60h]
  int v93; // [esp+418h] [ebp-5Ch]
  float v94; // [esp+41Ch] [ebp-58h]
  float v95; // [esp+420h] [ebp-54h]
  float v96; // [esp+424h] [ebp-50h]
  float v97; // [esp+428h] [ebp-4Ch]
  float v98; // [esp+42Ch] [ebp-48h]
  float v99; // [esp+430h] [ebp-44h]
  float v100; // [esp+434h] [ebp-40h]
  _DWORD *v101; // [esp+438h] [ebp-3Ch]
  float v102; // [esp+43Ch] [ebp-38h]
  float v103; // [esp+440h] [ebp-34h]
  float i; // [esp+444h] [ebp-30h]
  float v105; // [esp+448h] [ebp-2Ch]
  float j; // [esp+44Ch] [ebp-28h]
  float v107; // [esp+450h] [ebp-24h]
  float v108; // [esp+454h] [ebp-20h]
  float v109; // [esp+458h] [ebp-1Ch]
  float v110; // [esp+45Ch] [ebp-18h]
  float v111; // [esp+460h] [ebp-14h]
  char v112; // [esp+467h] [ebp-Dh]
  int v113; // [esp+468h] [ebp-Ch]
  void *v114; // [esp+46Ch] [ebp-8h]
  void *retaddr; // [esp+474h] [ebp+0h]

  v113 = a1;
  v114 = retaddr;
  v12 = 0.0;
  v82 = a2 + 68 * a3;
  result = *(_DWORD *)(v82 + 148);
  v112 = 0;
  if ( !result
    || (result = *(_DWORD *)result, result == -1)
    || (v14 = (_DWORD *)((char *)off_103DCD74 + 16 * (result & 0xFFF) + 4), result >>= 12, v14[1] != result)
    || (v101 = (_DWORD *)*v14, (v15 = v101) == 0) )
  {
LABEL_58:
    v63 = 0;
    if ( SLODWORD(a4) > 0 )
    {
      v64 = a11;
      result = (unsigned int)(a7 + 2);
      v65 = (char *)a11 - (char *)a7;
      do
      {
        v66 = v82;
        *(float *)(result - 8) = *(float *)(v82 + 88);
        *(float *)(result - 4) = *(float *)(v66 + 92);
        v67 = *(float *)(v66 + 96);
        v68 = a12;
        *(float *)result = v67;
        if ( v68 )
          v68[v63] = 0.0;
        if ( a11 )
        {
          *v64 = v12;
          v64[1] = v12;
          *(float *)(v65 + result) = v12;
        }
        ++v63;
        result += 12;
        v64 += 3;
      }
      while ( v63 < SLODWORD(a4) );
    }
    return result;
  }
  v108 = 1.0 - a5;
  sub_101F8ED0(a3, *(float *)(a2 + 36), (int)&v87);
  CurrentThreadId = GetCurrentThreadId();
  v109 = *(float *)&CurrentThreadId;
  if ( CurrentThreadId != dword_10435DF4 && _InterlockedCompareExchange(&dword_10435DF4, CurrentThreadId, 0) )
  {
    _mm_pause();
    CThreadFastMutex::Lock(&dword_10435DF4, LODWORD(v109), 0);
  }
  else
  {
    ++dword_10435DF8;
  }
  v17 = COERCE_FLOAT((*(int (__thiscall **)(_DWORD *))(*v15 + 164))(v15));
  v111 = v17;
  if ( v17 != 0.0 && sub_10028810(SLODWORD(v17), v69) )
  {
    v18 = *(_DWORD *)dword_10413178;
    v19 = (*(int (__thiscall **)(int))(*(_DWORD *)(LODWORD(v111) + 4) + 36))(LODWORD(v111) + 4);
    v20 = (*(int (__thiscall **)(int, int))(v18 + 112))(dword_10413178, v19);
    if ( v20 )
    {
      v93 = v20 + *(_DWORD *)(v20 + 176) + 12 * sub_10025760((_DWORD *)LODWORD(v111));
      if ( v93 )
      {
        v105 = 0.0;
        v102 = 0.0;
        j = 0.0;
        v112 = 1;
        v103 = 0.0;
        v86 = *(float *)&a6;
        if ( !sub_100E2000(&a8, 0.000099999997) && a6 <= 5 )
          LODWORD(v86) = 5;
        if ( SLODWORD(a4) > 0 )
        {
          v109 = a4;
          v107 = v86;
          v21 = a5 - v108;
          v22 = v108;
          v111 = v21;
          for ( i = -1.0e20; ; i = -1.0e20 )
          {
            while ( 1 )
            {
              v23 = *(float *)(v93 + 4);
              v24 = *(_DWORD *)(a2 + 6620);
              v25 = *(_DWORD *)(a2 + 6624);
              *(_DWORD *)(a2 + 6620) = v24 + 1;
              LODWORD(v97) = v24 + 1;
              v110 = v23;
              LODWORD(v100) = (int)((double)SLODWORD(v23) * flt_103EE7C0[((_WORD)v25 + (_WORD)v24) & 0xFFF]);
              v26 = *(_DWORD *)(v93 + 8) + v93 + 68 * LODWORD(v100);
              *(_DWORD *)(a2 + 6620) = v24 + 2;
              v27 = flt_103EE7C0[((_WORD)v25 + (_WORD)v24 + 1) & 0xFFF];
              *(_DWORD *)(a2 + 6620) = v24 + 3;
              v28 = v27 * v21 + v22;
              v97 = v28;
              v29 = flt_103EE7C0[((_WORD)v25 + (_WORD)v24 + 2) & 0xFFF];
              *(_DWORD *)(a2 + 6620) = v24 + 4;
              v30 = v29 * v21 + v22;
              v98 = v30;
              v31 = v28;
              v32 = v22 + v21 * flt_103EE7C0[((_WORD)v24 + 3 + (_WORD)v25) & 0xFFF];
              v99 = v32;
              v81[0] = v31 * (*(float *)(v26 + 20) - *(float *)(v26 + 8)) + *(float *)(v26 + 8);
              v81[1] = v30 * (*(float *)(v26 + 24) - *(float *)(v26 + 12)) + *(float *)(v26 + 12);
              v81[2] = v32 * (*(float *)(v26 + 28) - *(float *)(v26 + 16)) + *(float *)(v26 + 16);
              sub_101ED860(v81, v69[*(_DWORD *)v26], &v90);
              v33 = *(_DWORD *)(a2 + 6620);
              v34 = v90 - v87;
              v35 = v91;
              *(_DWORD *)(a2 + 6620) = v33 + 1;
              v36 = (v92 - v89) * a10
                  + (v35 - v88) * a9
                  + v34 * a8
                  + flt_103EE7C0[((_WORD)v33 + (unsigned __int16)*(_DWORD *)(a2 + 6624)) & 0xFFF] * 72.0;
              v110 = v36;
              if ( a6 )
              {
                sub_1000E430(v72, &v90, &v90);
                (*(void (__thiscall **)(int, float *, int, _DWORD *, _BYTE *))(*(_DWORD *)dword_104131A0 + 8))(
                  dword_104131A0,
                  v72,
                  -1,
                  v101,
                  v71);
                if ( v71[55] )
                  v36 = v110 + 1000.0;
                else
                  v36 = v110;
              }
              if ( i < v36 )
              {
                v105 = v97;
                v103 = v100;
                v102 = v98;
                j = v99;
                v94 = v90;
                v95 = v91;
                v96 = v92;
                i = v36;
              }
              if ( !LODWORD(v107)-- )
                break;
              v22 = v108;
              v21 = v111;
            }
            v38 = a7;
            *a7 = v94;
            a7 += 3;
            v39 = a11;
            v38[1] = v95;
            v38[2] = v96;
            if ( v39 )
            {
              *v39 = v105;
              a11 = v39 + 3;
              v39[1] = v102;
              v39[2] = j;
            }
            v40 = a12;
            if ( a12 )
            {
              *a12 = v103;
              a12 = v40 + 1;
            }
            --LODWORD(v109);
            if ( v109 == 0.0 )
              break;
            v22 = v108;
            v21 = v111;
            v107 = v86;
          }
        }
      }
    }
    v15 = v101;
  }
  result = sub_10034820(v15);
  if ( (_BYTE)result )
  {
    (*(void (__thiscall **)(_DWORD *, float *, float *))(v15[1] + 80))(v15 + 1, &v78, v77);
    (*(void (__thiscall **)(_DWORD *))(v15[1] + 4))(v15 + 1);
    sub_10037F50((int)v15);
    v105 = 0.0;
    v107 = 0.0;
    i = 0.0;
    qmemcpy(v73, v15 + 165, sizeof(v73));
    v109 = *(float *)&a6;
    result = sub_100E2000(&a8, 0.000099999997);
    if ( !(_BYTE)result && a6 <= 5 )
      LODWORD(v109) = 5;
    if ( SLODWORD(a4) > 0 )
    {
      v110 = a4;
      v41 = a5 - v108;
      v42 = v108;
      v102 = v109;
      v111 = v41;
      for ( j = -1.0e20; ; j = -1.0e20 )
      {
        while ( 1 )
        {
          v43 = *(_DWORD *)(a2 + 6620);
          v44 = *(_DWORD *)(a2 + 6624);
          v45 = v43 + 1;
          *(_DWORD *)(a2 + 6620) = v43 + 1;
          v46 = flt_103EE7C0[((_WORD)v44 + (_WORD)v43) & 0xFFF];
          v43 += 2;
          *(_DWORD *)(a2 + 6620) = v43;
          v47 = v46 * v41 + v42;
          v100 = v47;
          v48 = flt_103EE7C0[((_WORD)v44 + v45) & 0xFFF];
          *(_DWORD *)(a2 + 6620) = v43 + 1;
          v49 = v48 * v41 + v42;
          v99 = v49;
          v50 = v47;
          v51 = v42 + v41 * flt_103EE7C0[((_WORD)v43 + (_WORD)v44) & 0xFFF];
          v98 = v51;
          v76[0] = v50 * (v77[0] - v78) + v78;
          v76[1] = v49 * (v77[1] - v79) + v79;
          v76[2] = v51 * (v77[2] - v80) + v80;
          sub_101ED860(v76, v73, &v83);
          v52 = v83;
          v53 = *(_DWORD *)(a2 + 6620);
          v54 = *(_DWORD *)(a2 + 6624);
          v55 = v83 - v87;
          v56 = v84;
          v57 = v88;
          *(_DWORD *)(a2 + 6620) = v53 + 1;
          v58 = v55 * a8 + (v56 - v57) * a9 + (v85 - v89) * a10 + flt_103EE7C0[((_WORD)v53 + (_WORD)v54) & 0xFFF] * 72.0;
          v103 = v58;
          if ( a6 )
          {
            v74[4] = 0.0;
            v74[5] = 0.0;
            v74[6] = 0.0;
            v74[14] = 0.0;
            v75 = 1;
            v74[13] = 0.0;
            v74[12] = 0.0;
            v74[10] = 0.0;
            v74[9] = 0.0;
            v74[8] = 0.0;
            v74[0] = v52;
            v74[1] = v56;
            v74[2] = v85;
            (*(void (__thiscall **)(int, float *, int, _DWORD *, _BYTE *))(*(_DWORD *)dword_104131A0 + 8))(
              dword_104131A0,
              v74,
              -1,
              v101,
              v70);
            if ( v70[55] )
              v59 = v103 + 1000.0;
            else
              v59 = v103;
          }
          else
          {
            v59 = v58;
          }
          if ( j < v59 )
          {
            v105 = v100;
            v107 = v99;
            i = v98;
            v94 = v83;
            v95 = v84;
            v96 = v85;
            j = v59;
          }
          if ( !LODWORD(v102)-- )
            break;
          v42 = v108;
          v41 = v111;
        }
        v61 = a7;
        *a7 = v94;
        a7 += 3;
        v62 = a11;
        v61[1] = v95;
        v61[2] = v96;
        if ( v62 )
        {
          *v62 = v105;
          a11 = v62 + 3;
          v62[1] = v107;
          v62[2] = i;
        }
        result = (unsigned int)a12;
        if ( a12 )
        {
          *a12 = 0.0;
          result += 4;
          a12 = (float *)result;
        }
        --LODWORD(v110);
        if ( v110 == 0.0 )
          break;
        v42 = v108;
        v41 = v111;
        v102 = v109;
      }
    }
  }
  if ( !--dword_10435DF8 )
    result = _InterlockedExchange(&dword_10435DF4, 0);
  if ( !v112 )
  {
    v12 = 0.0;
    goto LABEL_58;
  }
  return result;
}
