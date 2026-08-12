int __cdecl _winput_l(FILE *a1, wint_t *a2, struct localeinfo_struct *a3, char **a4)
{
  int result; // eax
  wint_t v5; // ax
  wint_t *v6; // edi
  wint_t v7; // ax
  char *v8; // esi
  int v9; // ebx
  int v10; // ecx
  int v11; // eax
  int v12; // ebx
  wint_t v13; // ax
  int v14; // edi
  int v15; // ebx
  int v16; // ebx
  wchar_t v18; // si
  wint_t v22; // ax
  int v25; // esi
  char *v26; // edi
  errno_t v27; // eax
  void (__cdecl *v28)(int, char *, char *, _DWORD *); // eax
  char *v29; // edi
  wint_t v31; // ax
  wint_t *v32; // edi
  _BYTE *v33; // esi
  void *v34; // eax
  unsigned __int16 v35; // dx
  int v36; // ecx
  unsigned __int16 v37; // ax
  unsigned int v38; // ebx
  unsigned __int16 v39; // ax
  wint_t v40; // ax
  errno_t v41; // eax
  unsigned int v42; // esi
  int v43; // edi
  wint_t v44; // ax
  wint_t v45; // cx
  int v46; // [esp-14h] [ebp-354h]
  char *v47; // [esp-10h] [ebp-350h]
  FILE *v48; // [esp-8h] [ebp-348h]
  _DWORD v49[2]; // [esp+8h] [ebp-338h] BYREF
  int v50; // [esp+10h] [ebp-330h]
  char v51; // [esp+14h] [ebp-32Ch]
  int v52; // [esp+18h] [ebp-328h]
  char **v53; // [esp+1Ch] [ebp-324h]
  int v54; // [esp+20h] [ebp-320h]
  char **v55; // [esp+24h] [ebp-31Ch]
  void *v56; // [esp+28h] [ebp-318h]
  int v57; // [esp+2Ch] [ebp-314h] BYREF
  int v58; // [esp+30h] [ebp-310h] BYREF
  int v59; // [esp+34h] [ebp-30Ch]
  char *v60; // [esp+38h] [ebp-308h]
  wint_t *v61; // [esp+3Ch] [ebp-304h]
  int v62; // [esp+40h] [ebp-300h]
  unsigned __int64 v63; // [esp+44h] [ebp-2FCh]
  int v64; // [esp+4Ch] [ebp-2F4h]
  int SizeConverted; // [esp+50h] [ebp-2F0h] BYREF
  char v66; // [esp+57h] [ebp-2E9h]
  int v67; // [esp+58h] [ebp-2E8h]
  int v68; // [esp+5Ch] [ebp-2E4h]
  wchar_t *Src; // [esp+60h] [ebp-2E0h] BYREF
  char v70; // [esp+65h] [ebp-2DBh]
  char v71; // [esp+66h] [ebp-2DAh]
  char v72; // [esp+67h] [ebp-2D9h]
  FILE *Stream; // [esp+68h] [ebp-2D8h]
  char v74; // [esp+6Dh] [ebp-2D3h]
  char v75; // [esp+6Eh] [ebp-2D2h]
  char v76; // [esp+6Fh] [ebp-2D1h]
  int v77; // [esp+70h] [ebp-2D0h]
  int v78; // [esp+74h] [ebp-2CCh]
  int v79; // [esp+78h] [ebp-2C8h] BYREF
  char v80; // [esp+7Fh] [ebp-2C1h]
  _BYTE v81[700]; // [esp+80h] [ebp-2C0h] BYREF

  v55 = a4;
  Stream = a1;
  v61 = a2;
  Src = (wchar_t *)v81;
  v57 = 350;
  v58 = 0;
  v56 = 0;
  v54 = 0;
  v78 = 0;
  if ( !a2 || !a1 )
  {
    *_errno() = 22;
    _invalid_parameter_noinfo();
    return -1;
  }
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)v49, a3);
  v5 = *a2;
  v71 = 0;
  v79 = 0;
  v59 = 0;
  if ( !v5 )
    goto LABEL_276;
  v6 = v61;
  while ( 2 )
  {
    if ( iswctype(v5, 8u) )
    {
      v48 = Stream;
      --v79;
      v7 = _whiteout_0(&v79, Stream);
      _un_inc(v7, v48);
      do
        ++v6;
      while ( iswctype(*v6, 8u) );
      goto LABEL_262;
    }
    if ( *v6 != 37 )
      goto LABEL_257;
    if ( v6[1] == 37 )
    {
      ++v6;
LABEL_257:
      ++v79;
      v44 = _fgetwc_nolock(Stream);
      v45 = *v6++;
      v78 = v44;
      v61 = v6;
      if ( v45 == v44 )
        goto LABEL_258;
      goto LABEL_265;
    }
    SizeConverted = 0;
    v52 = 0;
    v68 = 0;
    v64 = 0;
    v77 = 0;
    v62 = 0;
    v66 = 0;
    v70 = 0;
    v74 = 0;
    v80 = 0;
    v72 = 0;
    v76 = 0;
    v75 = 1;
    v8 = 0;
    do
    {
      v9 = *++v6;
      if ( (v9 & 0xFF00) == 0 && isdigit((unsigned __int8)v9) )
      {
        ++v64;
        v77 = 10 * v77 + v9 - 48;
        continue;
      }
      if ( v9 > 78 )
      {
        if ( v9 == 104 )
        {
          --v75;
          --v76;
        }
        else
        {
          if ( v9 == 108 )
          {
            if ( v6[1] == 108 )
            {
              ++v6;
              goto LABEL_26;
            }
            ++v75;
          }
          else if ( v9 != 119 )
          {
            goto $DEFAULT_LABEL$29771;
          }
          ++v76;
        }
      }
      else
      {
        switch ( v9 )
        {
          case 'N':
            continue;
          case '*':
            ++v74;
            continue;
          case 'F':
            continue;
        }
        if ( v9 != 73 )
        {
          if ( v9 == 76 )
          {
            ++v75;
            continue;
          }
$DEFAULT_LABEL$29771:
          ++v80;
          continue;
        }
        v10 = v6[1];
        if ( v10 == 54 && v6[2] == 52 )
        {
          v6 += 2;
LABEL_26:
          ++v62;
          v63 = 0;
          continue;
        }
        if ( v10 == 51 && v6[2] == 50 )
        {
          v6 += 2;
          continue;
        }
        if ( v10 != 100 && v10 != 105 && v10 != 111 && v10 != 120 && v10 != 88 )
          goto $DEFAULT_LABEL$29771;
      }
    }
    while ( !v80 );
    v61 = v6;
    if ( !v74 )
    {
      v8 = *v55;
      v53 = v55++;
    }
    v60 = v8;
    v80 = 0;
    if ( !v76 )
    {
      v11 = *v6;
      if ( v11 == 83 || (v76 = 1, v11 == 67) )
        v76 = -1;
    }
    v12 = *v6 | 0x20;
    v67 = v12;
    if ( v12 != 110 )
    {
      if ( v12 == 99 || v12 == 123 )
      {
        ++v79;
        v13 = _fgetwc_nolock(Stream);
      }
      else
      {
        v13 = _whiteout_0(&v79, Stream);
      }
      v78 = v13;
      if ( v13 == 0xFFFF )
        goto $error_return$29799;
      v8 = v60;
      v6 = v61;
    }
    if ( v64 && !v77 )
      goto LABEL_265;
    if ( v12 <= 111 )
    {
      if ( v12 == 111 )
        goto LABEL_200;
      if ( v12 != 99 )
      {
        if ( v12 != 100 )
        {
          if ( v12 <= 100 )
            goto LABEL_141;
          if ( v12 > 103 )
          {
            if ( v12 != 105 )
            {
              if ( v12 == 110 )
              {
                v14 = v79;
                if ( v74 )
                  goto LABEL_255;
                goto $assign_num$29949;
              }
LABEL_141:
              if ( *v6 == (_WORD)v78 )
              {
                --v71;
                if ( !v74 )
                  v55 = v53;
                goto LABEL_255;
              }
LABEL_265:
              _un_inc(v78, Stream);
              goto $error_return$29799;
            }
            v67 = 100;
LABEL_73:
            LOWORD(v15) = v78;
            if ( (_WORD)v78 == 45 )
            {
              v70 = 1;
              goto $x_incwidth$29874;
            }
            if ( (_WORD)v78 == 43 )
            {
$x_incwidth$29874:
              if ( --v77 || !v64 )
              {
                ++v79;
                LOWORD(v15) = _fgetwc_nolock(Stream);
                v78 = (unsigned __int16)v15;
              }
              else
              {
                v80 = 1;
              }
            }
            if ( (_WORD)v15 == 48 )
            {
              ++v79;
              v40 = _fgetwc_nolock(Stream);
              LOWORD(v15) = v40;
              v78 = v40;
              if ( v40 == 120 || v40 == 88 )
              {
                ++v79;
                LOWORD(v15) = _fgetwc_nolock(Stream);
                v78 = (unsigned __int16)v15;
                if ( v64 )
                {
                  v77 -= 2;
                  if ( v77 < 1 )
                    ++v80;
                }
                v67 = 120;
                goto $getnum$29891;
              }
              v68 = 1;
              if ( v67 != 120 )
              {
                if ( v64 )
                {
                  if ( !--v77 )
                    ++v80;
                }
                v67 = 111;
                goto $getnum$29891;
              }
              --v79;
              _un_inc(v40, Stream);
              v15 = 48;
LABEL_207:
              v78 = v15;
            }
            goto $getnum$29891;
          }
          v16 = 0;
          if ( (_WORD)v78 == 45 )
          {
            *Src = 45;
            v16 = 1;
            goto $f_incwidth$29967;
          }
          if ( (_WORD)v78 == 43 )
          {
$f_incwidth$29967:
            --v77;
            ++v79;
            v78 = _fgetwc_nolock(Stream);
          }
          if ( !v64 )
            v77 = -1;
          for ( ; (v78 & 0xFF00) == 0; v78 = _fgetwc_nolock(Stream) )
          {
            if ( !isdigit((unsigned __int8)v78) )
              break;
            if ( !v77-- )
              break;
            ++v68;
            Src[v16++] = (char)v78;
            if ( !__check_float_string_0((void **)&Src, &v57, v16, v81, &v58) )
              goto $error_return$29799;
            ++v79;
          }
          v18 = **(_WORD **)(*(_DWORD *)(v49[0] + 188) + 48);
          if ( v18 == (char)v78 )
          {
            if ( v77-- )
            {
              ++v79;
              v78 = _fgetwc_nolock(Stream);
              Src[v16++] = v18;
              if ( !__check_float_string_0((void **)&Src, &v57, v16, v81, &v58) )
                goto $error_return$29799;
              for ( ; (v78 & 0xFF00) == 0; v78 = _fgetwc_nolock(Stream) )
              {
                if ( !isdigit((unsigned __int8)v78) )
                  break;
                if ( !v77-- )
                  break;
                ++v68;
                Src[v16++] = v78;
                if ( !__check_float_string_0((void **)&Src, &v57, v16, v81, &v58) )
                  goto $error_return$29799;
                ++v79;
              }
            }
          }
          if ( v68 && ((_WORD)v78 == 101 || (_WORD)v78 == 69) )
          {
            if ( v77-- )
            {
              Src[v16++] = 101;
              if ( !__check_float_string_0((void **)&Src, &v57, v16, v81, &v58) )
                goto $error_return$29799;
              ++v79;
              v22 = _fgetwc_nolock(Stream);
              v78 = v22;
              if ( v22 == 45 )
              {
                Src[v16++] = 45;
                if ( !__check_float_string_0((void **)&Src, &v57, v16, v81, &v58) )
                  goto $error_return$29799;
$f_incwidth2$29995:
                if ( v77-- )
                {
                  ++v79;
                  v78 = _fgetwc_nolock(Stream);
                }
                else
                {
                  v77 = 0;
                }
              }
              else if ( (_WORD)v78 == 43 )
              {
                goto $f_incwidth2$29995;
              }
              for ( ; (v78 & 0xFF00) == 0; v78 = _fgetwc_nolock(Stream) )
              {
                if ( !isdigit((unsigned __int8)v78) )
                  break;
                if ( !v77-- )
                  break;
                ++v68;
                Src[v16++] = v78;
                if ( !__check_float_string_0((void **)&Src, &v57, v16, v81, &v58) )
                  goto $error_return$29799;
                ++v79;
              }
            }
          }
          --v79;
          _un_inc(v78, Stream);
          if ( v68 )
          {
            if ( v74 )
              goto LABEL_255;
            ++v59;
            v25 = 2 * v57 + 2;
            Src[v16] = 0;
            v26 = (char *)sub_100DDA40(v25);
            if ( v26 )
            {
              v27 = wcstombs_s(0, v26, v25, Src, v25 - 1);
              if ( v27 && (v27 == 22 || v27 == 34) )
                _invoke_watson(0, 0, 0, 0, 0);
              v47 = v60;
              v46 = v75 - 1;
              v28 = (void (__cdecl *)(int, char *, char *, _DWORD *))DecodePointer(off_103FDB60);
              v28(v46, v47, v26, v49);
              sub_10034930((int)v26);
              goto LABEL_255;
            }
          }
          goto $error_return$29799;
        }
LABEL_200:
        LOWORD(v15) = v78;
        if ( (_WORD)v78 == 45 )
        {
          v70 = 1;
        }
        else if ( (_WORD)v78 != 43 )
        {
          goto $getnum$29891;
        }
        if ( --v77 || !v64 )
        {
          ++v79;
          v15 = _fgetwc_nolock(Stream);
          goto LABEL_207;
        }
        v80 = 1;
$getnum$29891:
        if ( v62 )
        {
          if ( !v80 )
          {
            while ( 1 )
            {
              if ( v67 == 120 || v67 == 112 )
              {
                if ( (v15 & 0xFF00) != 0 || !isxdigit((unsigned __int8)v15) )
                {
LABEL_224:
                  --v79;
                  _un_inc(v15, Stream);
                  break;
                }
                v42 = 16 * v63;
                HIDWORD(v63) = v63 >> 28;
                LOWORD(v15) = _hextodec_0(v15);
                v78 = (unsigned __int16)v15;
              }
              else
              {
                if ( (v15 & 0xFF00) != 0 || !isdigit((unsigned __int8)v15) )
                  goto LABEL_224;
                if ( v67 == 111 )
                {
                  if ( (unsigned __int16)v15 >= 0x38u )
                    goto LABEL_224;
                  v42 = 8 * v63;
                  HIDWORD(v63) = v63 >> 29;
                }
                else
                {
                  HIDWORD(v63) = (10 * v63) >> 32;
                  v42 = 10 * v63;
                }
              }
              ++v68;
              v63 = (unsigned __int16)v15 - 48 + __PAIR64__(HIDWORD(v63), v42);
              if ( v64 )
              {
                if ( !--v77 )
                  break;
              }
              ++v79;
              LOWORD(v15) = _fgetwc_nolock(Stream);
              v78 = (unsigned __int16)v15;
            }
          }
          v14 = SizeConverted;
          if ( v70 )
            v63 = -(__int64)v63;
        }
        else
        {
          v14 = SizeConverted;
          if ( !v80 )
          {
            while ( 1 )
            {
              if ( v67 == 120 || v67 == 112 )
              {
                if ( (v15 & 0xFF00) != 0 || !isxdigit((unsigned __int8)v15) )
                {
LABEL_242:
                  --v79;
                  _un_inc(v15, Stream);
                  break;
                }
                v43 = 16 * v14;
                LOWORD(v15) = _hextodec_0(v15);
                v78 = (unsigned __int16)v15;
              }
              else
              {
                if ( (v15 & 0xFF00) != 0 || !isdigit((unsigned __int8)v15) )
                  goto LABEL_242;
                if ( v67 == 111 )
                {
                  if ( (unsigned __int16)v15 >= 0x38u )
                    goto LABEL_242;
                  v43 = 8 * v14;
                }
                else
                {
                  v43 = 10 * v14;
                }
              }
              ++v68;
              v14 = v43 + (unsigned __int16)v15 - 48;
              if ( v64 )
              {
                if ( !--v77 )
                  break;
              }
              ++v79;
              LOWORD(v15) = _fgetwc_nolock(Stream);
              v78 = (unsigned __int16)v15;
            }
          }
          if ( v70 )
            v14 = -v14;
        }
        if ( v67 == 70 )
          v68 = 0;
        if ( !v68 )
          goto $error_return$29799;
        if ( v74 )
          goto LABEL_255;
        ++v59;
        v8 = v60;
$assign_num$29949:
        if ( v62 )
        {
          *(_QWORD *)v8 = v63;
        }
        else if ( v75 )
        {
          *(_DWORD *)v8 = v14;
        }
        else
        {
          *(_WORD *)v8 = v14;
        }
        goto LABEL_255;
      }
      if ( !v64 )
      {
        ++v77;
        v64 = 1;
      }
LABEL_120:
      if ( v76 > 0 )
        v72 = 1;
$scanit$29810:
      --v79;
      v29 = v8;
      _un_inc(v78, Stream);
      while ( 1 )
      {
        if ( v64 )
        {
          if ( !v77-- )
            break;
        }
        ++v79;
        v31 = _fgetwc_nolock(Stream);
        v78 = v31;
        if ( v31 == 0xFFFF )
          goto LABEL_192;
        if ( v12 != 99 )
        {
          if ( v12 != 115 )
            goto LABEL_281;
          if ( v31 >= 9u && v31 <= 0xDu )
          {
LABEL_192:
            --v79;
            _un_inc(v31, Stream);
            break;
          }
          if ( v31 == 32 )
          {
LABEL_281:
            if ( v12 != 123 )
              goto LABEL_192;
            v12 = v67;
            if ( ((1 << (v31 & 7)) & (v66 ^ *((char *)v56 + (v31 >> 3)))) == 0 )
              goto LABEL_192;
          }
        }
        if ( v74 )
        {
          v29 += 2;
          continue;
        }
        if ( v72 )
        {
          *(_WORD *)v8 = v31;
          v8 += 2;
LABEL_190:
          v60 = v8;
          continue;
        }
        SizeConverted = 0;
        v41 = wctomb_s(&SizeConverted, v8, 5u, v31);
        if ( !v41 )
        {
          v8 += SizeConverted;
          goto LABEL_190;
        }
        if ( v41 == 22 || v41 == 34 )
          _invoke_watson(0, 0, 0, 0, 0);
      }
      if ( v29 == v8 )
        goto $error_return$29799;
      if ( !v74 )
      {
        ++v59;
        if ( v12 != 99 )
        {
          if ( v72 )
            *(_WORD *)v60 = 0;
          else
            *v60 = 0;
        }
      }
LABEL_255:
      ++v71;
      v6 = ++v61;
LABEL_258:
      if ( (_WORD)v78 == 0xFFFF )
      {
        if ( *v6 == 37 && v61[1] == 110 )
        {
          v6 = v61;
          goto LABEL_262;
        }
        goto $error_return$29799;
      }
LABEL_262:
      v5 = *v6;
      if ( !*v6 )
        goto $error_return$29799;
      continue;
    }
    break;
  }
  switch ( v12 )
  {
    case 'p':
      v75 = 1;
      goto LABEL_200;
    case 's':
      goto LABEL_120;
    case 'u':
      goto LABEL_200;
    case 'x':
      goto LABEL_73;
  }
  if ( v12 != 123 )
    goto LABEL_141;
  if ( v76 > 0 )
    v72 = 1;
  v32 = v6 + 1;
  if ( *v32 == 94 )
  {
    ++v32;
    v66 = -1;
  }
  v33 = v56;
  if ( !v56 )
  {
    v34 = (void *)sub_100DDA40(0x2000);
    v56 = v34;
    if ( !v34 )
      goto $error_return$29799;
    v54 = 1;
    v33 = v34;
  }
  memset(v33, 0, 0x2000u);
  if ( *v32 == 93 )
  {
    v35 = 93;
    ++v32;
    v33[11] = 32;
  }
  else
  {
    v35 = v52;
  }
  while ( 1 )
  {
    v39 = *v32;
    if ( *v32 == 93 )
      break;
    ++v32;
    if ( v39 == 45 && v35 && (v36 = *v32, (_WORD)v36 != 93) )
    {
      v37 = *v32++;
      if ( v35 >= (unsigned __int16)v36 )
      {
        v36 = v35;
        v35 = v37;
      }
      SizeConverted = v36;
      if ( v35 < (unsigned __int16)v36 )
      {
        v38 = v35;
        v62 = (unsigned __int16)(v36 - v35);
        do
        {
          v33[v38 >> 3] |= 1 << (v38 & 7);
          ++v38;
          --v62;
        }
        while ( v62 );
      }
      v33[(unsigned __int16)SizeConverted >> 3] |= 1 << (SizeConverted & 7);
      v35 = 0;
    }
    else
    {
      v35 = v39;
      v33[v39 >> 3] |= 1 << (v39 & 7);
    }
  }
  if ( *v32 )
  {
    v8 = v60;
    v12 = v67;
    v61 = v32;
    goto $scanit$29810;
  }
$error_return$29799:
  if ( v54 == 1 )
    sub_10034930((int)v56);
  if ( v58 == 1 )
    sub_10034930((int)Src);
  if ( (_WORD)v78 == 0xFFFF )
  {
    result = v59;
    if ( !v59 && !v71 )
      result = -1;
    if ( v51 )
      *(_DWORD *)(v50 + 112) &= ~2u;
    return result;
  }
LABEL_276:
  if ( v51 )
    *(_DWORD *)(v50 + 112) &= ~2u;
  return v59;
}
