int __userpurge sub_10035940@<eax>(int *a1@<ecx>, int a2@<edi>, int a3)
{
  int v3; // ebx
  int result; // eax
  unsigned int v6; // eax
  int v7; // edx
  unsigned int v8; // eax
  int *v9; // edx
  unsigned int v10; // eax
  int v11; // edx
  unsigned int v12; // eax
  int v13; // edx
  unsigned int v14; // eax
  int v15; // ecx
  unsigned int v16; // eax
  int v17; // eax
  unsigned int v18; // eax
  int v19; // ecx
  bool v20; // zf
  unsigned int v21; // eax
  int v22; // eax
  unsigned int v23; // eax
  int v24; // eax
  _DWORD *v25; // edi
  int v26; // ebx
  int v27; // ecx
  int v28; // eax
  unsigned int v29; // eax
  int *v30; // ecx
  int v31; // ecx
  unsigned int v32; // ecx
  int *v33; // eax
  unsigned int v34; // ecx
  int v35; // eax
  float v36; // edi
  int v37; // eax
  float v38; // edi
  int v39; // eax
  _DWORD *v40; // eax
  float *v41; // eax
  double v42; // st7
  float *v43; // eax
  double v44; // st6
  float v45; // edx
  float v46; // edi
  int v47; // eax
  int v48; // eax
  int v49; // eax
  char v50; // al
  float v51; // edi
  int v52; // eax
  double v53; // st7
  int v54; // eax
  float v55; // edi
  int v56; // eax
  int v57; // [esp+34h] [ebp-84h]
  int v59; // [esp+40h] [ebp-78h]
  int v60; // [esp+40h] [ebp-78h]
  int v61; // [esp+40h] [ebp-78h]
  int v62; // [esp+44h] [ebp-74h]
  _DWORD v63[13]; // [esp+4Ch] [ebp-6Ch] BYREF
  float v64; // [esp+80h] [ebp-38h]
  float v65; // [esp+9Ch] [ebp-1Ch]
  float v66; // [esp+A0h] [ebp-18h]
  float v67; // [esp+A4h] [ebp-14h]
  float v68; // [esp+A8h] [ebp-10h] BYREF
  float v69; // [esp+ACh] [ebp-Ch]
  float v70; // [esp+B0h] [ebp-8h]
  int v71; // [esp+B4h] [ebp-4h] BYREF

  v3 = a3;
  a1[679] &= ~2u;
  result = sub_100CB580(a3);
  if ( result )
  {
    if ( a1[588] == 1 )
      (*(void (__thiscall **)(int *, int))(*a1 + 1412))(a1, 1);
    if ( !a1[699]
      || ((v6 = *(_DWORD *)(a3 + 44), v6 == -1) || off_1061BE18[4 * (*(_DWORD *)(a3 + 44) & 0xFFF) + 2] != v6 >> 12
        ? (v7 = 0)
        : (v7 = off_1061BE18[4 * (*(_DWORD *)(a3 + 44) & 0xFFF) + 1]),
          !(unsigned __int8)sub_100B0EE0(v7)) )
    {
      if ( a1[202] != 8 || a1[429] >= *(_DWORD *)(dword_106B91BC + 48) && (a1[435] & 1) == 0 )
        (*(void (__thiscall **)(int *, int))(*a1 + 1624))(a1, a3);
    }
    if ( a1[629] == 1 )
    {
      v8 = a1[672];
      if ( v8 != -1 )
      {
        v9 = &off_1061BE18[4 * (a1[672] & 0xFFF) + 1];
        v10 = v8 >> 12;
        if ( off_1061BE18[4 * (a1[672] & 0xFFF) + 2] == v10 )
        {
          if ( *v9 )
          {
            if ( (*(_BYTE *)(164 * a1[630] + a1[631] + 12) & 2) != 0 )
            {
              v11 = off_1061BE18[4 * (a1[672] & 0xFFF) + 2] == v10 ? *v9 : 0;
              if ( *(_BYTE *)(v11 + 877) && !*(_BYTE *)(v11 + 832) )
              {
                sub_1026A890(a1 + 672);
                sub_1022FD80(1);
              }
            }
            v3 = a3;
          }
        }
      }
    }
    if ( a1[55] <= 0 && sub_10031230((int)a1) )
    {
      v12 = *(_DWORD *)(v3 + 44);
      if ( v12 == -1 || off_1061BE18[4 * (*(_DWORD *)(v3 + 44) & 0xFFF) + 2] != v12 >> 12 )
        v13 = 0;
      else
        v13 = off_1061BE18[4 * (*(_DWORD *)(v3 + 44) & 0xFFF) + 1];
      v14 = a1[626];
      if ( v14 == -1 || off_1061BE18[4 * (a1[626] & 0xFFF) + 2] != v14 >> 12 )
        v15 = 0;
      else
        v15 = off_1061BE18[4 * (a1[626] & 0xFFF) + 1];
      if ( v13 != v15 )
      {
        v71 = 1;
        sub_1002AB00(a1 + 55, &v71);
      }
    }
    if ( *(float *)(dword_106B31C8 + 12) != *((float *)a1 + 682) )
    {
      v16 = *(_DWORD *)(a3 + 44);
      if ( v16 == -1 || off_1061BE18[4 * (*(_DWORD *)(a3 + 44) & 0xFFF) + 2] != v16 >> 12 )
        v17 = 0;
      else
        v17 = off_1061BE18[4 * (*(_DWORD *)(a3 + 44) & 0xFFF) + 1];
      sub_1010DD80(v17, (int)a1, 0.0);
      v18 = *(_DWORD *)(a3 + 44);
      if ( v18 == -1 || off_1061BE18[4 * (*(_DWORD *)(a3 + 44) & 0xFFF) + 2] != v18 >> 12 )
        v19 = 0;
      else
        v19 = off_1061BE18[4 * (*(_DWORD *)(a3 + 44) & 0xFFF) + 1];
      v20 = (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v19 + 320))(v19) == 0;
      v21 = *(_DWORD *)(a3 + 44);
      if ( v20 )
      {
        if ( v21 == -1 || off_1061BE18[4 * (*(_DWORD *)(a3 + 44) & 0xFFF) + 2] != v21 >> 12 )
          v24 = 0;
        else
          v24 = off_1061BE18[4 * (*(_DWORD *)(a3 + 44) & 0xFFF) + 1];
        v25 = (_DWORD *)__RTDynamicCast(
                          v24,
                          0,
                          (struct _s_RTTICompleteObjectLocator *)&CBaseEntity `RTTI Type Descriptor',
                          (int)&CAI_BaseNPC `RTTI Type Descriptor',
                          0);
        if ( *(int *)(dword_106B31C8 + 20) <= 1 )
          v26 = sub_10261B20();
        else
          v26 = 0;
        if ( v25
          && (*(unsigned __int8 (__thiscall **)(_DWORD *))(*v25 + 264))(v25)
          && v26
          && v25[699]
          && sub_100296A0(v25) )
        {
          v57 = sub_1001E870((_DWORD *)a3);
          sub_1010DD80(v57, (int)a1, 0.0);
        }
      }
      else
      {
        if ( v21 == -1 || off_1061BE18[4 * (*(_DWORD *)(a3 + 44) & 0xFFF) + 2] != v21 >> 12 )
          v22 = 0;
        else
          v22 = off_1061BE18[4 * (*(_DWORD *)(a3 + 44) & 0xFFF) + 1];
        sub_1010DD80(v22, (int)a1, 0.0);
        v23 = *(_DWORD *)(a3 + 44);
        if ( v23 == -1 || off_1061BE18[4 * (*(_DWORD *)(a3 + 44) & 0xFFF) + 2] != v23 >> 12 )
          sub_1010DD80(0, (int)a1, 0.0);
        else
          sub_1010DD80(off_1061BE18[4 * (*(_DWORD *)(a3 + 44) & 0xFFF) + 1], (int)a1, 0.0);
      }
    }
    v27 = a3;
    v28 = *(_DWORD *)(a3 + 64);
    if ( (v28 & 1) != 0 && (v28 & 0x800000) == 0 && *(float *)(a3 + 52) >= 5.0 )
    {
      sub_10023CB0((char *)a1, 19);
      v27 = a3;
    }
    if ( a1[55] <= a1[54] / 2 )
    {
      v29 = *(_DWORD *)(v27 + 44);
      if ( v29 == -1 || (v30 = &off_1061BE18[4 * (*(_DWORD *)(v27 + 44) & 0xFFF) + 1], v30[1] != v29 >> 12) )
        v31 = 0;
      else
        v31 = *v30;
      sub_1010DD80(v31, (int)a1, 0.0);
    }
    if ( (a1[64] & 0x2000) != 0 )
    {
      v32 = *(_DWORD *)(a3 + 44);
      if ( v32 != -1 )
      {
        v33 = &off_1061BE18[4 * (*(_DWORD *)(a3 + 44) & 0xFFF) + 1];
        v34 = v32 >> 12;
        if ( off_1061BE18[4 * (*(_DWORD *)(a3 + 44) & 0xFFF) + 2] == v34 )
        {
          if ( *v33 )
          {
            if ( off_1061BE18[4 * (*(_DWORD *)(a3 + 44) & 0xFFF) + 2] == v34 )
              v35 = *v33;
            else
              v35 = 0;
            if ( (*(_DWORD *)(v35 + 256) & 0x2080) != 0 )
            {
              v36 = *(float *)a1;
              v37 = sub_1001E870((_DWORD *)a3);
              if ( !(*(unsigned __int8 (__thiscall **)(int *, int, int))(LODWORD(v36) + 876))(a1, v37, a2)
                || (v38 = *(float *)a1,
                    v39 = sub_1001E870((_DWORD *)a3),
                    !(*(unsigned __int8 (__thiscall **)(int *, int, int, _DWORD))(LODWORD(v38) + 548))(
                       a1,
                       v39,
                       16449,
                       0)) )
              {
                if ( sub_100232D0((_DWORD *)a3) )
                {
                  v40 = (_DWORD *)sub_100232D0((_DWORD *)a3);
                  v41 = (float *)sub_10019640(v40);
                  v68 = *v41;
                  v69 = v41[1];
                  v42 = v41[2];
                }
                else
                {
                  v65 = flt_106B4F40 * 64.0;
                  v66 = flt_106B4F44 * 64.0;
                  v67 = 64.0 * flt_106B4F48;
                  v43 = (float *)sub_10019640(a1);
                  v44 = v43[1] + v66;
                  v42 = v43[2] + v67;
                  v68 = *v43 + v65;
                  v69 = v44;
                }
                v45 = *(float *)a1;
                v70 = v42;
                if ( !(*(int (__thiscall **)(int *))(LODWORD(v45) + 368))(a1)
                  || (v59 = sub_1001E870((_DWORD *)a3),
                      (*(void (__thiscall **)(int *))(*a1 + 1868))(a1),
                      (unsigned __int8)sub_100774C0(v59))
                  || sub_10023D10(a1, 10) )
                {
                  v49 = sub_1001E870((_DWORD *)a3);
                  (*(void (__thiscall **)(int *, int))(*a1 + 1868))(a1, v49);
                  v50 = sub_100774C0(v62);
                  v62 = 0;
                  if ( v50 )
                  {
                    v51 = *(float *)a1;
                    v52 = sub_1001E870((_DWORD *)a3);
                    (*(void (__thiscall **)(int *, int, float *))(LODWORD(v51) + 1876))(a1, v52, &v68);
                  }
                  else
                  {
                    (*(void (__thiscall **)(int *, _DWORD, float *))(*a1 + 1876))(a1, 0, &v68);
                  }
                }
                else
                {
                  v46 = *(float *)a1;
                  v47 = (*(int (__thiscall **)(int *))(*a1 + 368))(a1);
                  v48 = (*(int (__thiscall **)(int *, float *, int))(*a1 + 368))(a1, &v68, v47);
                  (*(void (__thiscall **)(int *, int, int))(LODWORD(v46) + 1876))(a1, v48, v60);
                }
              }
              if ( (*(unsigned __int8 (__thiscall **)(int *, int))(*a1 + 2116))(a1, a3) )
                sub_10023CB0((char *)a1, 17);
              if ( (*(unsigned __int8 (__thiscall **)(int *, int))(*a1 + 2120))(a1, a3) )
                sub_10023CB0((char *)a1, 18);
              *((_BYTE *)a1 + 2320) = 1;
              a1[585] = 0;
              v53 = *(float *)(a3 + 52);
              if ( *(float *)(dword_106B31C8 + 12) - *((float *)a1 + 682) < 1.0 )
                v53 = v53 + *((float *)a1 + 681);
              *((float *)a1 + 681) = v53;
              a1[682] = *(int *)(dword_106B31C8 + 12);
              if ( sub_1001E870((_DWORD *)a3) )
              {
                v54 = sub_1001E870((_DWORD *)a3);
                if ( (*(unsigned __int8 (__thiscall **)(int, int))(*(_DWORD *)v54 + 320))(v54, v62) )
                  a1[683] = *(int *)(dword_106B31C8 + 12);
              }
              v61 = sub_1001E870((_DWORD *)a3);
              (*(void (__thiscall **)(int *))(*a1 + 1868))(a1);
              sub_10077460(v61);
              if ( (double)a1[54] * 0.3 < *((float *)a1 + 681) )
                sub_10023CB0((char *)a1, 20);
              v55 = *(float *)a1;
              v56 = sub_1001E870((_DWORD *)a3);
              (*(void (__thiscall **)(int *, int))(LODWORD(v55) + 1012))(a1, v56);
            }
            if ( *(_DWORD *)(a3 + 64) == 1 && ++dword_10691AE8 > 20 )
            {
              sub_1001E4E0(v63, a3);
              v64 = v64 + 1000.0;
              sub_10031BF0((int)a1, 12, (int)v63, 0);
              sub_10031BF0((int)a1, 7, (int)v63, 0);
              sub_10031BF0((int)a1, 9, (int)v63, 0);
              sub_10031BF0((int)a1, 1, (int)v63, 0);
              sub_10031BF0((int)a1, 3, (int)v63, 0);
            }
            if ( (a1[63] & 0x800) != 0 )
              sub_100DAE60(a1);
            sub_1023D4B0(1, (int)(a1 + 145), 1024, 0.5, (int)a1, 5, 0);
          }
        }
      }
    }
    return 1;
  }
  return result;
}
