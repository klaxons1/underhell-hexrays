int __thiscall sub_100B3900(_DWORD *this, float *a2, int a3, float a4, float a5, float a6, int a7, float *a8, float a9)
{
  _DWORD *v9; // edi
  int v10; // eax
  int v11; // esi
  int v12; // esi
  const char *v13; // edi
  float v14; // edx
  float v15; // eax
  void *v17; // esp
  int v18; // ebx
  int v19; // edx
  int v20; // eax
  int v21; // ecx
  double v22; // st4
  double v23; // st5
  float *v24; // esi
  int v25; // eax
  int v26; // eax
  int v27; // eax
  int v28; // eax
  double v29; // st7
  int v30; // eax
  int v31; // eax
  int v32; // ecx
  int v33; // edi
  int v34; // eax
  int v35; // edx
  int v36; // eax
  int v37; // eax
  int v38; // eax
  int v39; // ecx
  int v40; // edx
  int v41; // eax
  int v42; // eax
  __int16 *v43; // esi
  int v44; // edi
  int v45; // esi
  int v46; // edx
  int v47; // ecx
  int v48; // ecx
  float *v49; // ebx
  float *v50; // eax
  double v51; // st7
  double v52; // st6
  double v53; // rt1
  double v54; // st7
  float v55; // [esp+14h] [ebp-90h]
  _BYTE v56[12]; // [esp+18h] [ebp-8Ch] BYREF
  _BYTE *v57; // [esp+24h] [ebp-80h] BYREF
  int v58; // [esp+28h] [ebp-7Ch]
  int v59; // [esp+2Ch] [ebp-78h]
  int v60; // [esp+30h] [ebp-74h]
  _BYTE *v61; // [esp+34h] [ebp-70h]
  BOOL (__cdecl *v62)(float *, float *); // [esp+38h] [ebp-6Ch]
  float v63[3]; // [esp+3Ch] [ebp-68h] BYREF
  float v64[3]; // [esp+48h] [ebp-5Ch] BYREF
  float v65; // [esp+54h] [ebp-50h]
  float v66; // [esp+58h] [ebp-4Ch]
  float v67; // [esp+5Ch] [ebp-48h]
  float v68; // [esp+60h] [ebp-44h]
  float v69; // [esp+64h] [ebp-40h]
  float v70; // [esp+68h] [ebp-3Ch]
  unsigned __int16 v71[4]; // [esp+6Ch] [ebp-38h] BYREF
  int v72; // [esp+74h] [ebp-30h]
  float v73; // [esp+78h] [ebp-2Ch] BYREF
  float v74; // [esp+7Ch] [ebp-28h]
  float v75; // [esp+80h] [ebp-24h]
  float v76[2]; // [esp+84h] [ebp-20h] BYREF
  float v77; // [esp+8Ch] [ebp-18h] BYREF
  int v78; // [esp+90h] [ebp-14h]
  int v79; // [esp+94h] [ebp-10h]
  int v80; // [esp+98h] [ebp-Ch]
  int i; // [esp+9Ch] [ebp-8h]
  _DWORD *v82; // [esp+A0h] [ebp-4h]
  int _A4; // [esp+A4h] [ebp+0h] BYREF

  v9 = this;
  v82 = this;
  if ( !byte_1069362C )
    return -1;
  v10 = this[1];
  if ( v10 )
    *(_DWORD *)(v10 + 2716) |= 8u;
  v11 = sub_1008DDF0(this[3], (int)&_A4);
  v80 = v11;
  if ( v11 != -1 )
  {
    v17 = alloca(8 * *(_DWORD *)(v9[2] + 4));
    v58 = *(_DWORD *)(v9[2] + 4);
    v57 = v56;
    v59 = -1;
    v60 = 0;
    v61 = v56;
    v62 = sub_10084F20;
    sub_1008E250(v71, v58);
    v77 = 0.0;
    v78 = v11;
    *(_DWORD *)(v72 + 4 * (v11 >> 5)) |= 1 << (v11 & 0x1F);
    sub_10085760((int *)&v57, &v77);
    if ( !v60 )
    {
LABEL_11:
      if ( v71[1] > 1u )
        (*(void (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, v72);
      v72 = 0;
      sub_102375F0(&v57);
      return -1;
    }
    while ( 1 )
    {
      v78 = *((_DWORD *)v57 + 1);
      v18 = v78;
      sub_10085690((int *)&v57);
      v19 = *(_DWORD *)(v9[1] + 1676);
      v20 = v9[2];
      if ( v18 < 0 || v18 >= *(_DWORD *)(v20 + 4) )
      {
        ++dword_10691DE0;
        v21 = 0;
      }
      else
      {
        v21 = *(_DWORD *)(*(_DWORD *)(v20 + 8) + 4 * v18);
      }
      sub_1008D160(v21, &v73, v19);
      if ( v18 == v11 )
        goto LABEL_48;
      if ( a7 == 1 )
      {
        v24 = a2;
        v65 = *a8 - *a2;
        v66 = a8[1] - a2[1];
        v67 = a8[2] - a2[2];
        off_10689714();
        v68 = v73 - *a2;
        v69 = v74 - a2[1];
        v70 = v75 - a2[2];
        off_10689714();
        if ( acos(v68 * v65 + v69 * v66 + v70 * v67) * 57.29578 < a9 )
          goto LABEL_48;
      }
      else
      {
        if ( a7 == 2 )
        {
          v22 = v74 - a8[1];
          v23 = v75 - a8[2];
          v55 = v23 * v23 + v22 * v22 + (v73 - *a8) * (v73 - *a8);
          if ( off_10689708(v55) < a9 )
            goto LABEL_48;
        }
        v24 = a2;
      }
      v25 = v9[2];
      if ( v18 < 0 || v18 >= *(_DWORD *)(v25 + 4) )
      {
        ++dword_10691DE0;
        v26 = 0;
      }
      else
      {
        v26 = *(_DWORD *)(*(_DWORD *)(v25 + 8) + 4 * v18);
      }
      if ( *(float *)(dword_106B31C8 + 12) >= (double)*(float *)(v26 + 92) )
      {
        v27 = v9[2];
        if ( v18 < 0 || v18 >= *(_DWORD *)(v27 + 4) )
        {
          ++dword_10691DE0;
          v28 = 0;
        }
        else
        {
          v28 = *(_DWORD *)(*(_DWORD *)(v27 + 8) + 4 * v18);
        }
        if ( *(_DWORD *)(v28 + 60) != 4 )
        {
          v64[0] = v73 - *v24;
          v64[1] = v74 - v24[1];
          v64[2] = v75 - v24[2];
          v29 = sub_100D7A40(v64);
          if ( a5 > v29 && v29 > a4 )
          {
            v30 = v9[2];
            if ( v18 < 0 || v18 >= *(_DWORD *)(v30 + 4) )
            {
              ++dword_10691DE0;
              v31 = 0;
            }
            else
            {
              v31 = *(_DWORD *)(*(_DWORD *)(v30 + 8) + 4 * v18);
            }
            v32 = v9[1];
            i = *(_DWORD *)(v31 + 96);
            if ( (*(unsigned __int8 (__thiscall **)(int, float *, int, int))(*(_DWORD *)v32 + 1936))(v32, &v73, v31, i) )
            {
              if ( (*(unsigned __int8 (__thiscall **)(_DWORD, float *, int))(*(_DWORD *)v9[1] + 1940))(v9[1], &v73, a3) )
              {
                v33 = v9[2];
                if ( v18 < 0 || v18 >= *(_DWORD *)(v33 + 4) )
                {
                  ++dword_10691DE0;
                  v34 = 0;
                }
                else
                {
                  v34 = *(_DWORD *)(*(_DWORD *)(v33 + 8) + 4 * v18);
                }
                v54 = *(float *)(dword_106B31C8 + 12) + a6;
                dword_106952B8 = v18;
                *(float *)(v34 + 92) = v54;
                sub_100538C0((int)v71);
                sub_102375F0(&v57);
                return v18;
              }
            }
          }
        }
      }
LABEL_48:
      v35 = 0;
      for ( i = 0; ; v35 = i )
      {
        v36 = v9[2];
        if ( v18 < 0 || v18 >= *(_DWORD *)(v36 + 4) )
        {
          ++dword_10691DE0;
          v37 = 0;
        }
        else
        {
          v37 = *(_DWORD *)(*(_DWORD *)(v36 + 8) + 4 * v18);
        }
        if ( v35 >= *(_DWORD *)(v37 + 84) )
          break;
        v38 = v9[2];
        if ( v18 < 0 || v18 >= *(_DWORD *)(v38 + 4) )
        {
          ++dword_10691DE0;
          v39 = 0;
        }
        else
        {
          v39 = *(_DWORD *)(*(_DWORD *)(v38 + 8) + 4 * v18);
        }
        v40 = (v35 + dword_106952B8) % *(_DWORD *)(v39 + 84);
        v41 = v9[2];
        if ( v18 < 0 || v18 >= *(_DWORD *)(v41 + 4) )
        {
          ++dword_10691DE0;
          v42 = 0;
        }
        else
        {
          v42 = *(_DWORD *)(*(_DWORD *)(v41 + 8) + 4 * v18);
        }
        v43 = *(__int16 **)(*(_DWORD *)(v42 + 72) + 4 * v40);
        if ( sub_1008FA50((_DWORD *)v9[3], (int)v43, v80) )
        {
          v44 = sub_10074630(v43, v18);
          v45 = 4 * (v44 >> 5);
          v79 = 1 << (v44 & 0x1F);
          if ( (v79 & *(_DWORD *)(v72 + v45)) == 0 )
          {
            v46 = *(_DWORD *)(v82[1] + 1676);
            v47 = v82[2];
            if ( v44 < 0 || v44 >= *(_DWORD *)(v47 + 4) )
            {
              ++dword_10691DE0;
              v48 = 0;
            }
            else
            {
              v48 = *(_DWORD *)(*(_DWORD *)(v47 + 8) + 4 * v44);
            }
            v49 = (float *)v82[1];
            v50 = sub_1008D160(v48, v63, v46);
            v51 = v49[179] - *v50;
            v52 = v49[180];
            LODWORD(v76[1]) = v44;
            v53 = v49[181] - v50[2];
            v76[0] = v51 * v51 + (v52 - v50[1]) * (v52 - v50[1]) + v53 * v53;
            sub_10085760((int *)&v57, v76);
            *(_DWORD *)(v72 + v45) |= v79;
            v18 = v78;
          }
          v9 = v82;
        }
        ++i;
      }
      if ( !v60 )
        goto LABEL_11;
      v11 = v80;
    }
  }
  v12 = v9[1];
  if ( (*(_DWORD *)(v12 + 252) & 0x800) != 0 )
    sub_100DAE60(v9[1]);
  v13 = *(const char **)(v9[1] + 92);
  v14 = *(float *)(v12 + 584);
  v15 = *(float *)(v12 + 588);
  v65 = *(float *)(v12 + 580);
  v66 = v14;
  v67 = v15;
  if ( !v13 )
    v13 = String;
  DevWarning(2, "FindCover() - %s has no nearest node! (Check near %f %f %f)\n", v13, v65, v66, v67);
  return -1;
}
