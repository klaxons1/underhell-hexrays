void __userpurge sub_10340010(int a1@<ecx>, int a2@<ebx>, int a3)
{
  int v4; // edi
  int v5; // eax
  int v6; // eax
  void *v7; // edi
  int v8; // edx
  int *v9; // ecx
  int v10; // edi
  _DWORD *v11; // ebx
  float *v12; // edi
  float *v13; // eax
  double v14; // st6
  double v15; // st7
  int v16; // edi
  bool v17; // zf
  const char *v18; // eax
  void (__thiscall *v19)(int, int); // edx
  const char *v20; // eax
  _DWORD *v21; // eax
  int *v22; // eax
  int v23; // eax
  float *v24; // eax
  int v25; // ecx
  double v26; // st7
  int *v27; // ecx
  int v28; // ebx
  float *v29; // edi
  float *v30; // eax
  double v31; // st7
  _DWORD *v32; // ecx
  int i; // eax
  int v34; // eax
  char v35; // al
  int *v36; // ebx
  _DWORD *v37; // ecx
  const char *v38; // eax
  int v39; // eax
  int v40; // eax
  int v41; // eax
  int v42; // edi
  double v43; // st7
  int v44; // eax
  _DWORD v45[20]; // [esp+1Ch] [ebp-80h] BYREF
  float v46; // [esp+6Ch] [ebp-30h] BYREF
  float v47; // [esp+70h] [ebp-2Ch]
  float v48; // [esp+74h] [ebp-28h]
  int v49; // [esp+78h] [ebp-24h] BYREF
  float v50; // [esp+7Ch] [ebp-20h]
  float v51; // [esp+80h] [ebp-1Ch]
  int v52; // [esp+84h] [ebp-18h] BYREF
  float v53; // [esp+88h] [ebp-14h]
  float v54; // [esp+8Ch] [ebp-10h]
  int v55; // [esp+90h] [ebp-Ch] BYREF
  double v56; // [esp+94h] [ebp-8h] BYREF

  sub_1007C990((float *)(a1 + 2832), 0.75);
  v4 = a3;
  switch ( *(_DWORD *)a3 )
  {
    case 3:
      if ( (int)*(float *)(a3 + 4) == 1 )
      {
        v16 = sub_10021B90((void *)a1);
        if ( !v16
          || !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v16 + 320))(v16)
          || (*(unsigned __int8 (__thiscall **)(int, int))(*(_DWORD *)v16 + 876))(v16, a1)
          || *(float *)(dword_106B31C8 + 12) - *(float *)(a1 + 2740) <= 3.0 )
        {
          goto LABEL_87;
        }
        v17 = *(_BYTE *)(a1 + 4173) == 0;
        *(float *)(a1 + 2740) = *(float *)(dword_106B31C8 + 12);
        if ( v17 )
        {
          v18 = "COMBINEPRISONGUARD_ANNOUNCE";
          if ( !*(_BYTE *)(a1 + 4976) )
            v18 = "COMBINE_ANNOUNCE";
          sub_100AC410(a1 + 4244, v18, 2, 2);
        }
        sub_10022750((float *)a1, 2.0, 0.0);
        v17 = (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)a1 + 2168))(a1) == 0;
        v19 = *(void (__thiscall **)(int, int))(*(_DWORD *)a1 + 1416);
        if ( v17 )
          v19(a1, 1);
        else
          v19(a1, 61);
      }
      else
      {
        if ( !*(_BYTE *)(a1 + 4173) )
        {
          v20 = "COMBINEPRISONGUARD_THROW_GRENADE";
          if ( !*(_BYTE *)(a1 + 4976) )
            v20 = "COMBINE_THROW_GRENADE";
          sub_100AC410(a1 + 4244, v20, 1, 2);
        }
        (*(void (__thiscall **)(int, int))(*(_DWORD *)a1 + 1416))(a1, 1);
        sub_10022750((float *)a1, 2.0, 0.0);
      }
      return;
    case 0x30:
    case 0x31:
      *(_DWORD *)(a1 + 2716) &= ~2u;
      goto LABEL_46;
    case 0x3E:
    case 0x42:
      if ( *(_DWORD *)a3 == 66 && sub_10023D10((_DWORD *)a1, 21) )
        goto LABEL_87;
      sub_1001E620((_DWORD *)a1, (_DWORD *)v4);
      v35 = *(_BYTE *)(a1 + 306);
      if ( v35 == 4 || v35 == 5 )
        sub_10039F40((int *)a1, 28);
      break;
    case 0x4A:
      v41 = sub_100CF460((_DWORD *)a1);
      v42 = v41;
      if ( v41 )
      {
        *(_DWORD *)(a1 + 4232) = (*(int (__thiscall **)(int))(*(_DWORD *)v41 + 1128))(v41);
        v43 = ((double (__thiscall *)(int))*(_DWORD *)(*(_DWORD *)v42 + 1108))(v42);
        *(float *)(a1 + 4236) = v43;
        v56 = v43 + *(float *)(dword_106B31C8 + 12) - 0.1;
        sub_10169D00((float *)(a1 + 1672), &v56);
        sub_10043E90((int *)a1, 17);
        *(float *)(a1 + 2740) = *(float *)(dword_106B31C8 + 12);
      }
      return;
    case 0x6A:
      if ( !*(_DWORD *)(a1 + 2808) )
      {
        v36 = (int *)(*(int (__thiscall **)(int))(*(_DWORD *)a1 + 368))(a1);
        if ( v36 )
        {
          if ( (*(_DWORD *)(a1 + 2716) & 0x20000000) == 0
            && (*(unsigned __int8 (__thiscall **)(int *))(*v36 + 320))(v36)
            && v36[55] <= 20 )
          {
            v37 = *(_DWORD **)(a1 + 2796);
            if ( v37 )
              sub_100B19C0(v37, 0x20000000);
            if ( !*(_BYTE *)(a1 + 4173) )
            {
              v38 = "COMBINEPRISONGUARD_PLAYERHIT";
              if ( !*(_BYTE *)(a1 + 4976) )
                v38 = "COMBINE_PLAYERHIT";
              sub_100AC410(a1 + 4244, v38, -1, 2);
              (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)a1 + 1608))(a1, 2, 0.0);
            }
          }
          if ( sub_100D7680((int)v36) )
          {
            v39 = sub_100D7680((int)v36);
            if ( ((*(int (__thiscall **)(int))(*(_DWORD *)v39 + 1672))(v39) & 0x2000) == 0 )
            {
              v40 = sub_100D7680((int)v36);
              if ( ((*(int (__thiscall **)(int))(*(_DWORD *)v40 + 1672))(v40) & 0x20000) == 0 )
                goto LABEL_87;
            }
          }
        }
      }
      goto LABEL_46;
    case 0x96:
      return;
    case 0x97:
      v27 = *(int **)(a1 + 2796);
      if ( v27 )
      {
        if ( sub_100B16F0(v27, 1) > 2 )
        {
          if ( (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 368))(a1) )
          {
            v28 = (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 368))(a1);
            v29 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)a1 + 576))(a1);
            v30 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)v28 + 576))(v28);
            v46 = *v30 - *v29;
            v47 = v30[1] - v29[1];
            v31 = v30[2] - v29[2];
            v48 = v31;
            sub_100D7A40(&v46);
            if ( v31 > 512.0 )
            {
              *(float *)&a3 = *(float *)(dword_106B31C8 + 12) + *(float *)(a3 + 4);
              sub_1002ABA0((float *)(a1 + 1672), (float *)&a3);
            }
          }
        }
      }
      sub_10027CD0((_DWORD *)a1, 0);
      return;
    case 0x98:
      v9 = *(int **)(a1 + 2796);
      if ( !v9 )
        goto LABEL_87;
      if ( sub_100B16F0(v9, 1) <= 1 )
        goto LABEL_87;
      if ( *(int *)(dword_106B31C8 + 20) > 1 )
        goto LABEL_87;
      v10 = sub_10261B20();
      if ( !v10 )
        goto LABEL_87;
      if ( !sub_1004AFF0((_DWORD *)a1, 3) )
        goto LABEL_87;
      if ( !(*(unsigned __int8 (__thiscall **)(int, int))(*(_DWORD *)v10 + 876))(v10, a1) )
        goto LABEL_87;
      v11 = (_DWORD *)(*(int (__thiscall **)(int, int))(*(_DWORD *)a1 + 1460))(a1, 1048351);
      if ( !v11 )
        goto LABEL_87;
      (*(void (__thiscall **)(int, _DWORD, int *, _DWORD))(*(_DWORD *)a1 + 528))(a1, 0, &v49, 0);
      v12 = (float *)sub_10019640((_DWORD *)a1);
      v13 = (float *)sub_1023CC80(v11);
      v14 = v13[1] - v12[1];
      v15 = v13[2] - v12[2];
      *(float *)&v52 = *v13 - *v12;
      v53 = v14;
      v54 = v15;
      off_10689714();
      v54 = 0.0;
      v51 = 0.0;
      if ( v50 * v53 + *(float *)&v49 * *(float *)&v52 <= 0.0 )
        sub_10039F40((int *)a1, 56);
      else
        sub_10039F40((int *)a1, 57);
      break;
    case 0x99:
      v32 = *(_DWORD **)(a1 + 2796);
      if ( v32 )
      {
        for ( i = sub_100B1560(v32, &a3, 1); i; i = sub_100B1630(*(_DWORD **)(a1 + 2796), &a3, 1) )
        {
          v34 = __RTDynamicCast(
                  i,
                  0,
                  (struct _s_RTTICompleteObjectLocator *)&CAI_BaseNPC `RTTI Type Descriptor',
                  (int)&CNPC_Combine `RTTI Type Descriptor',
                  0);
          if ( v34 )
            *(float *)(v34 + 4216) = *(float *)(dword_106B31C8 + 12) + 5.0;
        }
      }
      goto LABEL_87;
    case 0x9A:
      sub_1033D870((float *)a1, a3, a3);
      return;
    case 0x9B:
      sub_10247EC0(v45);
      sub_10023330(v45, a1);
      sub_10023300(v45, a1);
      *(float *)&v45[13] = (float)*(int *)(a1 + 220);
      v44 = (int)*(float *)(v4 + 4);
      *(float *)&v45[1] = 0.1;
      *(float *)&v45[2] = 0.1;
      *(float *)&v45[3] = 0.1;
      v45[16] = v44;
      sub_100D9E70((int *)a1, a1, v45);
      sub_10027CD0((_DWORD *)a1, 0);
      return;
    case 0x9C:
      sub_10039F40((int *)a1, (int)*(float *)(a3 + 4));
      sub_10078720(*(_DWORD *)(a1 + 2604), a1 + 4964, -2.0);
      return;
    case 0x9D:
      if ( sub_102DC130((unsigned int *)(a1 + 4208)) )
      {
        (*(void (__thiscall **)(int, int))(*(_DWORD *)a1 + 1312))(a1, 6);
      }
      else
      {
        v21 = (_DWORD *)sub_1026A890((unsigned int *)(a1 + 4208));
        v22 = sub_10019640(v21);
        v49 = *v22;
        v50 = *((float *)v22 + 1);
        v51 = *((float *)v22 + 2);
        v23 = sub_1026A890((unsigned int *)(a1 + 4208));
        v24 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)v23 + 532))(v23);
        v25 = *(_DWORD *)(a1 + 2816);
        *(float *)&v55 = *(float *)&v49 + *v24;
        *(float *)&v56 = v24[1] + v50;
        *((float *)&v56 + 1) = v24[2] + v51;
        if ( sub_100B2F30(v25, a2, (float *)&v55, (float *)&v52)
          && (v46 = *(float *)&v52 - *(float *)&v55,
              v47 = v53 - *(float *)&v56,
              v26 = v54 - *((float *)&v56 + 1),
              v48 = v26,
              sub_100D7A40(&v46),
              v26 < 2000.0)
          && v26 > 0.0
          || sub_100B3EF0(*(_DWORD **)(a1 + 2816), (float *)&v49, (int)&v55, 0.0, 2000.0, 1.0, (float *)&v52) )
        {
          *(float *)(a1 + 2876) = *(float *)&v52;
          *(float *)(a1 + 2880) = v53;
          *(float *)(a1 + 2884) = v54;
        }
        else
        {
          (*(void (__thiscall **)(int, int))(*(_DWORD *)a1 + 1312))(a1, 10);
        }
      }
      return;
    case 0x9E:
      v8 = *(_DWORD *)a1;
      if ( 1.0 == *(float *)(a3 + 4) )
        (*(void (__thiscall **)(int))(v8 + 2176))(a1);
      else
        (*(void (__thiscall **)(int))(v8 + 2172))(a1);
      goto LABEL_87;
    case 0x9F:
      if ( sub_10022C40((_DWORD *)a1) )
      {
        v7 = (void *)sub_10022C40((_DWORD *)a1);
        (*(void (__thiscall **)(void *))(*(_DWORD *)v7 + 844))(v7);
        sub_100D6A00(v7);
      }
      goto LABEL_87;
    case 0xA0:
      v5 = sub_10022C40((_DWORD *)a1);
      if ( v5 && !*(_BYTE *)(v5 + 1241) )
      {
        *(_BYTE *)(v5 + 1241) = 1;
        sub_1033D150((_BYTE *)a1);
      }
      goto LABEL_87;
    case 0xA1:
      v6 = sub_10022C40((_DWORD *)a1);
      if ( v6 && !*(_BYTE *)(v6 + 1240) )
      {
        *(_BYTE *)(v6 + 1240) = 1;
        sub_1033D120((_BYTE *)a1);
      }
LABEL_87:
      sub_10027CD0((_DWORD *)a1, 0);
      break;
    default:
LABEL_46:
      sub_1001E620((_DWORD *)a1, (_DWORD *)v4);
      break;
  }
}
