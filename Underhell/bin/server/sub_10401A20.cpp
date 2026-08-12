void __usercall sub_10401A20(int a1@<ecx>, int a2@<esi>)
{
  double v2; // st7
  int v4; // eax
  _DWORD *v5; // edi
  int v6; // esi
  float *v7; // eax
  float *v8; // eax
  double v9; // st7
  double v10; // st6
  double v11; // st5
  double v12; // st4
  int v13; // esi
  int v14; // eax
  float *v15; // eax
  _DWORD *v16; // ecx
  int v17; // eax
  int v18; // eax
  int v19; // eax
  int v20; // edi
  int *v21; // eax
  int v22; // eax
  char *v23; // ecx
  _BYTE *v24; // edx
  char v25; // al
  char *v26; // ecx
  _BYTE *v27; // edx
  char v28; // al
  char *v29; // ecx
  _BYTE *v30; // edx
  char v31; // al
  char *v32; // ecx
  _BYTE *v33; // edx
  char v34; // al
  char *v35; // ecx
  _BYTE *v36; // edx
  char v37; // al
  int v38; // eax
  int v39; // [esp+Ch] [ebp-14Ch]
  _DWORD v40[20]; // [esp+1Ch] [ebp-13Ch] BYREF
  _BYTE v41[80]; // [esp+6Ch] [ebp-ECh] BYREF
  float v42[11]; // [esp+BCh] [ebp-9Ch] BYREF
  float v43; // [esp+E8h] [ebp-70h]
  int v44; // [esp+108h] [ebp-50h]
  float v45[3]; // [esp+110h] [ebp-48h] BYREF
  float v46[3]; // [esp+11Ch] [ebp-3Ch] BYREF
  float v47; // [esp+128h] [ebp-30h] BYREF
  int v48; // [esp+12Ch] [ebp-2Ch]
  int v49[3]; // [esp+134h] [ebp-24h] BYREF
  int v50[3]; // [esp+140h] [ebp-18h] BYREF
  int v51[3]; // [esp+14Ch] [ebp-Ch] BYREF
  int savedregs; // [esp+158h] [ebp+0h] BYREF

  v2 = *(float *)(dword_106B31C8 + 12);
  if ( v2 < *(float *)(a1 + 1132) )
    return;
  v4 = sub_100D1940((_DWORD *)a1);
  v5 = (_DWORD *)v4;
  v48 = v4;
  if ( !v4 || !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v4 + 320))(v4) )
    return;
  if ( *(_BYTE *)(a1 + 1393) )
  {
    sub_100F5A30(v5, (int)v50, 0, 0);
    v6 = sub_103FA150((_DWORD *)(a1 + 1500));
    if ( !v6
      || (v7 = (float *)(*(int (__thiscall **)(_DWORD *))(*v5 + 576))(v5),
          sub_10111AB0((_BYTE *)(v6 + 320), v7),
          v2 <= *(float *)(dword_106EFE24 + 44)) )
    {
      sub_10401110(a1, (int)v5, (float *)v50, *(float *)(dword_106EFD94 + 44));
      sub_103FA5D0((_DWORD *)a1);
      (*(void (__thiscall **)(int, int))(*(_DWORD *)a1 + 944))(a1, 182);
      return;
    }
    goto LABEL_53;
  }
  v47 = *(float *)(dword_106B31C8 + 12) + 0.5;
  sub_100D2D00((float *)(a1 + 1132), &v47);
  sub_100F5A30(v5, (int)v51, 0, 0);
  v8 = (float *)(*(int (__thiscall **)(_DWORD *, int *))(*v5 + 968))(v5, v50);
  v9 = *v8;
  v49[0] = *(int *)v8;
  v10 = v8[1];
  v49[1] = *((int *)v8 + 1);
  v11 = v8[2];
  v49[2] = *((int *)v8 + 2);
  v12 = *(float *)(dword_106EFE24 + 44);
  v46[0] = v9 + *(float *)v51 * v12;
  v46[1] = v10 + *(float *)&v51[1] * v12;
  v46[2] = v12 * *(float *)&v51[2] + v11;
  v45[0] = 8.0;
  v45[1] = 8.0;
  v45[2] = 8.0;
  *(float *)v50 = -8.0;
  *(float *)&v50[1] = -8.0;
  *(float *)&v50[2] = -8.0;
  sub_103FA980(a2, (float *)v49, v46, (float *)v50, v45, (int)v5, (int)v42);
  v13 = v44;
  if ( 1.0 == v43 || !v44 || (*(_DWORD *)(v44 + 252) & 0x40000000) != 0 )
    goto LABEL_13;
  if ( *(_BYTE *)(v44 + 306) == 6 )
    goto LABEL_50;
  if ( !*(_BYTE *)(v44 + 225) )
  {
LABEL_13:
    sub_103FB900((int)&savedregs, v44, (float *)v49, v46, (int)v5, (int)v42);
    if ( 1.0 == v43 || (v13 = v44) == 0 || (*(_DWORD *)(v44 + 252) & 0x40000000) != 0 )
    {
      if ( !*(_DWORD *)(dword_10698344 + 48) )
        goto LABEL_53;
      v14 = sub_103FBF60((_DWORD *)a1, (float *)v49, (float *)v51, *(float *)(dword_106F001C + 44));
      v13 = v14;
      if ( !v14 )
        goto LABEL_53;
      v15 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)v14 + 576))(v14);
      sub_103FB900((int)&savedregs, v13, (float *)v49, v15, (int)v5, (int)v42);
      if ( !v44 || v44 != v13 || (*(_DWORD *)(v13 + 252) & 0x40000000) != 0 )
        goto LABEL_53;
    }
  }
  if ( *(_BYTE *)(v13 + 306) == 6 )
  {
LABEL_50:
    if ( sub_103FB1D0(v13) )
    {
      if ( *(_BYTE *)(dword_106B3CDC + 12) == 1 )
      {
        if ( __RTDynamicCast(
               v13,
               0,
               (struct _s_RTTICompleteObjectLocator *)&CBaseEntity `RTTI Type Descriptor',
               (int)&CRagdollProp `RTTI Type Descriptor',
               0) )
        {
          sub_10400E30(a1, (void *)v13, (float *)v51, (int)v42);
          return;
        }
      }
      else if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v13 + 628))(v13) )
      {
        goto LABEL_53;
      }
      sub_104009E0(a1, (_DWORD *)v13, (float *)v51, (int)v42);
      return;
    }
LABEL_53:
    v16 = (_DWORD *)a1;
    goto LABEL_54;
  }
  v16 = (_DWORD *)a1;
  if ( !*(_BYTE *)(v13 + 225) )
  {
LABEL_54:
    sub_103FA570(v16);
    return;
  }
  v17 = sub_100D1940((_DWORD *)a1);
  if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v17 + 320))(v17)
    && *(_BYTE *)(dword_106B3CDC + 12) != 1
    && (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v13 + 284))(v13)
    && (*(int (__thiscall **)(int))(*(_DWORD *)v13 + 220))(v13) != 12
    && *(char **)(v13 + 92) != "npc_antlion"
    && !sub_100D6240((_DWORD *)v13, "npc_antlion") )
  {
    goto LABEL_53;
  }
  if ( *(_BYTE *)(dword_106B3CDC + 12) == 1
    && (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v13 + 284))(v13)
    && (*(_DWORD *)(v13 + 252) & 0x10000000) == 0
    && (v18 = sub_100D7680(v13), (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v18 + 764))(v18)) )
  {
    sub_10248110((int)v41, (int)v5, (int)v5, 1.0, 0, 0);
    v19 = sub_100D7680(v13);
    v20 = sub_101D0270(v19, 0, (int)v41, 3, 1);
    v21 = *(int **)(v20 + 1124);
    if ( v21 )
    {
      sub_100BCE80(&dword_106960D0, v21);
      *(_DWORD *)(v20 + 1124) = 0;
    }
    *(_BYTE *)(v20 + 1864) = 0;
    if ( *(_BYTE *)(v13 + 1713) )
    {
      *(_BYTE *)(v20 + 4392) = 1;
      *(_DWORD *)(v20 + 4400) = *(_DWORD *)(v13 + 1716);
      *(_DWORD *)(v20 + 4404) = *(_DWORD *)(v13 + 1720);
      *(_DWORD *)(v20 + 4408) = *(_DWORD *)(v13 + 1724);
      *(_DWORD *)(v20 + 4412) = *(_DWORD *)(v13 + 1728);
      *(_DWORD *)(v20 + 4416) = *(_DWORD *)(v13 + 1732);
      *(_DWORD *)(v20 + 4396) = *(_DWORD *)(v13 + 808);
      if ( *(_DWORD *)(v13 + 808) == 1 )
      {
        v22 = sub_100BF520(v20, "helmet");
        sub_100C1600(v20, v22, 0);
      }
      v23 = *(char **)(v13 + 812);
      v24 = *(_BYTE **)(v20 + 1868);
      do
      {
        v25 = *v23;
        *v24++ = *v23++;
      }
      while ( v25 );
      v26 = *(char **)(v13 + 816);
      v27 = *(_BYTE **)(v20 + 1872);
      do
      {
        v28 = *v26;
        *v27++ = *v26++;
      }
      while ( v28 );
      v29 = *(char **)(v13 + 820);
      v30 = *(_BYTE **)(v20 + 1876);
      do
      {
        v31 = *v29;
        *v30++ = *v29++;
      }
      while ( v31 );
      v32 = *(char **)(v13 + 824);
      v33 = *(_BYTE **)(v20 + 1880);
      do
      {
        v34 = *v32;
        *v33++ = *v32++;
      }
      while ( v34 );
      v35 = *(char **)(v13 + 828);
      v36 = *(_BYTE **)(v20 + 1884);
      do
      {
        v37 = *v35;
        *v36++ = *v35++;
      }
      while ( v37 );
    }
    sub_101B6090(v20, 0x8000);
    v39 = (*(int (__thiscall **)(int))(*(_DWORD *)(v13 + 320) + 8))(v13 + 320);
    v38 = (*(int (__thiscall **)(int))(*(_DWORD *)(v13 + 320) + 4))(v13 + 320);
    sub_100D5D10(v38, v39);
    sub_10248110((int)v40, v48, v48, 10000.0, 12582912, 0);
    sub_100D9E70((int *)v13, v13, v40);
    sub_10400E30(a1, (void *)v20, (float *)v51, (int)v42);
  }
  else
  {
    sub_10400870(a1, v13, (float *)v51, v42);
  }
}
