void __usercall sub_102E4E30(int a1@<ecx>, int a2@<ebx>, int a3@<edi>)
{
  int v4; // edi
  char *v5; // eax
  unsigned int v6; // ecx
  int *v7; // eax
  unsigned int v8; // ecx
  int v9; // eax
  int *v10; // eax
  int v11; // ecx
  float v12; // edx
  float v13; // eax
  int (__thiscall *v14)(int); // eax
  float *v15; // eax
  double v16; // st7
  double v17; // st6
  double v18; // st5
  int (__thiscall *v19)(int); // eax
  int v20; // eax
  float *v21; // eax
  _DWORD *v22; // eax
  double v23; // st7
  int v24; // ebx
  int v25; // edi
  int v26; // eax
  int v27; // eax
  _DWORD *v28; // eax
  float *v29; // eax
  int v30; // eax
  double v31; // st7
  char v32; // bl
  int v33; // edi
  _DWORD *v34; // eax
  int v35; // edi
  char *v36; // [esp-Ch] [ebp-90h]
  float *v37; // [esp-8h] [ebp-8Ch]
  float v38; // [esp+4h] [ebp-80h]
  _BYTE v39[44]; // [esp+14h] [ebp-70h] BYREF
  float v40; // [esp+40h] [ebp-44h]
  char v41; // [esp+4Bh] [ebp-39h]
  int v42; // [esp+60h] [ebp-24h]
  int v43; // [esp+68h] [ebp-1Ch] BYREF
  float v44; // [esp+6Ch] [ebp-18h]
  float v45; // [esp+70h] [ebp-14h]
  int v46; // [esp+74h] [ebp-10h] BYREF
  float v47; // [esp+78h] [ebp-Ch]
  float v48; // [esp+7Ch] [ebp-8h]
  float v49; // [esp+80h] [ebp-4h] BYREF
  int savedregs; // [esp+84h] [ebp+0h] BYREF

  if ( *(_DWORD *)(dword_106E07C4 + 48) )
  {
    sub_10260A10(a2, a3, (int *)a1, *(float *)(dword_106E080C + 44), (float *)&v43);
    v4 = *(_DWORD *)(a1 + 1676);
    v36 = sub_10073730(v4);
    v5 = sub_10073710(v4);
    sub_1011BB20((int)&v43, (int)v5, (int)v36, 0, 255, 0, 0, 0.0099999998);
    if ( (*(_DWORD *)(a1 + 252) & 0x800) != 0 )
      sub_100DAE60(a1);
    sub_1011BC50((float *)(a1 + 580), (float *)&v43, 0, 255, 0, 0, 0.0099999998);
  }
  v6 = *(_DWORD *)(a1 + 5660);
  if ( v6 != -1
    && (v7 = &off_1061BE18[4 * (*(_DWORD *)(a1 + 5660) & 0xFFF) + 1],
        v8 = v6 >> 12,
        off_1061BE18[4 * (*(_DWORD *)(a1 + 5660) & 0xFFF) + 2] == v8)
    && *v7 )
  {
    if ( off_1061BE18[4 * (*(_DWORD *)(a1 + 5660) & 0xFFF) + 2] == v8 )
      v9 = *v7;
    else
      v9 = 0;
    v10 = (int *)(*(int (__thiscall **)(int))(*(_DWORD *)v9 + 576))(v9);
    v11 = *v10;
    v12 = *((float *)v10 + 1);
    v13 = *((float *)v10 + 2);
    v43 = v11;
    v44 = v12;
    v45 = v13;
    sub_102DD500((float *)(a1 + 5132), (float *)&v43);
  }
  else
  {
    *(float *)&v43 = flt_10689730;
    v44 = flt_10689734;
    v45 = flt_10689738;
    sub_102DD500((float *)(a1 + 5132), (float *)&v43);
  }
  if ( !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)a1 + 1088))(a1) )
  {
    if ( (*(_BYTE *)(a1 + 256) & 1) != 0 && 0.0 != *(float *)(dword_106E053C + 44) )
    {
      if ( (*(_DWORD *)(a1 + 252) & 0x1000) != 0 )
        sub_100DAFD0(a1);
      v46 = *(int *)(a1 + 476);
      v47 = *(float *)(a1 + 480);
      v48 = *(float *)(a1 + 484);
      if ( off_10689714() > 200.0 )
      {
        v14 = *(int (__thiscall **)(int))(*(_DWORD *)a1 + 576);
        *(float *)&v43 = *(float *)&v46 * 34.0;
        v44 = v47 * 34.0;
        v45 = 34.0 * v48;
        v15 = (float *)v14(a1);
        v16 = *v15 + *(float *)&v43;
        v17 = v15[1] + v44;
        v18 = v15[2];
        v19 = *(int (__thiscall **)(int))(*(_DWORD *)a1 + 576);
        *(float *)&v46 = v16;
        v47 = v17;
        v48 = v18 + v45 - 16.0;
        v20 = v19(a1);
        v43 = *(int *)v20;
        v44 = *(float *)(v20 + 4);
        v45 = *(float *)(v20 + 8) - 16.0;
        v37 = (float *)sub_10073730(6);
        v21 = (float *)sub_10073710(6);
        sub_100231A0((int)&savedregs, a1, (float *)&v43, (float *)&v46, v21, v37, 33636363, a1, 5, (int)v39);
        if ( 1.0 == v40 && !v41 )
        {
          v43 = v46;
          v44 = v47;
          v45 = v48 - 64.0;
          sub_1002A5F0((int)&savedregs, a1, (float *)&v46, (float *)&v43, 33636363, a1, 0, (int)v39);
          if ( 1.0 == v40 && !v41 )
          {
            v22 = sub_10019660((_DWORD *)a1);
            v43 = *v22;
            v44 = *((float *)v22 + 1);
            v45 = *((float *)v22 + 2) + 250.0;
            sub_100DD660(a1, (float *)&v43);
          }
        }
      }
    }
    sub_102E48F0(a1);
    v23 = *(float *)(dword_106B31C8 + 12);
    if ( v23 <= *(float *)(a1 + 5636) && (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 1572))(a1) > 0 )
    {
      v23 = (double)*(int *)(a1 + 5640)
          - (1.0 - (*(float *)(a1 + 5636) - *(float *)(dword_106B31C8 + 12)) * 0.2857143) * (double)*(int *)(a1 + 5640);
      sub_101EC2A0((_DWORD *)a1, (int)v23);
    }
    if ( *(_DWORD *)(dword_106E0974 + 48) && *(_BYTE *)(a1 + 5197) )
    {
      if ( *(_BYTE *)(a1 + 2272) && sub_101C5260((_DWORD *)a1) )
        goto LABEL_44;
      sub_101E37E0((float *)a1);
      if ( 0.0 == v23 )
      {
        if ( *(float *)(a1 + 5200) < (double)*(float *)(dword_106B31C8 + 12) )
LABEL_44:
          sub_102E0CB0(a1);
      }
      else
      {
        *(float *)(a1 + 5200) = *(float *)(dword_106B31C8 + 12) + 0.5;
      }
    }
    else if ( *(_BYTE *)(a1 + 5216) && *(_BYTE *)(a1 + 2272) && sub_101C5260((_DWORD *)a1) )
    {
      goto LABEL_44;
    }
    if ( byte_106B4F38 || *(_DWORD *)(a1 + 4020) )
      return;
    sub_100F5F50(a1);
    sub_101E43B0(a1);
    if ( dword_106B3CDC && (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)dword_106B3CDC + 188))(dword_106B3CDC) )
    {
      v49 = NAN;
      sub_10151D40((int *)(a1 + 2252), &v49);
    }
    else
    {
      v24 = *(_DWORD *)(a1 + 2252) | 2;
      if ( *(_DWORD *)(a1 + 2252) != v24 )
      {
        (**(void (__thiscall ***)(int, int))(a1 + 2192))(a1 + 2192, a1 + 2252);
        *(_DWORD *)(a1 + 2252) = v24;
      }
    }
    sub_102E4C20(a1);
    sub_102E0E60(a1);
    (*(void (__thiscall **)(int))(*(_DWORD *)a1 + 1248))(a1);
    sub_101E2300((float *)a1);
    (*(void (__thiscall **)(int))(*(_DWORD *)a1 + 1488))(a1);
    if ( *(_BYTE *)(a1 + 2329) )
    {
      if ( (*(_DWORD *)(a1 + 3300) & 0x80000) != 0 )
      {
        sub_102DEE70(a1);
      }
      else if ( (*(_DWORD *)(a1 + 3296) & 0x80000) != 0 )
      {
        sub_102DEE20((_DWORD *)a1);
      }
    }
    if ( *(char *)(a1 + 224) >= 1 )
    {
      (*(void (__thiscall **)(int))(*(_DWORD *)a1 + 1180))(a1);
      return;
    }
    sub_102DAD00((float *)a1);
    if ( (*(_BYTE *)(a1 + 3416) & 1) != 0 )
      sub_100EA940((int *)a1, 8);
    else
      sub_100EA9A0((int *)a1, 8);
    if ( (*(_BYTE *)(a1 + 3416) & 1) == 0 )
    {
      if ( *(char *)(a1 + 3408) < 0 )
        *(_DWORD *)(a1 + 3408) = 192;
      goto LABEL_88;
    }
    v25 = sub_101C5260((_DWORD *)a1);
    if ( v25 )
    {
      if ( (*(char (__thiscall **)(int))(*(_DWORD *)v25 + 144))(v25) < 0 )
      {
        if ( (*(_BYTE *)(a1 + 256) & 1) == 0
          || (*(_DWORD *)(v25 + 248) & 2) != 0
          || (*(_DWORD *)(a1 + 3292) & 0x600) != 0 )
        {
          goto LABEL_77;
        }
        goto LABEL_81;
      }
      v25 = 0;
    }
    if ( sub_100CF460((_DWORD *)a1) )
    {
      v26 = sub_100CF460((_DWORD *)a1);
      if ( (*(char (__thiscall **)(int))(*(_DWORD *)v26 + 144))(v26) < 0 )
      {
        v27 = *(_DWORD *)(a1 + 3292);
        *(_DWORD *)(a1 + 3408) = 192;
        if ( (v27 & 8) != 0 )
          *(_DWORD *)(a1 + 3408) = 196;
        else
          *(_DWORD *)(a1 + 3408) = (v27 & 0x10 | 0x304u) >> 2;
        return;
      }
    }
    v28 = sub_10019640((_DWORD *)a1);
    v43 = *v28;
    v44 = *((float *)v28 + 1);
    v45 = *((float *)v28 + 2) - 38.0;
    v29 = (float *)sub_10019640((_DWORD *)a1);
    sub_1002A5F0((int)&savedregs, a1, v29, (float *)&v43, 81931, a1, 0, (int)v39);
    if ( 1.0 != v40 && v42 )
      v25 = v42;
    if ( !v25
      || (*(char (__thiscall **)(int))(*(_DWORD *)v25 + 144))(v25) >= 0
      || !(*(unsigned __int8 (__thiscall **)(int, int))(*(_DWORD *)v25 + 312))(v25, a1) )
    {
LABEL_77:
      *(_DWORD *)(a1 + 3416) &= ~1u;
      *(_DWORD *)(a1 + 3408) = 192;
      return;
    }
LABEL_81:
    sub_100DD660(a1, &flt_106F1CA8);
    v30 = *(_DWORD *)(a1 + 3296);
    if ( (v30 & 8) != 0 )
    {
      v31 = 1.0;
    }
    else
    {
      if ( (v30 & 0x10) == 0 )
      {
LABEL_88:
        if ( (*(_BYTE *)(a1 + 256) & 1) == 0 )
        {
          v49 = -*((float *)sub_10019660((_DWORD *)a1) + 2);
          sub_1015B1E0((float *)(a1 + 2292), &v49);
        }
        if ( (*(_BYTE *)(a1 + 3416) & 0x40) != 0 )
        {
          v32 = 0;
          v33 = 0;
          while ( 1 )
          {
            v34 = sub_1012BC90(&dword_1069E3E0, v33, "npc_barnacle");
            v33 = (int)v34;
            if ( !v34 )
              break;
            if ( (*(int (__thiscall **)(_DWORD *))(*v34 + 368))(v34) == a1 )
              v32 = 1;
          }
          if ( v32 )
          {
            sub_100DD660(a1, &flt_106F1CA8);
          }
          else
          {
            Warning("Attached to barnacle?\n");
            *(_DWORD *)(a1 + 3416) &= ~0x40u;
          }
        }
        (*(void (__thiscall **)(int))(*(_DWORD *)a1 + 1692))(a1);
        if ( (*(_DWORD *)(a1 + 3292) & 0x80000) != 0 && !*(_BYTE *)(a1 + 2137) )
        {
          v35 = sub_100CF460((_DWORD *)a1);
          if ( sub_102DC130((unsigned int *)(a1 + 3404))
            || v35 && (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v35 + 1008))(v35) )
          {
            *(_DWORD *)(a1 + 3292) &= 0xFFFFF7FE;
          }
        }
        return;
      }
      v31 = -1.0;
    }
    v38 = v31;
    (*(void (__thiscall **)(int, int, int, int, _DWORD))(*(_DWORD *)v25 + 372))(v25, a1, a1, 2, LODWORD(v38));
    *(_DWORD *)(a1 + 3408) = sub_101E1CF0((int)*(float *)(v25 + 108), (int)*(float *)(v25 + 868)) | 0xC0;
    goto LABEL_88;
  }
  (*(void (__thiscall **)(int))(*(_DWORD *)a1 + 1248))(a1);
  sub_101E2300((float *)a1);
  sub_102E0E60(a1);
  (*(void (__thiscall **)(int))(*(_DWORD *)a1 + 1488))(a1);
  if ( *(_BYTE *)(a1 + 2329) )
  {
    if ( (*(_DWORD *)(a1 + 3300) & 0x80000) != 0 )
    {
      sub_102DEE70(a1);
      sub_101E43B0(a1);
      return;
    }
    if ( (*(_DWORD *)(a1 + 3296) & 0x80000) != 0 )
      sub_102DEE20((_DWORD *)a1);
  }
  sub_101E43B0(a1);
}
