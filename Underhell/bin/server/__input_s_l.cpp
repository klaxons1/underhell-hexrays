int __cdecl _input_s_l(FILE *a1, unsigned __int8 *a2, struct localeinfo_struct *a3, _BYTE **a4)
{
  int result; // eax
  int v5; // eax
  _BYTE *v6; // ecx
  char *v7; // eax
  unsigned __int8 v8; // al
  int v9; // eax
  unsigned __int8 *v10; // esi
  unsigned __int8 *v11; // esi
  int v12; // ebx
  int v13; // eax
  int v14; // ecx
  unsigned __int8 *v15; // eax
  _BYTE *v16; // ebx
  unsigned __int8 v17; // al
  int v18; // edi
  int v19; // eax
  int v20; // ecx
  _BYTE *v21; // eax
  int v22; // eax
  int v23; // ebx
  int v24; // ebx
  int i; // eax
  int v27; // ecx
  int j; // eax
  int v31; // ecx
  int v33; // ecx
  int v34; // ecx
  int k; // eax
  int v38; // ecx
  void (__cdecl *v39)(int, _WORD *, void *, __crt_locale_pointers *); // eax
  _BYTE *v40; // esi
  int v42; // eax
  unsigned __int8 *v43; // esi
  unsigned __int8 v44; // dl
  unsigned __int8 v45; // cl
  unsigned int v46; // edi
  int v47; // edx
  unsigned __int8 v48; // al
  int v49; // eax
  int v50; // ecx
  int v51; // eax
  int v52; // ecx
  int v53; // eax
  int v54; // ecx
  int v55; // eax
  int v56; // ebx
  int v57; // eax
  int v58; // eax
  int v59; // ecx
  bool v60; // zf
  int *v61; // eax
  int v62; // [esp-14h] [ebp-220h]
  _WORD *v63; // [esp-10h] [ebp-21Ch]
  void *v64; // [esp-Ch] [ebp-218h]
  int v65; // [esp-8h] [ebp-214h]
  int v66; // [esp-8h] [ebp-214h]
  int v67; // [esp-8h] [ebp-214h]
  int v68; // [esp-8h] [ebp-214h]
  int v69; // [esp-8h] [ebp-214h]
  int v70; // [esp-8h] [ebp-214h]
  int v71; // [esp-8h] [ebp-214h]
  int v72; // [esp-8h] [ebp-214h]
  int v73; // [esp-8h] [ebp-214h]
  int v74; // [esp-8h] [ebp-214h]
  int v75; // [esp-8h] [ebp-214h]
  __crt_locale_pointers Locale; // [esp+8h] [ebp-204h] BYREF
  int v77; // [esp+10h] [ebp-1FCh]
  char v78; // [esp+14h] [ebp-1F8h]
  int v79; // [esp+18h] [ebp-1F4h]
  wchar_t DstCh[2]; // [esp+1Ch] [ebp-1F0h] BYREF
  _BYTE **v81; // [esp+20h] [ebp-1ECh]
  int v82; // [esp+24h] [ebp-1E8h]
  _BYTE **v83; // [esp+28h] [ebp-1E4h]
  char SrcCh[4]; // [esp+2Ch] [ebp-1E0h] BYREF
  int v85; // [esp+30h] [ebp-1DCh]
  size_t v86; // [esp+34h] [ebp-1D8h] BYREF
  unsigned __int8 v87; // [esp+3Bh] [ebp-1D1h]
  int v88; // [esp+3Ch] [ebp-1D0h] BYREF
  _BYTE *v89; // [esp+40h] [ebp-1CCh]
  int v90; // [esp+44h] [ebp-1C8h]
  int v91; // [esp+48h] [ebp-1C4h]
  int v92; // [esp+4Ch] [ebp-1C0h]
  _WORD *v93; // [esp+50h] [ebp-1BCh]
  unsigned __int64 v94; // [esp+54h] [ebp-1B8h]
  unsigned __int8 *v95; // [esp+5Ch] [ebp-1B0h]
  int v96; // [esp+60h] [ebp-1ACh]
  _BYTE *v97; // [esp+64h] [ebp-1A8h] BYREF
  char v98; // [esp+68h] [ebp-1A4h]
  char v99; // [esp+69h] [ebp-1A3h]
  char v100; // [esp+6Ah] [ebp-1A2h]
  char v101; // [esp+6Bh] [ebp-1A1h]
  FILE *Stream; // [esp+6Ch] [ebp-1A0h]
  int v103; // [esp+70h] [ebp-19Ch]
  char v104; // [esp+76h] [ebp-196h]
  char v105; // [esp+77h] [ebp-195h]
  int Character; // [esp+78h] [ebp-194h]
  char v107; // [esp+7Fh] [ebp-18Dh]
  int v108; // [esp+80h] [ebp-18Ch] BYREF
  unsigned __int8 v109; // [esp+87h] [ebp-185h]
  _BYTE Src[352]; // [esp+88h] [ebp-184h] BYREF
  _BYTE v111[32]; // [esp+1E8h] [ebp-24h] BYREF

  v83 = a4;
  Stream = a1;
  v95 = a2;
  v97 = Src;
  v86 = 350;
  v88 = 0;
  *(_DWORD *)DstCh = 0;
  Character = 0;
  v79 = 0;
  if ( !a2
    || !a1
    || (a1->_flag & 0x40) == 0
    && ((v5 = _fileno(a1), v5 == -1) || v5 == -2
      ? (v6 = &unk_1068F4B0)
      : (v6 = (_BYTE *)(dword_10709BA0[v5 >> 5] + ((v5 & 0x1F) << 6))),
        (v6[36] & 0x7F) != 0
     || (v5 == -1 || v5 == -2
       ? (v7 = (char *)&unk_1068F4B0)
       : (v7 = (char *)(dword_10709BA0[v5 >> 5] + ((v5 & 0x1F) << 6))),
         v7[36] < 0)) )
  {
    *_errno() = 22;
    _invalid_parameter_noinfo();
    return -1;
  }
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&Locale, a3);
  v8 = *a2;
  v100 = 0;
  v108 = 0;
  v90 = 0;
  if ( !v8 )
    goto LABEL_307;
  while ( 2 )
  {
    if ( isspace(v8) )
    {
      --v108;
      v9 = _whiteout(v65, &v108, Stream);
      if ( v9 != -1 )
        _ungetc_nolock(v9, Stream);
      v10 = v95;
      do
        ++v10;
      while ( isspace(*v10) );
      v95 = v10;
      goto LABEL_279;
    }
    v11 = v95;
    if ( *v95 != 37 )
      goto LABEL_271;
    if ( v95[1] == 37 )
    {
      v11 = v95 + 1;
LABEL_271:
      ++v108;
      v56 = _inc(v65, Stream);
      v57 = *v11;
      v10 = v11 + 1;
      Character = v56;
      v95 = v10;
      if ( v57 == v56 )
      {
        if ( !isleadbyte((unsigned __int8)v56) )
          goto LABEL_275;
        ++v108;
        v58 = _inc(v75, Stream);
        v59 = *v10++;
        v95 = v10;
        if ( v59 == v58 )
        {
          --v108;
          goto LABEL_275;
        }
        if ( v58 != -1 )
          _ungetc_nolock(v58, Stream);
      }
      v60 = v56 == -1;
LABEL_295:
      if ( !v60 )
        _ungetc_nolock(Character, Stream);
      goto $error_return$29311;
    }
    v91 = 0;
    v87 = 0;
    v96 = 0;
    v92 = 0;
    v103 = 0;
    v89 = 0;
    v99 = 0;
    v98 = 0;
    v104 = 0;
    v107 = 0;
    v101 = 0;
    v105 = 0;
    v109 = 1;
    v85 = 0;
    do
    {
      v12 = *++v11;
      v13 = isdigit((unsigned __int8)v12);
      v14 = v66;
      if ( v13 )
      {
        ++v92;
        v103 = 10 * v103 + v12 - 48;
        continue;
      }
      if ( v12 > 78 )
      {
        if ( v12 == 104 )
        {
          --v109;
          --v105;
        }
        else
        {
          if ( v12 == 108 )
          {
            v15 = v11 + 1;
            if ( v11[1] == 108 )
              goto LABEL_37;
            ++v109;
          }
          else if ( v12 != 119 )
          {
            goto $DEFAULT_LABEL$29284;
          }
          ++v105;
        }
      }
      else
      {
        switch ( v12 )
        {
          case 'N':
            continue;
          case '*':
            ++v104;
            continue;
          case 'F':
            continue;
        }
        if ( v12 != 73 )
        {
          if ( v12 == 76 )
          {
            ++v109;
            continue;
          }
$DEFAULT_LABEL$29284:
          ++v107;
          continue;
        }
        LOBYTE(v14) = v11[1];
        if ( (_BYTE)v14 == 54 )
        {
          v15 = v11 + 2;
          if ( v11[2] == 52 )
          {
LABEL_37:
            ++v85;
            v11 = v15;
            v94 = 0;
            continue;
          }
        }
        if ( (_BYTE)v14 == 51 && v11[2] == 50 )
        {
          v11 += 2;
          continue;
        }
        if ( (_BYTE)v14 != 100 && (_BYTE)v14 != 105 && (_BYTE)v14 != 111 && (_BYTE)v14 != 120 && (_BYTE)v14 != 88 )
          goto $DEFAULT_LABEL$29284;
      }
    }
    while ( !v107 );
    v95 = v11;
    if ( v104 )
    {
      v16 = 0;
    }
    else
    {
      v16 = *v83;
      v81 = v83++;
    }
    v93 = v16;
    v107 = 0;
    if ( !v105 )
    {
      v17 = *v11;
      if ( *v11 == 83 || (v105 = -1, v17 == 67) )
        v105 = 1;
    }
    v18 = *v11 | 0x20;
    v82 = v18;
    if ( v18 != 110 )
    {
      if ( v18 == 99 || v18 == 123 )
      {
        ++v108;
        v19 = _inc(v14, Stream);
      }
      else
      {
        v19 = _whiteout(v14, &v108, Stream);
      }
      Character = v19;
      if ( v19 == -1 )
        goto $error_return$29311;
      v16 = v93;
      v11 = v95;
      v18 = v82;
    }
    v20 = v92;
    if ( v92 && !v103 )
    {
      v60 = Character == -1;
      goto LABEL_295;
    }
    if ( !v104 && (v18 == 99 || v18 == 115 || v18 == 123) )
    {
      v16 = *v81++;
      v83 = v81 + 1;
      v21 = *v81;
      v93 = v16;
      v89 = v21;
      if ( !v21 )
      {
        if ( v105 <= 0 )
          *v16 = 0;
        else
          *(_WORD *)v16 = 0;
        *_errno() = 12;
        goto $error_return$29311;
      }
    }
    if ( v18 > 111 )
    {
      if ( v18 == 112 )
      {
        v109 = 1;
        goto LABEL_218;
      }
      if ( v18 != 115 )
      {
        if ( v18 == 117 )
          goto LABEL_218;
        if ( v18 == 120 )
          goto LABEL_89;
        if ( v18 != 123 )
          goto LABEL_162;
        if ( v105 > 0 )
          v101 = 1;
        v43 = v11 + 1;
        if ( *v43 == 94 )
        {
          ++v43;
          v99 = -1;
        }
        memset(v111, 0, sizeof(v111));
        if ( *v43 == 93 )
        {
          v44 = 93;
          ++v43;
          v111[11] = 32;
        }
        else
        {
          v44 = v87;
        }
        while ( 1 )
        {
          v48 = *v43;
          if ( *v43 == 93 )
            break;
          ++v43;
          if ( v48 == 45 && v44 && (v45 = *v43, *v43 != 93) )
          {
            ++v43;
            if ( v44 >= v45 )
            {
              v109 = v44;
              v44 = v45;
            }
            else
            {
              v109 = v45;
            }
            if ( v44 < v109 )
            {
              v46 = v44;
              v47 = (unsigned __int8)(v109 - v44);
              do
              {
                v111[v46 >> 3] |= 1 << (v46 & 7);
                ++v46;
                --v47;
              }
              while ( v47 );
            }
            v20 = v109 & 7;
            v111[v109 >> 3] |= 1 << v20;
            v44 = 0;
          }
          else
          {
            v44 = v48;
            v20 = v48 & 7;
            v111[v48 >> 3] |= 1 << (v48 & 7);
          }
        }
        v16 = v93;
        v18 = v82;
        v95 = v43;
$scanit$29344:
        --v108;
        v40 = v16;
        if ( Character != -1 )
        {
          _ungetc_nolock(Character, Stream);
          v20 = v68;
        }
        if ( v18 == 99 )
        {
          while ( 1 )
          {
LABEL_140:
            if ( v92 )
            {
              if ( !v103-- )
                goto LABEL_211;
            }
            ++v108;
            v42 = _inc(v20, Stream);
            Character = v42;
            if ( v42 == -1 )
              goto LABEL_209;
            if ( v18 != 99 )
            {
              if ( v18 != 115 )
                goto LABEL_312;
              if ( v42 >= 9 && v42 <= 13 )
              {
LABEL_209:
                --v108;
                if ( v42 != -1 )
                  _ungetc_nolock(v42, Stream);
LABEL_211:
                if ( v40 != v16 )
                {
                  if ( !v104 )
                  {
                    ++v90;
                    if ( v82 != 99 )
                    {
                      if ( v101 )
                        *v93 = 0;
                      else
                        *(_BYTE *)v93 = 0;
                    }
                  }
                  goto LABEL_269;
                }
                goto $error_return$29311;
              }
              if ( v42 == 32 )
              {
LABEL_312:
                if ( v18 != 123 )
                  goto LABEL_209;
                v20 = v99 ^ (char)v111[v42 >> 3];
                if ( ((1 << (v42 & 7)) & v20) == 0 )
                  goto LABEL_209;
                v18 = v82;
              }
            }
            if ( !v104 )
              break;
            ++v40;
          }
          if ( !v89 )
          {
            v61 = _errno();
            v60 = v101 == 0;
            *v61 = 12;
            if ( v60 )
              *v40 = 0;
            else
              *(_WORD *)v40 = 0;
            goto $error_return$29311;
          }
          if ( v101 )
          {
            SrcCh[0] = v42;
            if ( isleadbyte((unsigned __int8)v42) )
            {
              ++v108;
              SrcCh[1] = _inc(v69, Stream);
            }
            wcscpy(DstCh, L"?");
            _mbtowc_l(DstCh, SrcCh, *((_DWORD *)Locale.locinfo + 43), &Locale);
            *(_WORD *)v16 = DstCh[0];
            v16 += 2;
          }
          else
          {
            *v16++ = v42;
          }
          v93 = v16;
        }
        --v89;
        goto LABEL_140;
      }
LABEL_134:
      if ( v105 > 0 )
        v101 = 1;
      goto $scanit$29344;
    }
    if ( v18 == 111 )
      goto LABEL_218;
    if ( v18 == 99 )
    {
      if ( !v92 )
      {
        ++v103;
        v92 = 1;
      }
      goto LABEL_134;
    }
    if ( v18 != 100 )
    {
      if ( v18 > 100 )
      {
        if ( v18 > 103 )
        {
          if ( v18 != 105 )
          {
            if ( v18 == 110 )
            {
              v22 = v108;
              if ( !v104 )
              {
$assign_num$29494:
                if ( v85 )
                {
                  *(_QWORD *)v16 = v94;
                }
                else if ( v109 )
                {
                  *(_DWORD *)v16 = v22;
                }
                else
                {
                  *(_WORD *)v16 = v22;
                }
              }
              goto LABEL_269;
            }
            goto LABEL_162;
          }
          v18 = 100;
LABEL_89:
          v23 = Character;
          if ( Character == 45 )
          {
            v98 = 1;
            goto $x_incwidth$29415;
          }
          if ( Character == 43 )
          {
$x_incwidth$29415:
            if ( --v103 || !v92 )
            {
              ++v108;
              v23 = _inc(v92, Stream);
              Character = v23;
            }
            else
            {
              v107 = 1;
            }
          }
          if ( v23 == 48 )
          {
            ++v108;
            v49 = _inc(v20, Stream);
            v23 = v49;
            Character = v49;
            if ( (_BYTE)v49 == 120 || (_BYTE)v49 == 88 )
            {
              ++v108;
              v23 = _inc(v50, Stream);
              Character = v23;
              if ( v92 )
              {
                v103 -= 2;
                if ( v103 < 1 )
                  ++v107;
              }
              v70 = 120;
LABEL_205:
              v18 = v70;
            }
            else
            {
              v96 = 1;
              if ( v18 != 120 )
              {
                if ( v92 )
                {
                  if ( !--v103 )
                    ++v107;
                }
                v70 = 111;
                goto LABEL_205;
              }
              --v108;
              if ( v49 != -1 )
                _ungetc_nolock(v49, Stream);
              v23 = 48;
LABEL_225:
              Character = v23;
            }
          }
          goto $getnum$29432;
        }
        v24 = 0;
        if ( Character == 45 )
        {
          *v97 = 45;
          v24 = 1;
          goto $f_incwidth$29512;
        }
        if ( Character == 43 )
        {
$f_incwidth$29512:
          --v103;
          ++v108;
          Character = _inc(v20, Stream);
        }
        if ( !v92 )
          v103 = -1;
        for ( i = (unsigned __int8)Character; isdigit(i); i = (unsigned __int8)Character )
        {
          if ( !v103-- )
            break;
          ++v96;
          v97[v24] = Character;
          if ( !__check_float_string((void **)&v97, &v86, ++v24, Src, &v88) )
            goto $error_return$29311;
          ++v108;
          Character = _inc(v27, Stream);
        }
        v99 = ***((_BYTE ***)Locale.locinfo + 47);
        if ( v99 == (_BYTE)Character )
        {
          if ( v103-- )
          {
            ++v108;
            Character = _inc(v67, Stream);
            v97[v24] = v99;
            if ( !__check_float_string((void **)&v97, &v86, ++v24, Src, &v88) )
              goto $error_return$29311;
            for ( j = (unsigned __int8)Character; isdigit(j); j = (unsigned __int8)Character )
            {
              if ( !v103-- )
                break;
              ++v96;
              v97[v24] = Character;
              if ( !__check_float_string((void **)&v97, &v86, ++v24, Src, &v88) )
                goto $error_return$29311;
              ++v108;
              Character = _inc(v31, Stream);
            }
          }
        }
        if ( v96 && (Character == 101 || Character == 69) )
        {
          if ( v103-- )
          {
            v97[v24] = 101;
            if ( !__check_float_string((void **)&v97, &v86, ++v24, Src, &v88) )
              goto $error_return$29311;
            ++v108;
            Character = _inc(v33, Stream);
            if ( Character == 45 )
            {
              v97[v24] = 45;
              if ( !__check_float_string((void **)&v97, &v86, ++v24, Src, &v88) )
                goto $error_return$29311;
$f_incwidth2$29542:
              if ( v103-- )
              {
                ++v108;
                Character = _inc(v34, Stream);
              }
              else
              {
                v103 = 0;
              }
            }
            else if ( Character == 43 )
            {
              goto $f_incwidth2$29542;
            }
            for ( k = (unsigned __int8)Character; isdigit(k); k = (unsigned __int8)Character )
            {
              if ( !v103-- )
                break;
              ++v96;
              v97[v24] = Character;
              if ( !__check_float_string((void **)&v97, &v86, ++v24, Src, &v88) )
                goto $error_return$29311;
              ++v108;
              Character = _inc(v38, Stream);
            }
          }
        }
        --v108;
        if ( Character != -1 )
          _ungetc_nolock(Character, Stream);
        if ( v96 )
        {
          if ( !v104 )
          {
            ++v90;
            v64 = v97;
            v63 = v93;
            v97[v24] = 0;
            v62 = (char)v109 - 1;
            v39 = (void (__cdecl *)(int, _WORD *, void *, __crt_locale_pointers *))DecodePointer(off_1068EA3C);
            v39(v62, v63, v64, &Locale);
          }
          goto LABEL_269;
        }
        goto $error_return$29311;
      }
LABEL_162:
      if ( *v11 == Character )
      {
        --v100;
        if ( !v104 )
          v83 = v81;
        goto LABEL_269;
      }
      if ( Character != -1 )
        _ungetc_nolock(Character, Stream);
      v79 = 1;
      goto $error_return$29311;
    }
LABEL_218:
    v23 = Character;
    if ( Character == 45 )
    {
      v98 = 1;
    }
    else if ( Character != 43 )
    {
      goto $getnum$29432;
    }
    if ( --v103 || !v92 )
    {
      ++v108;
      v23 = _inc(v92, Stream);
      goto LABEL_225;
    }
    v107 = 1;
$getnum$29432:
    if ( !v85 )
    {
      if ( !v107 )
      {
        while ( 1 )
        {
          if ( v18 == 120 || v18 == 112 )
          {
            if ( !isxdigit((unsigned __int8)v23) )
            {
LABEL_257:
              --v108;
              if ( v23 != -1 )
                _ungetc_nolock(v23, Stream);
              break;
            }
            v91 *= 16;
            v23 = _hextodec(v23);
            v55 = v91;
            v54 = v74;
            Character = v23;
          }
          else
          {
            v53 = isdigit((unsigned __int8)v23);
            v54 = v73;
            if ( !v53 )
              goto LABEL_257;
            if ( v18 == 111 )
            {
              if ( v23 >= 56 )
                goto LABEL_257;
              v55 = 8 * v91;
            }
            else
            {
              v55 = 10 * v91;
            }
          }
          ++v96;
          v91 = v55 + v23 - 48;
          if ( v92 )
          {
            if ( !--v103 )
              break;
          }
          ++v108;
          v23 = _inc(v54, Stream);
          Character = v23;
        }
      }
      if ( v98 )
        v91 = -v91;
      goto LABEL_261;
    }
    if ( v107 )
      goto LABEL_242;
    while ( 2 )
    {
      if ( v18 != 120 && v18 != 112 )
      {
        v51 = isdigit((unsigned __int8)v23);
        v52 = v71;
        if ( !v51 )
          break;
        if ( v18 == 111 )
        {
          if ( v23 >= 56 )
            break;
          v52 = v94 >> 29;
          v94 *= 8LL;
        }
        else
        {
          v94 *= 10LL;
        }
        goto LABEL_237;
      }
      if ( isxdigit((unsigned __int8)v23) )
      {
        v94 *= 16LL;
        v23 = _hextodec(v23);
        v52 = v72;
        Character = v23;
LABEL_237:
        ++v96;
        v94 += v23 - 48;
        if ( v92 )
        {
          if ( !--v103 )
            goto LABEL_242;
        }
        ++v108;
        v23 = _inc(v52, Stream);
        Character = v23;
        continue;
      }
      break;
    }
    --v108;
    if ( v23 != -1 )
      _ungetc_nolock(v23, Stream);
LABEL_242:
    if ( v98 )
      v94 = -(__int64)v94;
LABEL_261:
    if ( !v96 )
      goto $error_return$29311;
    if ( !v104 )
    {
      ++v90;
      v16 = v93;
      v22 = v91;
      goto $assign_num$29494;
    }
LABEL_269:
    ++v100;
    v10 = ++v95;
LABEL_275:
    if ( Character != -1 )
    {
LABEL_279:
      v8 = *v10;
      if ( !*v10 )
        goto $error_return$29311;
      continue;
    }
    break;
  }
  if ( *v10 == 37 && v95[1] == 110 )
  {
    v10 = v95;
    goto LABEL_279;
  }
$error_return$29311:
  if ( v88 == 1 )
    sub_10184660((int)v97);
  if ( Character == -1 )
  {
    result = v90;
    if ( !v90 && !v100 )
      result = -1;
    if ( v78 )
      *(_DWORD *)(v77 + 112) &= ~2u;
    return result;
  }
  if ( v79 == 1 )
  {
    *_errno() = 22;
    _invalid_parameter_noinfo();
  }
LABEL_307:
  if ( v78 )
    *(_DWORD *)(v77 + 112) &= ~2u;
  return v90;
}
