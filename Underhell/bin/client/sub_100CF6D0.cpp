int __thiscall sub_100CF6D0(int this, int a2, unsigned int a3, _DWORD *a4, int a5)
{
  int v6; // ecx
  int result; // eax
  _DWORD *v8; // esi
  int v9; // eax
  int v10; // ecx
  int v11; // esi
  int v12; // esi
  int v13; // esi
  int v14; // eax
  int v15; // esi
  int v16; // ecx
  int v17; // eax
  int *v18; // eax
  int v19; // eax
  int v20; // esi
  int v21; // eax
  int *v22; // esi
  int v23; // esi
  int v24; // eax
  _DWORD *v25; // ecx
  int v26; // esi
  _BYTE *v27; // eax
  _BYTE *v28; // edi
  int v29; // eax
  int v30; // esi
  void (__thiscall *v31)(_BYTE *, _DWORD); // edx
  _BYTE *v32; // eax
  int v33; // eax
  int v34; // edi
  _BYTE *v35; // eax
  _BYTE *v36; // edi
  int v37; // esi
  _DWORD *v38; // esi
  int v39; // edi
  int v40; // eax
  int v41; // ecx
  int v42; // eax
  _DWORD *v43; // edi
  int v44; // edx
  char *v45; // eax
  int v46; // eax
  int v47; // eax
  char *v48; // eax
  int v49; // eax
  char Source[512]; // [esp+8h] [ebp-6B8h] BYREF
  char Buffer[512]; // [esp+208h] [ebp-4B8h] BYREF
  char Destination[256]; // [esp+408h] [ebp-2B8h] BYREF
  char SubStr[256]; // [esp+508h] [ebp-1B8h] BYREF
  char v54[32]; // [esp+608h] [ebp-B8h] BYREF
  int v55; // [esp+628h] [ebp-98h] BYREF
  _DWORD v56[4]; // [esp+630h] [ebp-90h] BYREF
  _DWORD v57[4]; // [esp+640h] [ebp-80h] BYREF
  int v58; // [esp+650h] [ebp-70h]
  _DWORD v59[4]; // [esp+654h] [ebp-6Ch] BYREF
  _DWORD v60[4]; // [esp+664h] [ebp-5Ch] BYREF
  int v61[4]; // [esp+674h] [ebp-4Ch] BYREF
  int v62; // [esp+684h] [ebp-3Ch]
  int v63; // [esp+688h] [ebp-38h]
  _BYTE *v64; // [esp+68Ch] [ebp-34h]
  int v65; // [esp+690h] [ebp-30h]
  int v66; // [esp+694h] [ebp-2Ch]
  int v67; // [esp+698h] [ebp-28h]
  int v68; // [esp+69Ch] [ebp-24h]
  int v69; // [esp+6A0h] [ebp-20h]
  int v70; // [esp+6A4h] [ebp-1Ch]
  int v71; // [esp+6A8h] [ebp-18h]
  int v72; // [esp+6ACh] [ebp-14h]
  int v73; // [esp+6B0h] [ebp-10h]
  int v74; // [esp+6B4h] [ebp-Ch]
  _DWORD *v75; // [esp+6B8h] [ebp-8h]
  int i; // [esp+6BCh] [ebp-4h]

  v6 = a4[3];
  result = 0;
  v65 = this;
  v58 = v6;
  v63 = 0;
  if ( v6 <= 0 )
    return result;
  do
  {
    v8 = *(_DWORD **)(*a4 + 4 * result);
    v75 = v8;
    if ( !*((_BYTE *)v8 + 4) )
      goto LABEL_102;
    if ( !(_BYTE)a5 )
      goto LABEL_100;
    if ( v8[2] == 2 )
    {
      sub_1022D3E0(v60);
      sub_1022D370(v8 + 14);
      v48 = (char *)sub_1022CF00(v56);
      sub_100CE2A0((void *)this, v48, (int)v60);
      sub_100CED10((_DWORD *)this, (int)v60);
      sub_100CBF00((int)v60);
      v49 = sub_1022CF00(v60);
      (*(void (__thiscall **)(_DWORD, _DWORD, int))(**(_DWORD **)(this + 4) + 28))(*(_DWORD *)(this + 4), v8[3], v49);
      if ( v56[2] >= 0 )
      {
        if ( v56[0] )
        {
          (*(void (__thiscall **)(_DWORD, _DWORD))(*g_pMemAlloc + 20))(g_pMemAlloc, v56[0]);
          v56[0] = 0;
        }
        v56[1] = 0;
      }
      if ( v60[2] >= 0 )
      {
        if ( v60[0] )
        {
          (*(void (__thiscall **)(_DWORD, _DWORD))(*g_pMemAlloc + 20))(g_pMemAlloc, v60[0]);
          v60[0] = 0;
        }
        v60[1] = 0;
      }
      goto LABEL_97;
    }
    if ( v8[2] == 3 )
    {
      sub_1022D3E0(v59);
      sub_1022D370(v8 + 14);
      v45 = (char *)sub_1022CF00(v57);
      sub_100CE2A0((void *)this, v45, (int)v59);
      sub_100CED10((_DWORD *)this, (int)v59);
      sub_100CBF00((int)v59);
      v46 = sub_1022CF00(v59);
      if ( v46 )
      {
        v55 = v46;
        v47 = sub_100CCF40((unsigned __int8 (__cdecl **)(int, int))(this + 136), (int)&v55);
        if ( v47 != -1 )
          v8[18] = *(_DWORD *)(*(_DWORD *)(this + 140) + 24 * v47 + 20);
      }
      if ( v8[3] )
      {
        (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(this + 4) + 24))(*(_DWORD *)(this + 4), v8[3]);
        v8[3] = 0;
      }
      (*(void (__thiscall **)(_DWORD *, _DWORD))(*v8 + 4))(v8, *(_DWORD *)(this + 4));
      if ( v57[2] >= 0 )
      {
        if ( v57[0] )
        {
          (*(void (__thiscall **)(_DWORD, _DWORD))(*g_pMemAlloc + 20))(g_pMemAlloc, v57[0]);
          v57[0] = 0;
        }
        v57[1] = 0;
      }
      if ( v59[2] >= 0 )
      {
        if ( v59[0] )
        {
          (*(void (__thiscall **)(_DWORD, _DWORD))(*g_pMemAlloc + 20))(g_pMemAlloc, v59[0]);
          v59[0] = 0;
        }
        v59[1] = 0;
      }
      goto LABEL_97;
    }
    if ( v8[2] != 4 || v8[14] > a3 )
      goto LABEL_97;
    v8[14] = a3 + 1000;
    sub_100CDE20(v8, *(_DWORD *)(this + 4));
    v9 = v8[4];
    v10 = v8[5];
    v11 = v8[15] - 1;
    v69 = 0;
    v70 = 0;
    v71 = 0;
    v72 = 0;
    v73 = 0;
    Destination[0] = 0;
    SubStr[0] = 0;
    v62 = v9;
    v74 = v10;
    if ( v11 )
    {
      if ( v11 != 1 )
        goto LABEL_35;
      v68 = sub_100422D0();
      if ( v68 )
      {
        v12 = 1;
        for ( i = 1; v12 <= *((_DWORD *)off_103DC81C + 5); i = v12 )
        {
          if ( dword_1040D3A8
            && (*(unsigned __int8 (__thiscall **)(int, int))(*(_DWORD *)(dword_1040D3A8 + 1192) + 16))(
                 dword_1040D3A8 + 1192,
                 v12) )
          {
            v13 = (*(int (__thiscall **)(int, int))(*(_DWORD *)(dword_1040D3A8 + 1192) + 52))(
                    dword_1040D3A8 + 1192,
                    v12);
            if ( (*(int (__thiscall **)(int))(*(_DWORD *)v68 + 296))(v68) == v13 )
            {
              v14 = v72;
              v15 = v72;
              if ( v72 + 1 > v70 )
              {
                sub_1010AFF0(v72 - v70 + 1);
                v14 = v72;
              }
              v16 = v69;
              v72 = v14 + 1;
              v17 = v14 - v15;
              v73 = v69;
              if ( v17 > 0 )
              {
                memcpy((void *)(v69 + 4 * v15 + 4), (const void *)(v69 + 4 * v15), 4 * v17);
                v16 = v69;
              }
              v18 = (int *)(v16 + 4 * v15);
              v12 = i;
              if ( v18 )
                *v18 = i;
            }
            else
            {
              v12 = i;
            }
          }
          ++v12;
        }
      }
    }
    else
    {
      for ( i = 1; i <= *((_DWORD *)off_103DC81C + 5); ++i )
      {
        if ( dword_1040D3A8
          && (*(unsigned __int8 (__thiscall **)(int, int))(*(_DWORD *)(dword_1040D3A8 + 1192) + 16))(
               dword_1040D3A8 + 1192,
               i) )
        {
          v19 = v72;
          v20 = v72;
          if ( v72 + 1 > v70 )
          {
            sub_1010AFF0(v72 - v70 + 1);
            v19 = v72;
          }
          v72 = v19 + 1;
          v21 = v19 - v20;
          v73 = v69;
          if ( v21 > 0 )
            memcpy((void *)(v69 + 4 * v20 + 4), (const void *)(v69 + 4 * v20), 4 * v21);
          v22 = (int *)(v69 + 4 * v20);
          if ( v22 )
            *v22 = i;
        }
      }
    }
    sub_102282F0(Destination, "(playerindex)", 0x100u);
    sub_102282F0(SubStr, "(playerindexplusone)", 0x100u);
LABEL_35:
    i = 0;
    v66 = 0;
    v67 = 0;
    if ( v72 <= 0 )
      goto LABEL_72;
    do
    {
      v23 = *(_DWORD *)(v69 + 4 * v67);
      sub_10228370(Buffer, 0x200u, "%d", v23);
      sub_10228370(Source, 0x200u, "%d", v23 + 1);
      v24 = 0;
      v68 = 0;
      v25 = v75;
      if ( (int)v75[20] > 0 )
      {
        while ( 1 )
        {
          v26 = *(_DWORD *)(v25[17] + 4 * v24);
          if ( *(_DWORD *)(v26 + 8) == 2 )
            break;
          if ( *(_DWORD *)(v26 + 8) == 3 )
          {
            v27 = (_BYTE *)sub_100DDA40(76);
            v28 = v27;
            if ( v27 )
            {
              v27[4] = 1;
              *((_DWORD *)v27 + 2) = 0;
              *((_DWORD *)v27 + 3) = 0;
              *((_DWORD *)v27 + 4) = 0;
              *((_DWORD *)v27 + 5) = 0;
              *((_DWORD *)v27 + 6) = 0;
              *((_DWORD *)v27 + 7) = 0;
              *((_DWORD *)v27 + 8) = 0;
              *((_DWORD *)v27 + 9) = 0;
              *((_DWORD *)v27 + 10) = 0;
              *((_DWORD *)v27 + 11) = 0;
              *((_DWORD *)v27 + 12) = 0;
              *((_DWORD *)v27 + 13) = 0;
              *(_DWORD *)v27 = &CLCDItemIcon::`vftable';
              sub_1022D3E0(v27 + 56);
              *((_DWORD *)v28 + 18) = 0;
              *((_DWORD *)v28 + 2) = 3;
            }
            else
            {
              v28 = 0;
            }
            v28[4] = *(_BYTE *)(v26 + 4);
            *((_DWORD *)v28 + 2) = *(_DWORD *)(v26 + 8);
            *((_DWORD *)v28 + 3) = *(_DWORD *)(v26 + 12);
            *((_DWORD *)v28 + 4) = *(_DWORD *)(v26 + 16);
            *((_DWORD *)v28 + 5) = *(_DWORD *)(v26 + 20);
            *((_DWORD *)v28 + 6) = *(_DWORD *)(v26 + 24);
            *((_DWORD *)v28 + 7) = *(_DWORD *)(v26 + 28);
            *((_DWORD *)v28 + 8) = *(_DWORD *)(v26 + 32);
            sub_100CEED0((const void **)v28 + 9, (_DWORD *)(v26 + 36));
            sub_1022D080(v26 + 56);
            v29 = *(_DWORD *)(v26 + 72);
            v30 = v65;
            v31 = *(void (__thiscall **)(_BYTE *, _DWORD))(*(_DWORD *)v28 + 4);
            *((_DWORD *)v28 + 18) = v29;
            v28[4] = 1;
            v31(v28, *(_DWORD *)(v30 + 4));
            (*(void (__thiscall **)(_DWORD, _DWORD, int, int))(**(_DWORD **)(v30 + 4) + 32))(
              *(_DWORD *)(v30 + 4),
              *((_DWORD *)v28 + 3),
              v62 + *((_DWORD *)v28 + 4),
              v74 + *((_DWORD *)v28 + 5));
            v64 = v28;
LABEL_59:
            if ( v64 )
            {
              v38 = v75;
              ++v66;
              *((_DWORD *)v64 + 8) = i;
              v39 = v38[12];
              v40 = v38[10];
              if ( v39 + 1 > v40 )
                sub_1010AFF0(v39 - v40 + 1);
              ++v38[12];
              v41 = v38[9];
              v42 = v38[12] - v39 - 1;
              v38[13] = v41;
              if ( v42 > 0 )
                memcpy((void *)(v41 + 4 * v39 + 4), (const void *)(v41 + 4 * v39), 4 * v42);
              v43 = (_DWORD *)(v38[9] + 4 * v39);
              if ( v43 )
                *v43 = v64;
            }
          }
          v25 = v75;
          this = v65;
          v24 = v68 + 1;
          v68 = v24;
          if ( v24 >= v75[20] )
            goto LABEL_67;
        }
        sub_1022D3E0(v61);
        sub_1022D080(v26 + 56);
        sub_100CBDD0((int)v61, Destination, Buffer);
        sub_100CBDD0((int)v61, SubStr, Source);
        sub_10228370(v54, 0x20u, "%d", v67 + 1);
        sub_100CBDD0((int)v61, "(itemnumber)", v54);
        sub_100CED10((_DWORD *)this, (int)v61);
        switch ( *(_DWORD *)(v26 + 8) )
        {
          case 2:
            v35 = (_BYTE *)sub_100DDA40(84);
            if ( !v35 )
              goto LABEL_54;
            v32 = sub_100CE3F0(v35);
            break;
          case 3:
            v33 = sub_100DDA40(76);
            v34 = v33;
            if ( !v33 )
              goto LABEL_54;
            *(_BYTE *)(v33 + 4) = 1;
            *(_DWORD *)(v33 + 8) = 0;
            *(_DWORD *)(v33 + 12) = 0;
            *(_DWORD *)(v33 + 16) = 0;
            *(_DWORD *)(v33 + 20) = 0;
            *(_DWORD *)(v33 + 24) = 0;
            *(_DWORD *)(v33 + 28) = 0;
            *(_DWORD *)(v33 + 32) = 0;
            *(_DWORD *)(v33 + 36) = 0;
            *(_DWORD *)(v33 + 40) = 0;
            *(_DWORD *)(v33 + 44) = 0;
            *(_DWORD *)(v33 + 48) = 0;
            *(_DWORD *)(v33 + 52) = 0;
            *(_DWORD *)v33 = &CLCDItemIcon::`vftable';
            sub_1022D3E0(v33 + 56);
            *(_DWORD *)(v34 + 72) = 0;
            *(_DWORD *)(v34 + 8) = 3;
            v32 = (_BYTE *)v34;
            break;
          case 4:
            v32 = (_BYTE *)sub_100DDA40(88);
            if ( !v32 )
              goto LABEL_54;
            v32[4] = 1;
            *((_DWORD *)v32 + 3) = 0;
            *((_DWORD *)v32 + 4) = 0;
            *((_DWORD *)v32 + 5) = 0;
            *((_DWORD *)v32 + 6) = 0;
            *((_DWORD *)v32 + 7) = 0;
            *((_DWORD *)v32 + 8) = 0;
            *((_DWORD *)v32 + 9) = 0;
            *((_DWORD *)v32 + 10) = 0;
            *((_DWORD *)v32 + 11) = 0;
            *((_DWORD *)v32 + 12) = 0;
            *((_DWORD *)v32 + 13) = 0;
            *(_DWORD *)v32 = &CLCDItemAggregate::`vftable';
            *((_DWORD *)v32 + 14) = 0;
            *((_DWORD *)v32 + 15) = 0;
            *((_DWORD *)v32 + 16) = 0;
            *((_DWORD *)v32 + 17) = 0;
            *((_DWORD *)v32 + 18) = 0;
            *((_DWORD *)v32 + 19) = 0;
            *((_DWORD *)v32 + 20) = 0;
            *((_DWORD *)v32 + 21) = 0;
            *((_DWORD *)v32 + 2) = 4;
            break;
          default:
            goto LABEL_54;
        }
        if ( v32 )
        {
          v36 = v32;
          goto LABEL_55;
        }
LABEL_54:
        v36 = 0;
LABEL_55:
        v36[4] = *(_BYTE *)(v26 + 4);
        *((_DWORD *)v36 + 2) = *(_DWORD *)(v26 + 8);
        *((_DWORD *)v36 + 3) = *(_DWORD *)(v26 + 12);
        *((_DWORD *)v36 + 4) = *(_DWORD *)(v26 + 16);
        *((_DWORD *)v36 + 5) = *(_DWORD *)(v26 + 20);
        *((_DWORD *)v36 + 6) = *(_DWORD *)(v26 + 24);
        *((_DWORD *)v36 + 7) = *(_DWORD *)(v26 + 28);
        *((_DWORD *)v36 + 8) = *(_DWORD *)(v26 + 32);
        sub_100CEED0((const void **)v36 + 9, (_DWORD *)(v26 + 36));
        sub_1022D080(v26 + 56);
        v36[72] = *(_BYTE *)(v26 + 72);
        *((_DWORD *)v36 + 19) = *(_DWORD *)(v26 + 76);
        *((_DWORD *)v36 + 20) = *(_DWORD *)(v26 + 80);
        v36[4] = 1;
        sub_1022D080(v61);
        v37 = v65;
        (*(void (__thiscall **)(_BYTE *, _DWORD))(*(_DWORD *)v36 + 4))(v36, *(_DWORD *)(v65 + 4));
        (*(void (__thiscall **)(_DWORD, _DWORD, int, int))(**(_DWORD **)(v37 + 4) + 32))(
          *(_DWORD *)(v37 + 4),
          *((_DWORD *)v36 + 3),
          v62 + *((_DWORD *)v36 + 4),
          v74 + *((_DWORD *)v36 + 5));
        v64 = v36;
        if ( v61[2] >= 0 )
        {
          if ( v61[0] )
          {
            (*(void (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, v61[0]);
            v61[0] = 0;
          }
          v61[1] = 0;
        }
        goto LABEL_59;
      }
LABEL_67:
      v74 += v25[16];
      if ( v74 + 10 > *(_DWORD *)(this + 28) )
      {
        v44 = v25[5];
        ++i;
        v66 = 0;
        v74 = v44;
      }
      ++v67;
    }
    while ( v67 < v72 );
    if ( v66 > 0 )
    {
      *(_DWORD *)(a2 + 60) = i + 1;
      goto LABEL_73;
    }
LABEL_72:
    *(_DWORD *)(a2 + 60) = i;
LABEL_73:
    if ( v71 >= 0 && v69 )
      (*(void (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, v69);
LABEL_97:
    v8 = v75;
    result = v75[8];
    if ( result == -1 || result == *(_DWORD *)(this + 56) )
    {
      LOBYTE(result) = 1;
      goto LABEL_101;
    }
LABEL_100:
    LOBYTE(result) = 0;
LABEL_101:
    (*(void (__thiscall **)(_DWORD, _DWORD, int))(**(_DWORD **)(this + 4) + 36))(*(_DWORD *)(this + 4), v8[3], result);
    sub_100CF6D0(a2, a3, v8 + 9, a5);
    result = v63;
    v6 = v58;
LABEL_102:
    v63 = ++result;
  }
  while ( result < v6 );
  return result;
}
