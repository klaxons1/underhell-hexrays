int __cdecl __strgtold12_l(int a1, char **a2, char *a3, int a4, int a5, int a6, int a7, int a8)
{
  int v8; // ecx
  _BYTE *v9; // edi
  int result; // eax
  char *v11; // edx
  char v12; // al
  char v13; // al
  int v14; // eax
  int v15; // eax
  int v16; // eax
  int v17; // eax
  bool v18; // zf
  int v19; // eax
  int v20; // ecx
  int v21; // eax
  int v22; // eax
  char *v23; // ecx
  char v24; // al
  char *v25; // ecx
  int v26; // eax
  char *v27; // ebx
  __int16 v28; // ax
  __int16 v29; // si
  unsigned __int16 v30; // cx
  int v31; // eax
  _WORD *v32; // edi
  unsigned int v33; // eax
  unsigned int v34; // edx
  unsigned int v35; // esi
  __int16 v36; // cx
  unsigned int v37; // eax
  int v38; // esi
  int v39; // eax
  int v40; // esi
  int v41; // eax
  int v42; // edi
  int v43; // eax
  __int16 v44; // cx
  int v45; // esi
  unsigned int v46; // edx
  __int16 v47; // ax
  int v48; // [esp-8h] [ebp-8Ch]
  int v49; // [esp-8h] [ebp-8Ch]
  char *v50; // [esp+8h] [ebp-7Ch]
  __int16 v51; // [esp+10h] [ebp-74h]
  __int16 v52; // [esp+14h] [ebp-70h]
  int v53; // [esp+18h] [ebp-6Ch]
  int v54; // [esp+1Ch] [ebp-68h]
  int v55; // [esp+1Ch] [ebp-68h]
  int v56; // [esp+20h] [ebp-64h]
  int v57; // [esp+20h] [ebp-64h]
  int v58; // [esp+24h] [ebp-60h]
  unsigned __int16 *v59; // [esp+24h] [ebp-60h]
  int v60; // [esp+28h] [ebp-5Ch]
  unsigned __int16 *v61; // [esp+28h] [ebp-5Ch]
  int v62; // [esp+2Ch] [ebp-58h]
  int i; // [esp+2Ch] [ebp-58h]
  char *v64; // [esp+30h] [ebp-54h]
  int v65; // [esp+30h] [ebp-54h]
  int v66; // [esp+34h] [ebp-50h]
  int v67; // [esp+34h] [ebp-50h]
  unsigned int v68; // [esp+38h] [ebp-4Ch]
  int v69; // [esp+38h] [ebp-4Ch]
  __int64 v70; // [esp+3Ch] [ebp-48h] BYREF
  int v71; // [esp+44h] [ebp-40h]
  _DWORD v72[7]; // [esp+48h] [ebp-3Ch] BYREF
  _BYTE v73[23]; // [esp+64h] [ebp-20h] BYREF
  char v74; // [esp+7Bh] [ebp-9h]

  v8 = 0;
  v9 = v73;
  v51 = 0;
  v54 = 1;
  v68 = 0;
  v62 = 0;
  v60 = 0;
  v58 = 0;
  v56 = 0;
  v66 = 0;
  v53 = 0;
  if ( !a8 )
  {
    *_errno() = 22;
    _invalid_parameter_noinfo();
    return 0;
  }
  v11 = a3;
  v64 = a3;
  while ( 1 )
  {
    v12 = *v11;
    if ( *v11 != 32 && v12 != 9 && v12 != 10 && v12 != 13 )
      break;
    ++v11;
  }
  while ( 2 )
  {
    v13 = *v11++;
    switch ( v8 )
    {
      case 0:
        if ( (unsigned __int8)(v13 - 49) <= 8u )
          goto LABEL_11;
        if ( v13 == ***(_BYTE ***)(*(_DWORD *)a8 + 188) )
          goto LABEL_14;
        v14 = v13 - 43;
        if ( !v14 )
        {
          v51 = 0;
          v8 = 2;
          continue;
        }
        v15 = v14 - 2;
        if ( !v15 )
        {
          v8 = 2;
          v51 = 0x8000;
          continue;
        }
        if ( v15 != 3 )
          goto LABEL_74;
        goto LABEL_19;
      case 1:
        v62 = 1;
        if ( (unsigned __int8)(v13 - 49) <= 8u )
          goto LABEL_11;
        if ( v13 == ***(_BYTE ***)(*(_DWORD *)a8 + 188) )
          goto LABEL_24;
        if ( v13 == 43 || v13 == 45 )
          goto LABEL_32;
        if ( v13 == 48 )
          goto LABEL_19;
LABEL_28:
        if ( v13 <= 67 || v13 > 69 && (unsigned __int8)(v13 - 100) > 1u )
          goto LABEL_74;
        v49 = 6;
        goto LABEL_15;
      case 2:
        if ( (unsigned __int8)(v13 - 49) <= 8u )
        {
LABEL_11:
          v48 = 3;
LABEL_12:
          v8 = v48;
          --v11;
        }
        else
        {
          if ( v13 == ***(_BYTE ***)(*(_DWORD *)a8 + 188) )
          {
LABEL_14:
            v49 = 5;
            goto LABEL_15;
          }
          if ( v13 != 48 )
          {
LABEL_36:
            v11 = v64;
            goto LABEL_81;
          }
LABEL_19:
          v8 = 1;
        }
        continue;
      case 3:
        v62 = 1;
        while ( v13 >= 48 && v13 <= 57 )
        {
          if ( v68 >= 0x19 )
          {
            ++v66;
          }
          else
          {
            ++v68;
            *v9++ = v13 - 48;
          }
          v13 = *v11++;
        }
        if ( v13 != ***(_BYTE ***)(*(_DWORD *)a8 + 188) )
          goto LABEL_45;
LABEL_24:
        v49 = 4;
        goto LABEL_15;
      case 4:
        v62 = 1;
        v60 = 1;
        if ( !v68 )
        {
          while ( v13 == 48 )
          {
            --v66;
            v13 = *v11++;
          }
        }
        while ( v13 >= 48 && v13 <= 57 )
        {
          if ( v68 < 0x19 )
          {
            ++v68;
            *v9++ = v13 - 48;
            --v66;
          }
          v13 = *v11++;
        }
LABEL_45:
        if ( v13 != 43 && v13 != 45 )
          goto LABEL_28;
LABEL_32:
        --v11;
        v49 = 11;
        goto LABEL_15;
      case 5:
        v60 = 1;
        if ( (unsigned __int8)(v13 - 48) > 9u )
          goto LABEL_36;
        v48 = 4;
        goto LABEL_12;
      case 6:
        v64 = v11 - 2;
        if ( (unsigned __int8)(v13 - 49) <= 8u )
          goto LABEL_62;
        v16 = v13 - 43;
        if ( !v16 )
          goto LABEL_69;
        v17 = v16 - 2;
        if ( !v17 )
          goto LABEL_68;
        v18 = v17 == 3;
LABEL_66:
        if ( !v18 )
          goto LABEL_36;
        v49 = 8;
        goto LABEL_15;
      case 7:
        if ( (unsigned __int8)(v13 - 49) <= 8u )
          goto LABEL_62;
        v18 = v13 == 48;
        goto LABEL_66;
      case 8:
        v58 = 1;
        while ( v13 == 48 )
          v13 = *v11++;
        if ( (unsigned __int8)(v13 - 49) > 8u )
          goto LABEL_74;
LABEL_62:
        v48 = 9;
        goto LABEL_12;
      case 9:
        v58 = 1;
        v20 = 0;
        while ( 2 )
        {
          if ( v13 >= 48 && v13 <= 57 )
          {
            v20 = 10 * v20 + v13 - 48;
            if ( v20 <= 5200 )
            {
              v13 = *v11++;
              continue;
            }
            v20 = 5201;
          }
          break;
        }
        v56 = v20;
        while ( v13 >= 48 && v13 <= 57 )
          v13 = *v11++;
LABEL_74:
        --v11;
        goto LABEL_81;
      case 11:
        if ( !a7 )
        {
          v8 = 10;
          --v11;
LABEL_89:
          if ( v8 == 10 )
            goto LABEL_81;
          continue;
        }
        v19 = v13 - 43;
        v64 = v11 - 1;
        if ( !v19 )
        {
LABEL_69:
          v49 = 7;
LABEL_15:
          v8 = v49;
          continue;
        }
        if ( v19 == 2 )
        {
LABEL_68:
          v54 = -1;
          v8 = 7;
          continue;
        }
        --v11;
LABEL_81:
        *a2 = v11;
        if ( !v62 )
        {
          v53 = 4;
LABEL_178:
          v44 = 0;
          v47 = 0;
          v46 = 0;
          v45 = 0;
          goto LABEL_179;
        }
        if ( v68 > 0x18 )
        {
          if ( v74 >= 5 )
            ++v74;
          --v9;
          ++v66;
          v68 = 24;
        }
        if ( !v68 )
          goto LABEL_178;
        while ( !*--v9 )
        {
          --v68;
          ++v66;
        }
        __mtold12(v73, v68, v72);
        v21 = v56;
        if ( v54 < 0 )
          v21 = -v56;
        v22 = v66 + v21;
        if ( !v58 )
          v22 += a5;
        if ( !v60 )
          v22 -= a6;
        if ( v22 > 5200 )
        {
          v45 = 0;
          v47 = 0x7FFF;
          v46 = 0x80000000;
          v44 = 0;
          v53 = 2;
          goto LABEL_179;
        }
        if ( v22 < -5200 )
        {
          v53 = 1;
          goto LABEL_178;
        }
        v23 = (char *)&unk_103FEA90 - 96;
        v65 = v22;
        if ( v22 )
        {
          if ( v22 < 0 )
          {
            v65 = -v22;
            v23 = (char *)&unk_103FEBF0 - 96;
          }
          if ( !a4 )
            LOWORD(v72[0]) = 0;
          if ( v65 )
          {
            while ( 1 )
            {
              v24 = v65;
              v65 >>= 3;
              v25 = v23 + 84;
              v26 = v24 & 7;
              v50 = v25;
              if ( !v26 )
                goto LABEL_173;
              v27 = &v25[12 * v26];
              if ( *(_WORD *)v27 >= 0x8000u )
              {
                v70 = *(_QWORD *)v27;
                v71 = *((_DWORD *)v27 + 2);
                --*(_DWORD *)((char *)&v70 + 2);
                v27 = (char *)&v70;
              }
              v67 = 0;
              memset(&v72[4], 0, 12);
              v28 = *((_WORD *)v27 + 5) & 0x7FFF;
              v29 = (HIWORD(v72[2]) ^ *((_WORD *)v27 + 5)) & 0x8000;
              v52 = v29;
              v30 = v28 + (HIWORD(v72[2]) & 0x7FFF);
              if ( (HIWORD(v72[2]) & 0x7FFF) == 0x7FFF || (*((_WORD *)v27 + 5) & 0x7FFF) == 0x7FFF || v30 > 0xBFFDu )
                break;
              if ( v30 <= 0x3FBFu )
              {
                v31 = 0;
                v72[1] = 0;
                v72[0] = 0;
LABEL_172:
                v72[2] = v31;
                goto LABEL_173;
              }
              if ( (v72[2] & 0x7FFF0000) != 0 || (++v30, (v72[2] & 0x7FFFFFFF) != 0) || v72[1] || v72[0] )
              {
                if ( v28 || (++v30, (*((_DWORD *)v27 + 2) & 0x7FFFFFFF) != 0) || *((_DWORD *)v27 + 1) || *(_DWORD *)v27 )
                {
                  v55 = 0;
                  v32 = &v72[5];
                  for ( i = 5; i > 0; --i )
                  {
                    v57 = i;
                    v61 = (unsigned __int16 *)v72 + v55;
                    v59 = (unsigned __int16 *)(v27 + 8);
                    do
                    {
                      v69 = 0;
                      v33 = *v61 * *v59;
                      v34 = *((_DWORD *)v32 - 1);
                      v35 = v34 + v33;
                      if ( v34 + v33 < v34 || v35 < v33 )
                        v69 = 1;
                      *((_DWORD *)v32 - 1) = v35;
                      if ( v69 )
                        ++*v32;
                      ++v61;
                      --v59;
                      --v57;
                    }
                    while ( v57 > 0 );
                    ++v32;
                    ++v55;
                  }
                  v36 = v30 - 16382;
                  if ( v36 <= 0 )
                    goto LABEL_182;
                  do
                  {
                    if ( v72[6] < 0 )
                      break;
                    v37 = v72[4];
                    v72[4] *= 2;
                    v38 = (v37 >> 31) | (2 * v72[5]);
                    v39 = *(__int64 *)&v72[5] >> 31;
                    --v36;
                    v72[5] = v38;
                    v72[6] = v39;
                  }
                  while ( v36 > 0 );
                  if ( v36 <= 0 )
                  {
LABEL_182:
                    if ( --v36 < 0 )
                    {
                      v40 = (unsigned __int16)-v36;
                      v36 = 0;
                      do
                      {
                        if ( (v72[4] & 1) != 0 )
                          ++v67;
                        v41 = v72[6];
                        v72[6] >>= 1;
                        v42 = (v41 << 31) | (v72[5] >> 1);
                        v43 = *(__int64 *)&v72[4] >> 1;
                        --v40;
                        v72[5] = v42;
                        v72[4] = v43;
                      }
                      while ( v40 );
                      if ( v67 )
                        LOWORD(v72[4]) |= 1u;
                    }
                  }
                  if ( LOWORD(v72[4]) > 0x8000u || (v72[4] & 0x1FFFF) == 0x18000 )
                  {
                    if ( *(_DWORD *)((char *)&v72[4] + 2) == -1 )
                    {
                      *(_DWORD *)((char *)&v72[4] + 2) = 0;
                      if ( *(_DWORD *)((char *)&v72[5] + 2) == -1 )
                      {
                        *(_DWORD *)((char *)&v72[5] + 2) = 0;
                        if ( HIWORD(v72[6]) == 0xFFFF )
                        {
                          HIWORD(v72[6]) = 0x8000;
                          ++v36;
                        }
                        else
                        {
                          ++HIWORD(v72[6]);
                        }
                      }
                      else
                      {
                        ++*(_DWORD *)((char *)&v72[5] + 2);
                      }
                    }
                    else
                    {
                      ++*(_DWORD *)((char *)&v72[4] + 2);
                    }
                  }
                  if ( (unsigned __int16)v36 < 0x7FFFu )
                  {
                    LOWORD(v72[0]) = HIWORD(v72[4]);
                    *(_QWORD *)((char *)v72 + 2) = *(_QWORD *)&v72[5];
                    HIWORD(v72[2]) = v52 | v36;
                  }
                  else
                  {
                    v72[1] = 0;
                    v72[0] = 0;
                    v72[2] = v52 == 0 ? 2147450880 : -32768;
                  }
                }
                else
                {
                  memset(v72, 0, 12);
                }
              }
              else
              {
                HIWORD(v72[2]) = 0;
              }
LABEL_173:
              if ( !v65 )
                goto LABEL_174;
              v23 = v50;
            }
            v72[1] = 0;
            v31 = v29 == 0 ? 2147450880 : -32768;
            v72[0] = 0;
            goto LABEL_172;
          }
        }
LABEL_174:
        v44 = v72[0];
        v45 = *(_DWORD *)((char *)v72 + 2);
        v46 = *(_DWORD *)((char *)&v72[1] + 2);
        v47 = HIWORD(v72[2]);
LABEL_179:
        *(_WORD *)a1 = v44;
        *(_WORD *)(a1 + 10) = v51 | v47;
        result = v53;
        *(_DWORD *)(a1 + 2) = v45;
        *(_DWORD *)(a1 + 6) = v46;
        return result;
      default:
        goto LABEL_89;
    }
  }
}
