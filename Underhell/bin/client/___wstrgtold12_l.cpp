int __cdecl __wstrgtold12_l(int a1, _DWORD *a2, _WORD *a3, int a4, int a5, int a6, int a7, int a8)
{
  int v8; // ecx
  int result; // eax
  _WORD *v10; // edx
  int v11; // eax
  int v12; // eax
  int v13; // eax
  int v14; // eax
  _BYTE *v15; // ecx
  _BYTE *v16; // ecx
  int v17; // eax
  int v18; // eax
  bool v19; // zf
  int v20; // eax
  _BYTE *v21; // eax
  int v22; // ecx
  int v23; // eax
  int v24; // eax
  char *v25; // ecx
  char v26; // al
  char *v27; // ecx
  int v28; // eax
  char *v29; // ebx
  __int16 v30; // ax
  __int16 v31; // si
  unsigned __int16 v32; // cx
  int v33; // eax
  _WORD *v34; // edi
  unsigned int v35; // eax
  unsigned int v36; // edx
  unsigned int v37; // esi
  __int16 v38; // cx
  unsigned int v39; // eax
  int v40; // esi
  int v41; // eax
  int v42; // esi
  int v43; // eax
  int v44; // edi
  int v45; // eax
  __int16 v46; // cx
  int v47; // esi
  unsigned int v48; // edx
  __int16 v49; // ax
  int v50; // [esp-Ch] [ebp-8Ch]
  int v51; // [esp-Ch] [ebp-8Ch]
  char *v52; // [esp+8h] [ebp-78h]
  __int16 v53; // [esp+Ch] [ebp-74h]
  int v54; // [esp+10h] [ebp-70h]
  int v55; // [esp+14h] [ebp-6Ch]
  unsigned __int16 *v56; // [esp+14h] [ebp-6Ch]
  int v57; // [esp+18h] [ebp-68h]
  int v58; // [esp+18h] [ebp-68h]
  int v59; // [esp+1Ch] [ebp-64h]
  int v60; // [esp+1Ch] [ebp-64h]
  int v61; // [esp+20h] [ebp-60h]
  unsigned __int16 *v62; // [esp+20h] [ebp-60h]
  int v63; // [esp+24h] [ebp-5Ch]
  int i; // [esp+24h] [ebp-5Ch]
  _BYTE *v65; // [esp+28h] [ebp-58h]
  int v66; // [esp+28h] [ebp-58h]
  _WORD *v67; // [esp+2Ch] [ebp-54h]
  int v68; // [esp+2Ch] [ebp-54h]
  int v69; // [esp+30h] [ebp-50h]
  int v70; // [esp+30h] [ebp-50h]
  unsigned int v71; // [esp+34h] [ebp-4Ch]
  __int16 v72; // [esp+34h] [ebp-4Ch]
  __int64 v73; // [esp+38h] [ebp-48h] BYREF
  int v74; // [esp+40h] [ebp-40h]
  _DWORD v75[7]; // [esp+44h] [ebp-3Ch] BYREF
  _BYTE v76[23]; // [esp+60h] [ebp-20h] BYREF
  char v77; // [esp+77h] [ebp-9h]

  v8 = 0;
  v65 = v76;
  v53 = 0;
  v59 = 1;
  v71 = 0;
  v63 = 0;
  v55 = 0;
  v61 = 0;
  v57 = 0;
  v69 = 0;
  v54 = 0;
  if ( !a8 )
  {
    *_errno() = 22;
    _invalid_parameter_noinfo();
    return 0;
  }
  v10 = a3;
  v67 = a3;
  while ( 1 )
  {
    v11 = (unsigned __int16)*v10;
    if ( v11 != 32 && v11 != 9 && v11 != 10 && v11 != 13 )
      break;
    ++v10;
  }
  while ( 2 )
  {
    v12 = (unsigned __int16)*v10++;
    switch ( v8 )
    {
      case 0:
        if ( (unsigned __int16)(v12 - 49) <= 8u )
          goto LABEL_11;
        if ( v12 == ***(char ***)(*(_DWORD *)a8 + 188) )
          goto LABEL_14;
        v13 = v12 - 43;
        if ( !v13 )
        {
          v53 = 0;
          v8 = 2;
          continue;
        }
        v14 = v13 - 2;
        if ( !v14 )
        {
          v8 = 2;
          v53 = 0x8000;
          continue;
        }
        if ( v14 != 3 )
          goto LABEL_74;
        goto LABEL_19;
      case 1:
        v63 = 1;
        if ( (unsigned __int16)(v12 - 49) <= 8u )
          goto LABEL_11;
        if ( v12 == ***(char ***)(*(_DWORD *)a8 + 188) )
          goto LABEL_24;
        if ( v12 == 43 || v12 == 45 )
          goto LABEL_32;
        if ( v12 == 48 )
          goto LABEL_19;
LABEL_28:
        if ( v12 <= 67 || v12 > 69 && (unsigned int)(v12 - 100) > 1 )
          goto LABEL_74;
        v51 = 6;
        goto LABEL_15;
      case 2:
        if ( (unsigned __int16)(v12 - 49) <= 8u )
        {
LABEL_11:
          v50 = 3;
LABEL_12:
          v8 = v50;
          --v10;
        }
        else
        {
          if ( v12 == ***(char ***)(*(_DWORD *)a8 + 188) )
          {
LABEL_14:
            v51 = 5;
            goto LABEL_15;
          }
          if ( v12 != 48 )
          {
LABEL_36:
            v10 = v67;
            goto LABEL_81;
          }
LABEL_19:
          v8 = 1;
        }
        continue;
      case 3:
        v63 = 1;
        while ( (unsigned __int16)v12 >= 0x30u && (unsigned __int16)v12 <= 0x39u )
        {
          if ( v71 >= 0x19 )
          {
            ++v69;
          }
          else
          {
            v15 = v65;
            ++v71;
            ++v65;
            *v15 = v12 - 48;
          }
          LOWORD(v12) = *v10++;
        }
        v12 = (unsigned __int16)v12;
        if ( (unsigned __int16)v12 != ***(char ***)(*(_DWORD *)a8 + 188) )
          goto LABEL_45;
LABEL_24:
        v51 = 4;
        goto LABEL_15;
      case 4:
        v63 = 1;
        v55 = 1;
        if ( !v71 )
        {
          while ( (_WORD)v12 == 48 )
          {
            --v69;
            LOWORD(v12) = *v10++;
          }
        }
        while ( (unsigned __int16)v12 >= 0x30u && (unsigned __int16)v12 <= 0x39u )
        {
          if ( v71 < 0x19 )
          {
            ++v71;
            v16 = v65++;
            --v69;
            *v16 = v12 - 48;
          }
          LOWORD(v12) = *v10++;
        }
        v12 = (unsigned __int16)v12;
LABEL_45:
        if ( v12 != 43 && v12 != 45 )
          goto LABEL_28;
LABEL_32:
        --v10;
        v51 = 11;
        goto LABEL_15;
      case 5:
        v55 = 1;
        if ( (unsigned __int16)(v12 - 48) > 9u )
          goto LABEL_36;
        v50 = 4;
        goto LABEL_12;
      case 6:
        v67 = v10 - 2;
        if ( (unsigned __int16)(v12 - 49) <= 8u )
          goto LABEL_62;
        v17 = v12 - 43;
        if ( !v17 )
          goto LABEL_69;
        v18 = v17 - 2;
        if ( !v18 )
          goto LABEL_68;
        v19 = v18 == 3;
LABEL_66:
        if ( !v19 )
          goto LABEL_36;
        v51 = 8;
        goto LABEL_15;
      case 7:
        if ( (unsigned __int16)(v12 - 49) <= 8u )
          goto LABEL_62;
        v19 = (_WORD)v12 == 48;
        goto LABEL_66;
      case 8:
        v61 = 1;
        while ( (_WORD)v12 == 48 )
          LOWORD(v12) = *v10++;
        if ( (unsigned __int16)(v12 - 49) > 8u )
          goto LABEL_74;
LABEL_62:
        v50 = 9;
        goto LABEL_12;
      case 9:
        v61 = 1;
        v22 = 0;
        while ( 2 )
        {
          if ( (unsigned __int16)v12 >= 0x30u && (unsigned __int16)v12 <= 0x39u )
          {
            v22 = 10 * v22 + (unsigned __int16)v12 - 48;
            if ( v22 <= 5200 )
            {
              LOWORD(v12) = *v10++;
              continue;
            }
            v22 = 5201;
          }
          break;
        }
        v57 = v22;
        while ( (unsigned __int16)v12 >= 0x30u && (unsigned __int16)v12 <= 0x39u )
          LOWORD(v12) = *v10++;
LABEL_74:
        --v10;
        goto LABEL_81;
      case 11:
        if ( !a7 )
        {
          v8 = 10;
          --v10;
LABEL_87:
          if ( v8 == 10 )
            goto LABEL_81;
          continue;
        }
        v20 = v12 - 43;
        v67 = v10 - 1;
        if ( !v20 )
        {
LABEL_69:
          v51 = 7;
LABEL_15:
          v8 = v51;
          continue;
        }
        if ( v20 == 2 )
        {
LABEL_68:
          v59 = -1;
          v8 = 7;
          continue;
        }
        --v10;
LABEL_81:
        *a2 = v10;
        if ( !v63 )
        {
          v54 = 4;
LABEL_179:
          v46 = 0;
          v49 = 0;
          v48 = 0;
          v47 = 0;
          goto LABEL_180;
        }
        if ( v71 <= 0x18 )
        {
          v21 = v65;
        }
        else
        {
          if ( v77 >= 5 )
            ++v77;
          v71 = 24;
          v21 = v65 - 1;
          ++v69;
        }
        if ( !v71 )
          goto LABEL_179;
        while ( !*--v21 )
        {
          --v71;
          ++v69;
        }
        __mtold12(v76, v71, v75);
        v23 = v57;
        if ( v59 < 0 )
          v23 = -v57;
        v24 = v69 + v23;
        if ( !v61 )
          v24 += a5;
        if ( !v55 )
          v24 -= a6;
        if ( v24 > 5200 )
        {
          v47 = 0;
          v49 = 0x7FFF;
          v48 = 0x80000000;
          v46 = 0;
          v54 = 2;
          goto LABEL_180;
        }
        if ( v24 < -5200 )
        {
          v54 = 1;
          goto LABEL_179;
        }
        v25 = (char *)&unk_103FEA90 - 96;
        v68 = v24;
        if ( v24 )
        {
          if ( v24 < 0 )
          {
            v68 = -v24;
            v25 = (char *)&unk_103FEBF0 - 96;
          }
          if ( !a4 )
            LOWORD(v75[0]) = 0;
          if ( v68 )
          {
            while ( 1 )
            {
              v26 = v68;
              v68 >>= 3;
              v27 = v25 + 84;
              v28 = v26 & 7;
              v52 = v27;
              if ( !v28 )
                goto LABEL_174;
              v29 = &v27[12 * v28];
              if ( *(_WORD *)v29 >= 0x8000u )
              {
                v73 = *(_QWORD *)v29;
                v74 = *((_DWORD *)v29 + 2);
                --*(_DWORD *)((char *)&v73 + 2);
                v29 = (char *)&v73;
              }
              v66 = 0;
              memset(&v75[4], 0, 12);
              v30 = *((_WORD *)v29 + 5) & 0x7FFF;
              v31 = (HIWORD(v75[2]) ^ *((_WORD *)v29 + 5)) & 0x8000;
              v72 = v31;
              v32 = v30 + (HIWORD(v75[2]) & 0x7FFF);
              if ( (HIWORD(v75[2]) & 0x7FFF) == 0x7FFF || (*((_WORD *)v29 + 5) & 0x7FFF) == 0x7FFF || v32 > 0xBFFDu )
                break;
              if ( v32 <= 0x3FBFu )
              {
                v33 = 0;
                v75[1] = 0;
                v75[0] = 0;
LABEL_173:
                v75[2] = v33;
                goto LABEL_174;
              }
              if ( (v75[2] & 0x7FFF0000) != 0 || (++v32, (v75[2] & 0x7FFFFFFF) != 0) || v75[1] || v75[0] )
              {
                if ( v30 || (++v32, (*((_DWORD *)v29 + 2) & 0x7FFFFFFF) != 0) || *((_DWORD *)v29 + 1) || *(_DWORD *)v29 )
                {
                  v60 = 0;
                  v34 = &v75[5];
                  for ( i = 5; i > 0; --i )
                  {
                    v58 = i;
                    v56 = (unsigned __int16 *)v75 + v60;
                    v62 = (unsigned __int16 *)(v29 + 8);
                    do
                    {
                      v70 = 0;
                      v35 = *v62 * *v56;
                      v36 = *((_DWORD *)v34 - 1);
                      v37 = v36 + v35;
                      if ( v36 + v35 < v36 || v37 < v35 )
                        v70 = 1;
                      *((_DWORD *)v34 - 1) = v37;
                      if ( v70 )
                        ++*v34;
                      ++v56;
                      --v62;
                      --v58;
                    }
                    while ( v58 > 0 );
                    ++v34;
                    ++v60;
                  }
                  v38 = v32 - 16382;
                  if ( v38 <= 0 )
                    goto LABEL_183;
                  do
                  {
                    if ( v75[6] < 0 )
                      break;
                    v39 = v75[4];
                    v75[4] *= 2;
                    v40 = (v39 >> 31) | (2 * v75[5]);
                    v41 = *(__int64 *)&v75[5] >> 31;
                    --v38;
                    v75[5] = v40;
                    v75[6] = v41;
                  }
                  while ( v38 > 0 );
                  if ( v38 <= 0 )
                  {
LABEL_183:
                    if ( --v38 < 0 )
                    {
                      v42 = (unsigned __int16)-v38;
                      v38 = 0;
                      do
                      {
                        if ( (v75[4] & 1) != 0 )
                          ++v66;
                        v43 = v75[6];
                        v75[6] >>= 1;
                        v44 = (v43 << 31) | (v75[5] >> 1);
                        v45 = *(__int64 *)&v75[4] >> 1;
                        --v42;
                        v75[5] = v44;
                        v75[4] = v45;
                      }
                      while ( v42 );
                      if ( v66 )
                        LOWORD(v75[4]) |= 1u;
                    }
                  }
                  if ( LOWORD(v75[4]) > 0x8000u || (v75[4] & 0x1FFFF) == 0x18000 )
                  {
                    if ( *(_DWORD *)((char *)&v75[4] + 2) == -1 )
                    {
                      *(_DWORD *)((char *)&v75[4] + 2) = 0;
                      if ( *(_DWORD *)((char *)&v75[5] + 2) == -1 )
                      {
                        *(_DWORD *)((char *)&v75[5] + 2) = 0;
                        if ( HIWORD(v75[6]) == 0xFFFF )
                        {
                          HIWORD(v75[6]) = 0x8000;
                          ++v38;
                        }
                        else
                        {
                          ++HIWORD(v75[6]);
                        }
                      }
                      else
                      {
                        ++*(_DWORD *)((char *)&v75[5] + 2);
                      }
                    }
                    else
                    {
                      ++*(_DWORD *)((char *)&v75[4] + 2);
                    }
                  }
                  if ( (unsigned __int16)v38 < 0x7FFFu )
                  {
                    LOWORD(v75[0]) = HIWORD(v75[4]);
                    *(_QWORD *)((char *)v75 + 2) = *(_QWORD *)&v75[5];
                    HIWORD(v75[2]) = v72 | v38;
                  }
                  else
                  {
                    v75[1] = 0;
                    v75[0] = 0;
                    v75[2] = v72 == 0 ? 2147450880 : -32768;
                  }
                }
                else
                {
                  memset(v75, 0, 12);
                }
              }
              else
              {
                HIWORD(v75[2]) = 0;
              }
LABEL_174:
              if ( !v68 )
                goto LABEL_175;
              v25 = v52;
            }
            v75[1] = 0;
            v33 = v31 == 0 ? 2147450880 : -32768;
            v75[0] = 0;
            goto LABEL_173;
          }
        }
LABEL_175:
        v46 = v75[0];
        v47 = *(_DWORD *)((char *)v75 + 2);
        v48 = *(_DWORD *)((char *)&v75[1] + 2);
        v49 = HIWORD(v75[2]);
LABEL_180:
        *(_DWORD *)(a1 + 2) = v47;
        *(_WORD *)(a1 + 10) = v53 | v49;
        result = v54;
        *(_WORD *)a1 = v46;
        *(_DWORD *)(a1 + 6) = v48;
        return result;
      default:
        goto LABEL_87;
    }
  }
}
