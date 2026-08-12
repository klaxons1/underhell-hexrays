char __cdecl sub_102C6720(_DWORD *a1, int a2)
{
  int v2; // ebx
  int *v3; // eax
  int v4; // esi
  char v5; // dl
  __int16 v6; // cx
  __int16 v7; // dx
  int v8; // edi
  int v9; // esi
  int v10; // eax
  char *v11; // eax
  char v12; // dl
  char v13; // al
  __int16 v14; // cx
  __int16 v15; // dx
  _DWORD *v16; // eax
  int v17; // esi
  int *v18; // edi
  int *v19; // ecx
  int *v20; // edi
  int v21; // eax
  int v22; // edi
  char *v23; // eax
  int v24; // eax
  int v25; // edi
  char *v26; // eax
  int *v27; // esi
  int v28; // eax
  int v29; // edi
  bool v30; // cf
  int v31; // eax
  int v32; // eax
  int *v33; // edi
  int v34; // esi
  int v36; // [esp-8h] [ebp-29Ch]
  char Src[512]; // [esp+Ch] [ebp-288h] BYREF
  char v38[72]; // [esp+20Ch] [ebp-88h] BYREF
  int v39[2]; // [esp+254h] [ebp-40h] BYREF
  double v40; // [esp+25Ch] [ebp-38h]
  int v41[2]; // [esp+264h] [ebp-30h] BYREF
  __int16 v42; // [esp+26Ch] [ebp-28h] BYREF
  _BYTE v43[6]; // [esp+26Eh] [ebp-26h] BYREF
  int v44; // [esp+274h] [ebp-20h]
  int v45; // [esp+278h] [ebp-1Ch]
  double v46; // [esp+27Ch] [ebp-18h]
  char *v47; // [esp+284h] [ebp-10h] BYREF
  int v48; // [esp+288h] [ebp-Ch] BYREF
  int *v49; // [esp+28Ch] [ebp-8h]
  char *v50; // [esp+290h] [ebp-4h] BYREF

  v2 = a2;
  v49 = 0;
  while ( 1 )
  {
    if ( (*(_BYTE *)(v2 + 21) & 1) != 0 )
    {
      v48 = 0;
      LOBYTE(v3) = sub_1042E720(v2, "%u", &v48);
    }
    else
    {
      LOBYTE(v3) = sub_1042D170(2);
      if ( (_BYTE)v3 )
      {
        v4 = *(_DWORD *)(v2 + 12);
        v3 = (int *)(v4 - *(_DWORD *)(v2 + 32));
        if ( (*(_BYTE *)(v2 + 44) & 1) != 0 )
        {
          v3 = (int *)((char *)v3 + *(_DWORD *)v2);
          if ( !v3 )
            v3 = &v48;
          if ( (*(_BYTE *)(v2 + 44) & 1) != 0 )
          {
            v5 = *((_BYTE *)v3 + 1);
            LOBYTE(v3) = *(_BYTE *)v3;
            HIWORD(v50) = 0;
            LOBYTE(v50) = v5;
            BYTE1(v50) = (_BYTE)v3;
            v6 = (__int16)v50;
            *(_DWORD *)(v2 + 12) = v4 + 2;
            LOWORD(v48) = v6;
            goto LABEL_15;
          }
          if ( v3 )
          {
            v7 = *(_WORD *)v3;
            *(_DWORD *)(v2 + 12) = v4 + 2;
            LOWORD(v48) = v7;
            goto LABEL_15;
          }
        }
        else
        {
          v48 = *(unsigned __int16 *)((char *)v3 + *(_DWORD *)v2);
        }
        *(_DWORD *)(v2 + 12) = v4 + 2;
      }
      else
      {
        v48 = 0;
      }
    }
LABEL_15:
    v8 = (unsigned __int16)v48;
    if ( *(_BYTE *)(v2 + 20) )
      return (char)v3;
    if ( (*(_BYTE *)(v2 + 21) & 1) != 0 )
    {
      a2 = 0;
      sub_1042E720(v2, "%u", &a2);
      goto LABEL_29;
    }
    if ( !(unsigned __int8)sub_1042D170(2) )
    {
      a2 = 0;
      goto LABEL_29;
    }
    v9 = *(_DWORD *)(v2 + 12);
    v10 = v9 - *(_DWORD *)(v2 + 32);
    if ( (*(_BYTE *)(v2 + 44) & 1) == 0 )
    {
      a2 = *(unsigned __int16 *)(v10 + *(_DWORD *)v2);
LABEL_26:
      *(_DWORD *)(v2 + 12) = v9 + 2;
      goto LABEL_29;
    }
    v11 = (char *)(*(_DWORD *)v2 + v10);
    if ( !v11 )
      v11 = (char *)&a2;
    if ( (*(_BYTE *)(v2 + 44) & 1) != 0 )
    {
      v12 = v11[1];
      v13 = *v11;
      HIWORD(v50) = 0;
      LOBYTE(v50) = v12;
      BYTE1(v50) = v13;
      v14 = (__int16)v50;
      *(_DWORD *)(v2 + 12) = v9 + 2;
      LOWORD(a2) = v14;
    }
    else
    {
      if ( !v11 )
        goto LABEL_26;
      v15 = *(_WORD *)v11;
      *(_DWORD *)(v2 + 12) = v9 + 2;
      LOWORD(a2) = v15;
    }
LABEL_29:
    switch ( v8 )
    {
      case 1:
        sub_1042D670(v38, 72 * (unsigned __int16)a2);
        v16 = (_DWORD *)(392 * (unsigned __int16)sub_102C66B0(a1, &v38[1]) + a1[1] + 16);
        qmemcpy(v16, v38, 0x48u);
        v16[18] = 0;
        v16[19] = 0;
        v49 = v16;
        v16[20] = 0;
        break;
      case 2:
        v17 = (unsigned __int16)a2;
        v18 = v49;
        v36 = (unsigned __int16)a2;
        v19 = v49 + 21;
        v49[24] = 0;
        sub_102C2C00(v19, 0, v36, 0);
        sub_1042D670((void *)v18[21], 6 * v17);
        break;
      case 3:
        v20 = v49;
        sub_1042D670(v49 + 66, 0x68u);
        sub_1042D670(v20 + 64, 4u);
        v21 = sub_1008A260((_DWORD *)v2);
        if ( v21 > 0 )
        {
          v47 = (char *)(v49 + 26);
          v22 = v21;
          do
          {
            v41[0] = 0;
            v41[1] = 0;
            sub_1042E170(Src, 512);
            sub_1042D670(v41, 8u);
            v23 = (char *)(*(int (__thiscall **)(_DWORD, unsigned int))(*g_pMemAlloc + 4))(g_pMemAlloc, strlen(Src) + 1);
            if ( v23 )
              strcpy(v23, Src);
            else
              v23 = 0;
            v50 = v23;
            sub_102C54E0((int)v47, (int *)&v50, v41);
            --v22;
          }
          while ( v22 );
        }
        break;
      case 4:
        v24 = sub_1008A260((_DWORD *)v2);
        if ( v24 > 0 )
        {
          v50 = (char *)(v49 + 35);
          v25 = v24;
          do
          {
            v40 = 0.0;
            v39[0] = 0;
            v39[1] = 0;
            sub_1042E170(Src, 512);
            sub_1042D670(v39, 0x10u);
            v26 = (char *)(*(int (__thiscall **)(_DWORD, unsigned int))(*g_pMemAlloc + 4))(g_pMemAlloc, strlen(Src) + 1);
            if ( v26 )
              strcpy(v26, Src);
            else
              v26 = 0;
            v47 = v26;
            sub_102C55E0((int)v50, (int *)&v47, v39);
            --v25;
          }
          while ( v25 );
        }
        break;
      case 5:
        v27 = v49;
        sub_1042E170(Src, 512);
        sub_10431100(Src);
        v27[59] = sub_1008A260((_DWORD *)v2);
        v28 = sub_1008A260((_DWORD *)v2);
        if ( v28 > 0 )
        {
          v29 = v28;
          do
          {
            v30 = *(_BYTE *)v49 < 2u;
            *(_DWORD *)&v43[2] = -1;
            v44 = 0;
            v45 = 0;
            LODWORD(v46) = -65536;
            BYTE4(v46) = 0;
            if ( v30 )
              sub_1042D670(&v43[2], 0x10u);
            else
              sub_1042D670(&v43[2], 0x11u);
            sub_102C1D70(v27 + 53, v27[56], (int)&v43[2]);
            --v29;
          }
          while ( v29 );
        }
        v31 = v27[56];
        v27[58] = 0;
        if ( v31 > 0 )
          v27[58] = 17 * v31 + v27[53] - 17;
        break;
      case 6:
        sub_1042D670(v49 + 18, 12 * (unsigned __int16)a2);
        break;
      case 7:
        if ( sub_1008A160((_DWORD *)v2) == 1 )
        {
          v32 = sub_1008A260((_DWORD *)v2);
          if ( v32 > 0 )
          {
            v33 = v49;
            v34 = v32;
            do
            {
              *(_DWORD *)v43 = 0;
              v46 = 0.0;
              v44 = 0;
              v42 = 0;
              sub_1042E170(Src, 512);
              sub_1042D670(&v42, 0x18u);
              sub_102C5A30(v33 + 44, Src, &v42);
              --v34;
            }
            while ( v34 );
          }
        }
        else
        {
          Error("Unsupported GenericStatsLump_t::LumpVersion");
        }
        break;
      default:
        continue;
    }
  }
}
