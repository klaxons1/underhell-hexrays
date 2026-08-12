int __cdecl _output_l(FILE *Stream, _BYTE *a2, struct localeinfo_struct *a3, int *a4)
{
  _BYTE *v4; // ebx
  int *v5; // edi
  int v7; // eax
  _BYTE *v8; // ecx
  char *v9; // eax
  int v10; // ecx
  unsigned __int8 v11; // dl
  _BYTE *v12; // ebx
  int v13; // eax
  char v14; // al
  bool v15; // zf
  int v16; // eax
  int v17; // ecx
  char *v18; // edi
  char *v19; // eax
  _DWORD *v20; // edi
  __int16 *v21; // eax
  char *v22; // ecx
  int v23; // eax
  _WORD *v24; // esi
  __int64 v25; // rax
  _DWORD *v26; // edi
  char *v27; // ebx
  int v28; // esi
  char *v29; // eax
  int v30; // eax
  _DWORD *v31; // edi
  void (__cdecl *v32)(_DWORD *, char *, int, int, int, int, __crt_locale_pointers *); // eax
  int v33; // edi
  void (__cdecl *v34)(char *, __crt_locale_pointers *); // eax
  void (__cdecl *v35)(char *, __crt_locale_pointers *); // eax
  unsigned int v36; // edi
  unsigned int v37; // ebx
  char *j; // esi
  int v39; // eax
  unsigned __int64 v40; // rcx
  int v41; // ecx
  char *v42; // eax
  char *v43; // esi
  char *i; // eax
  int v45; // eax
  int v46; // edi
  FILE *v47; // ebx
  int v48; // eax
  int v49; // edi
  wchar_t *v50; // esi
  wchar_t v51; // ax
  errno_t v52; // eax
  int v53; // edi
  unsigned __int8 v54; // al
  int v55; // [esp-14h] [ebp-2A0h]
  int v56; // [esp-10h] [ebp-29Ch]
  unsigned __int64 v57; // [esp-10h] [ebp-29Ch]
  int v58; // [esp-Ch] [ebp-298h]
  int v59; // [esp-8h] [ebp-294h]
  _DWORD v60[2]; // [esp+Ch] [ebp-280h] BYREF
  int v61; // [esp+14h] [ebp-278h]
  int v62; // [esp+18h] [ebp-274h]
  int v63; // [esp+1Ch] [ebp-270h] BYREF
  int *v64; // [esp+20h] [ebp-26Ch]
  int v65; // [esp+24h] [ebp-268h]
  int v66; // [esp+2Ch] [ebp-260h]
  __crt_locale_pointers Locale; // [esp+30h] [ebp-25Ch] BYREF
  int v68; // [esp+38h] [ebp-254h]
  char v69; // [esp+3Ch] [ebp-250h]
  int v70; // [esp+40h] [ebp-24Ch]
  char *v71; // [esp+44h] [ebp-248h]
  int v72; // [esp+48h] [ebp-244h]
  _BYTE *v73; // [esp+4Ch] [ebp-240h]
  int v74; // [esp+50h] [ebp-23Ch]
  int v75; // [esp+54h] [ebp-238h]
  int v76; // [esp+58h] [ebp-234h]
  FILE *File; // [esp+5Ch] [ebp-230h]
  _BYTE v78[4]; // [esp+60h] [ebp-22Ch] BYREF
  int SizeConverted; // [esp+64h] [ebp-228h] BYREF
  int v80; // [esp+68h] [ebp-224h] BYREF
  char *v81; // [esp+6Ch] [ebp-220h]
  int v82; // [esp+70h] [ebp-21Ch]
  int v83; // [esp+74h] [ebp-218h]
  unsigned __int8 v84; // [esp+7Bh] [ebp-211h]
  int v85; // [esp+7Ch] [ebp-210h]
  char MbCh[511]; // [esp+80h] [ebp-20Ch] BYREF
  char v87; // [esp+27Fh] [ebp-Dh] BYREF
  char v88[8]; // [esp+280h] [ebp-Ch] BYREF

  v4 = a2;
  v5 = a4;
  File = Stream;
  v82 = (int)a4;
  v70 = 0;
  v85 = 0;
  v75 = 0;
  v83 = 0;
  v76 = 0;
  v72 = 0;
  v74 = 0;
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&Locale, a3);
  v64 = _errno();
  if ( Stream
    && ((Stream->_flag & 0x40) != 0
     || ((v7 = _fileno(Stream), v7 == -1) || v7 == -2
       ? (v8 = &unk_103FE5B8)
       : (v8 = (_BYTE *)(dword_1048ABE0[v7 >> 5] + ((v7 & 0x1F) << 6))),
         (v8[36] & 0x7F) == 0
      && (v7 == -1 || v7 == -2
        ? (v9 = (char *)&unk_103FE5B8)
        : (v9 = (char *)(dword_1048ABE0[v7 >> 5] + ((v7 & 0x1F) << 6))),
          v9[36] >= 0)))
    && (v10 = 0, a2) )
  {
    v11 = *a2;
    v80 = 0;
    SizeConverted = 0;
    v71 = 0;
    v84 = v11;
    if ( v11 )
    {
      while ( 1 )
      {
        v12 = v4 + 1;
        v73 = v12;
        if ( v80 < 0 )
          break;
        if ( (unsigned __int8)(v11 - 32) > 0x58u )
          v13 = 0;
        else
          v13 = *((_BYTE *)&off_103B3896 + (char)v11 + 2) & 0xF;
        v62 = byte_103B38B8[8 * v13 + v10] >> 4;
        switch ( v62 )
        {
          case 0:
            goto $NORMAL_STATE$29165;
          case 1:
            v83 = -1;
            v61 = 0;
            v72 = 0;
            v75 = 0;
            v76 = 0;
            v85 = 0;
            v74 = 0;
            goto LABEL_227;
          case 2:
            switch ( v11 )
            {
              case ' ':
                v85 |= 2u;
                break;
              case '#':
                v85 |= 0x80u;
                break;
              case '+':
                v85 |= 1u;
                break;
              case '-':
                v85 |= 4u;
                break;
              case '0':
                v85 |= 8u;
                break;
            }
            goto LABEL_227;
          case 3:
            if ( v11 == 42 )
            {
              v82 = (int)(v5 + 1);
              v75 = *v5;
              if ( v75 < 0 )
              {
                v85 |= 4u;
                v75 = -v75;
              }
            }
            else
            {
              v75 = 10 * v75 + (char)v11 - 48;
            }
            goto LABEL_227;
          case 4:
            v83 = 0;
            goto LABEL_227;
          case 5:
            if ( v11 == 42 )
            {
              v82 = (int)(v5 + 1);
              v83 = *v5;
              if ( v83 < 0 )
                v83 = -1;
            }
            else
            {
              v83 = 10 * v83 + (char)v11 - 48;
            }
            goto LABEL_227;
          case 6:
            switch ( v11 )
            {
              case 'I':
                v14 = *v12;
                if ( *v12 == 54 && v12[1] == 52 )
                {
                  v85 |= 0x8000u;
                  v73 = v12 + 2;
                }
                else if ( v14 == 51 && v12[1] == 50 )
                {
                  v85 &= ~0x8000u;
                  v73 = v12 + 2;
                }
                else if ( v14 != 100 && v14 != 105 && v14 != 111 && v14 != 117 && v14 != 120 && v14 != 88 )
                {
                  v62 = 0;
$NORMAL_STATE$29165:
                  v74 = 0;
                  v16 = _isleadbyte_l(v11, &Locale);
                  v15 = v16 == 0;
                  LOBYTE(v16) = v84;
                  if ( !v15 )
                  {
                    v16 = write_char_0(File, v16, &v80);
                    LOBYTE(v16) = *v12;
                    v73 = v12 + 1;
                    if ( !(_BYTE)v16 )
                      goto LABEL_2;
                  }
                  write_char_0(File, v16, &v80);
                }
                break;
              case 'h':
                v85 |= 0x20u;
                break;
              case 'l':
                if ( *v12 == 108 )
                {
                  v85 |= 0x1000u;
                  v73 = v12 + 1;
                }
                else
                {
                  v85 |= 0x10u;
                }
                break;
              case 'w':
                v85 |= 0x800u;
                break;
            }
            goto LABEL_227;
          case 7:
            if ( (char)v11 <= 100 )
            {
              if ( v11 == 100 )
                goto LABEL_118;
              if ( (char)v11 > 83 )
              {
                switch ( v11 )
                {
                  case 'X':
                    goto LABEL_143;
                  case 'Z':
                    v21 = (__int16 *)*v5;
                    v82 = (int)(v5 + 1);
                    if ( v21 && (v22 = (char *)*((_DWORD *)v21 + 1)) != 0 )
                    {
                      v23 = *v21;
                      v81 = v22;
                      if ( (v85 & 0x800) != 0 )
                      {
                        v23 /= 2;
                        v74 = 1;
                      }
                      else
                      {
                        v74 = 0;
                      }
                    }
                    else
                    {
                      v81 = off_103FE480;
                      v23 = strlen(off_103FE480);
                    }
                    goto LABEL_192;
                  case 'a':
                    goto LABEL_123;
                }
                if ( v11 != 99 )
                  goto LABEL_193;
                v5 = (int *)v82;
              }
              else
              {
                if ( v11 == 83 )
                {
                  if ( (v85 & 0x830) == 0 )
                    v85 |= 0x800u;
                  goto LABEL_81;
                }
                if ( v11 == 65 )
                {
LABEL_76:
                  v11 += 32;
                  v61 = 1;
                  v84 = v11;
                  goto LABEL_123;
                }
                if ( v11 != 67 )
                {
                  if ( v11 != 69 && v11 != 71 )
                    goto LABEL_193;
                  goto LABEL_76;
                }
                if ( (v85 & 0x830) == 0 )
                  v85 |= 0x800u;
              }
              v20 = v5 + 1;
              v82 = (int)v20;
              if ( (v85 & 0x810) != 0 )
              {
                if ( wctomb_s(&SizeConverted, MbCh, 0x200u, *((_WORD *)v20 - 2)) )
                  v72 = 1;
              }
              else
              {
                MbCh[0] = *((_BYTE *)v20 - 4);
                SizeConverted = 1;
              }
              v81 = MbCh;
              goto LABEL_193;
            }
            if ( (char)v11 > 112 )
            {
              if ( v11 != 115 )
              {
                if ( v11 == 117 )
                  goto LABEL_119;
                if ( v11 != 120 )
                  goto LABEL_193;
                v5 = (int *)v82;
                v70 = 39;
                goto $COMMON_HEX$29326;
              }
LABEL_81:
              v17 = v83;
              if ( v83 == -1 )
                v17 = 0x7FFFFFFF;
              v82 = (int)(v5 + 1);
              v18 = (char *)*v5;
              v81 = v18;
              if ( (v85 & 0x810) != 0 )
              {
                if ( !v18 )
                  v81 = (char *)off_103FE484;
                v19 = v81;
                v74 = 1;
                while ( v17 )
                {
                  --v17;
                  if ( !*(_WORD *)v19 )
                    break;
                  v19 += 2;
                }
                v23 = (v19 - v81) >> 1;
              }
              else
              {
                if ( !v18 )
                  v81 = off_103FE480;
                for ( i = v81; v17; ++i )
                {
                  --v17;
                  if ( !*i )
                    break;
                }
                v23 = i - v81;
              }
              goto LABEL_192;
            }
            if ( v11 == 112 )
            {
              v83 = 8;
LABEL_143:
              v70 = 7;
$COMMON_HEX$29326:
              SizeConverted = 16;
              if ( (v85 & 0x80u) != 0 )
              {
                v78[0] = 48;
                v78[1] = v70 + 81;
                v76 = 2;
              }
              goto $COMMON_INT$29319;
            }
            if ( (char)v11 < 101 )
              goto LABEL_193;
            if ( (char)v11 <= 103 )
            {
              v5 = (int *)v82;
LABEL_123:
              v85 |= 0x40u;
              v27 = MbCh;
              v81 = MbCh;
              v66 = 512;
              if ( v83 >= 0 )
              {
                if ( v83 )
                {
                  if ( v83 > 512 )
                    v83 = 512;
                  if ( v83 > 163 )
                  {
                    v28 = v83 + 349;
                    v29 = (char *)sub_100DDA40(v83 + 349);
                    v11 = v84;
                    v71 = v29;
                    if ( v29 )
                    {
                      v81 = v29;
                      v66 = v28;
                      v27 = v29;
                    }
                    else
                    {
                      v83 = 163;
                    }
                  }
                }
                else
                {
                  v83 = v11 == 103;
                }
              }
              else
              {
                v83 = 6;
              }
              v30 = *v5;
              v31 = v5 + 2;
              v60[0] = v30;
              v60[1] = *(v31 - 1);
              v59 = v61;
              v58 = v83;
              v82 = (int)v31;
              v56 = (char)v11;
              v55 = v66;
              v32 = (void (__cdecl *)(_DWORD *, char *, int, int, int, int, __crt_locale_pointers *))DecodePointer(off_103FDB5C);
              v32(v60, v27, v55, v56, v58, v59, &Locale);
              v33 = v85 & 0x80;
              if ( (v85 & 0x80) != 0 && !v83 )
              {
                v34 = (void (__cdecl *)(char *, __crt_locale_pointers *))DecodePointer(off_103FDB68);
                v34(v27, &Locale);
              }
              if ( v84 == 103 && !v33 )
              {
                v35 = (void (__cdecl *)(char *, __crt_locale_pointers *))DecodePointer(off_103FDB64);
                v35(v27, &Locale);
              }
              if ( *v27 == 45 )
              {
                v85 |= 0x100u;
                v81 = ++v27;
              }
              v23 = strlen(v27);
LABEL_192:
              SizeConverted = v23;
LABEL_193:
              if ( v72 )
                goto LABEL_225;
              if ( (v85 & 0x40) != 0 )
              {
                if ( (v85 & 0x100) != 0 )
                {
                  v78[0] = 45;
                  goto LABEL_201;
                }
                if ( (v85 & 1) != 0 )
                {
                  v78[0] = 43;
                  goto LABEL_201;
                }
                if ( (v85 & 2) != 0 )
                {
                  v78[0] = 32;
LABEL_201:
                  v76 = 1;
                }
              }
              v45 = v75 - SizeConverted - v76;
              v66 = v45;
              if ( (v85 & 0xC) == 0 )
              {
                v46 = v75 - SizeConverted - v76;
                do
                {
                  if ( v46 <= 0 )
                    break;
                  LOBYTE(v45) = 32;
                  --v46;
                  v45 = write_char_0(File, v45, &v80);
                }
                while ( v80 != -1 );
              }
              v47 = File;
              v48 = write_string_0(&v80, (int)File, v64, v78, v76);
              if ( (v85 & 8) != 0 && (v85 & 4) == 0 )
              {
                v49 = v66;
                do
                {
                  if ( v49 <= 0 )
                    break;
                  LOBYTE(v48) = 48;
                  --v49;
                  v48 = write_char_0(v47, v48, &v80);
                }
                while ( v80 != -1 );
              }
              if ( v74 && SizeConverted > 0 )
              {
                v50 = (wchar_t *)v81;
                v65 = SizeConverted;
                while ( 1 )
                {
                  v51 = *v50;
                  --v65;
                  ++v50;
                  v52 = wctomb_s(&v63, v88, 6u, v51);
                  if ( v52 || !v63 )
                    break;
                  v52 = write_string_0(&v80, (int)File, v64, v88, v63);
                  if ( !v65 )
                    goto LABEL_220;
                }
                v80 = -1;
              }
              else
              {
                v52 = write_string_0(&v80, (int)v47, v64, v81, SizeConverted);
              }
LABEL_220:
              if ( v80 >= 0 && (v85 & 4) != 0 )
              {
                v53 = v66;
                do
                {
                  if ( v53 <= 0 )
                    break;
                  LOBYTE(v52) = 32;
                  --v53;
                  v52 = write_char_0(File, v52, &v80);
                }
                while ( v80 != -1 );
              }
              goto LABEL_225;
            }
            if ( v11 == 105 )
            {
              v5 = (int *)v82;
LABEL_118:
              v85 |= 0x40u;
LABEL_119:
              SizeConverted = 10;
$COMMON_INT$29319:
              if ( (v85 & 0x8000) != 0 || (v85 & 0x1000) != 0 )
              {
                v25 = *(_QWORD *)v5;
                v26 = v5 + 2;
              }
              else
              {
                v26 = v5 + 1;
                if ( (v85 & 0x20) != 0 )
                {
                  v82 = (int)v26;
                  if ( (v85 & 0x40) != 0 )
                    LODWORD(v25) = *((__int16 *)v26 - 2);
                  else
                    LODWORD(v25) = *((unsigned __int16 *)v26 - 2);
                  v25 = (int)v25;
LABEL_160:
                  if ( (v85 & 0x40) != 0 && v25 < 0 )
                  {
                    v25 = -v25;
                    v85 |= 0x100u;
                  }
                  v36 = HIDWORD(v25);
                  v37 = v25;
                  if ( (v85 & 0x9000) == 0 )
                    v36 = 0;
                  if ( v83 >= 0 )
                  {
                    v85 &= ~8u;
                    if ( v83 > 512 )
                      v83 = 512;
                  }
                  else
                  {
                    v83 = 1;
                  }
                  if ( !(v36 | (unsigned int)v25) )
                    v76 = 0;
                  for ( j = &v87; ; --j )
                  {
                    v39 = v83--;
                    if ( v39 <= 0 && !(v36 | v37) )
                      break;
                    v57 = __PAIR64__(v36, v37);
                    v40 = __PAIR64__(v36, v37) % SizeConverted;
                    v41 = v40 + 48;
                    v66 = HIDWORD(v40);
                    v36 = (v57 / SizeConverted) >> 32;
                    v37 = v57 / SizeConverted;
                    if ( v41 > 57 )
                      LOBYTE(v41) = v70 + v41;
                    *j = v41;
                  }
                  v42 = (char *)(&v87 - j);
                  v43 = j + 1;
                  SizeConverted = (int)v42;
                  v81 = v43;
                  if ( (v85 & 0x200) != 0 && (!v42 || *v43 != 48) )
                  {
                    *--v81 = 48;
                    v23 = (int)(v42 + 1);
                    goto LABEL_192;
                  }
                  goto LABEL_193;
                }
                LODWORD(v25) = *(v26 - 1);
                if ( (v85 & 0x40) != 0 )
                  v25 = (int)v25;
                else
                  HIDWORD(v25) = 0;
              }
              v82 = (int)v26;
              goto LABEL_160;
            }
            if ( v11 != 110 )
            {
              if ( v11 != 111 )
                goto LABEL_193;
              v5 = (int *)v82;
              SizeConverted = 8;
              if ( (v85 & 0x80u) != 0 )
                v85 |= 0x200u;
              goto $COMMON_INT$29319;
            }
            v82 += 4;
            v24 = *(_WORD **)(v82 - 4);
            if ( !_get_printf_count_output() )
              goto LABEL_2;
            if ( (v85 & 0x20) != 0 )
              *v24 = v80;
            else
              *(_DWORD *)v24 = v80;
            v72 = 1;
LABEL_225:
            if ( v71 )
            {
              sub_10034930((int)v71);
              v71 = 0;
            }
LABEL_227:
            v4 = v73;
            v54 = *v73;
            v84 = v54;
            if ( !v54 )
              goto LABEL_229;
            v10 = v62;
            v5 = (int *)v82;
            v11 = v54;
            break;
          default:
            goto LABEL_227;
        }
      }
    }
LABEL_229:
    if ( v69 )
      *(_DWORD *)(v68 + 112) &= ~2u;
    return v80;
  }
  else
  {
LABEL_2:
    *_errno() = 22;
    _invalid_parameter_noinfo();
    if ( v69 )
      *(_DWORD *)(v68 + 112) &= ~2u;
    return -1;
  }
}
