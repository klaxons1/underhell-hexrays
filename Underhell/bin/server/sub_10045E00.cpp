int __usercall sub_10045E00@<eax>(int a1@<ecx>, double a2@<st0>)
{
  int v3; // eax
  int v4; // ecx
  int v5; // eax
  int v6; // ebx
  void (__thiscall *v7)(int); // eax
  int v8; // eax
  _DWORD *v9; // edi
  int v10; // eax
  const char *v11; // edx
  const char *v12; // eax
  int *v13; // edi
  int *v14; // edi
  int v15; // ebx
  int *v16; // eax
  int v17; // edi
  int v18; // eax
  int *v19; // edi
  _DWORD *v20; // ebx
  const char *v21; // eax
  int v22; // eax
  void (__thiscall *v23)(int, _DWORD *); // edx
  int v24; // eax
  _DWORD *v25; // edi
  char *v26; // eax
  int v27; // ebx
  int v28; // eax
  int v29; // eax
  int v30; // ecx
  unsigned __int64 v31; // rax
  int *v32; // ecx
  int v34; // [esp-4h] [ebp-3Ch]
  unsigned __int64 v35; // [esp+Ch] [ebp-2Ch] BYREF
  unsigned __int64 v36; // [esp+14h] [ebp-24h] BYREF
  unsigned __int64 v37; // [esp+1Ch] [ebp-1Ch] BYREF
  float v38; // [esp+24h] [ebp-14h]
  __int64 *v39; // [esp+28h] [ebp-10h]
  int *v40; // [esp+2Ch] [ebp-Ch]
  int *v41; // [esp+30h] [ebp-8h]
  bool v42; // [esp+36h] [ebp-2h]
  char v43; // [esp+37h] [ebp-1h]

  v39 = &qword_10690DF0;
  qword_10690DF0 = __rdtsc();
  v42 = *(_DWORD *)(dword_106CE684 + 48) != 0;
  memset(&unk_10691CA0, 0, 0x140u);
  dword_10691C50 = 0;
  v3 = Plat_MSTime();
  *(_DWORD *)(a1 + 2716) &= ~8u;
  v39 = (__int64 *)v3;
  v43 = 0;
  v40 = (int *)&unk_10691CA0;
  while ( !v43 )
  {
    v4 = *(_DWORD *)(a1 + 2124);
    if ( v4 && *(_DWORD *)(a1 + 2136) == 4 )
    {
      v5 = ++*(_DWORD *)(a1 + 2132);
      *(_DWORD *)(a1 + 2136) = 0;
      *(_DWORD *)(a1 + 2152) = 0;
      *(_WORD *)(a1 + 2156) = 0;
      if ( v5 == *(_DWORD *)(v4 + 8) )
      {
        *(_DWORD *)(a1 + 3560) = 0;
        *(_DWORD *)(a1 + 3564) = 0;
        sub_10023CB0((char *)a1, 36);
      }
      if ( sub_10023D10((_DWORD *)a1, 36) )
      {
        *(_DWORD *)(a1 + 2192) = *(_DWORD *)(a1 + 2256);
        *(_DWORD *)(a1 + 2196) = *(_DWORD *)(a1 + 2260);
        *(_DWORD *)(a1 + 2200) = *(_DWORD *)(a1 + 2264);
        *(_DWORD *)(a1 + 2204) = *(_DWORD *)(a1 + 2268);
        *(_DWORD *)(a1 + 2208) = *(_DWORD *)(a1 + 2272);
        *(_DWORD *)(a1 + 2212) = *(_DWORD *)(a1 + 2276);
        *(_DWORD *)(a1 + 2216) = *(_DWORD *)(a1 + 2280);
        *(_DWORD *)(a1 + 2220) = *(_DWORD *)(a1 + 2284);
        sub_10023CB0((char *)a1, 36);
        if ( a1 != -2288 )
        {
          *(_DWORD *)(a1 + 2288) = -1;
          *(_DWORD *)(a1 + 2292) = -1;
          *(_DWORD *)(a1 + 2296) = -1;
          *(_DWORD *)(a1 + 2300) = -1;
          *(_DWORD *)(a1 + 2304) = -1;
          *(_DWORD *)(a1 + 2308) = -1;
          *(_DWORD *)(a1 + 2312) = -1;
          *(_DWORD *)(a1 + 2316) = -1;
        }
      }
      if ( (dword_1069042C & 2) != 0 )
      {
        ++*(_DWORD *)(a1 + 3568);
        v38 = COERCE_FLOAT(&v35);
        v31 = __rdtsc();
        v35 = v31;
        goto LABEL_90;
      }
    }
    v6 = dword_10691C50;
    v41 = (int *)dword_10691C50++;
    if ( !sub_10045B70(a1) || *(_DWORD *)(a1 + 2324) != *(_DWORD *)(a1 + 2336) )
    {
      v7 = *(void (__thiscall **)(int))(*(_DWORD *)a1 + 1232);
      *(_BYTE *)(a1 + 2158) = 1;
      v7(a1);
      if ( !sub_10023D10((_DWORD *)a1, 68) && (!*(_BYTE *)(a1 + 2321) || *(_BYTE *)(a1 + 2322)) )
        (*(void (__thiscall **)(int))(*(_DWORD *)a1 + 1220))(a1);
      if ( sub_100446B0((_DWORD *)a1) )
      {
        v8 = (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 1396))(a1);
        if ( v8 != *(_DWORD *)(a1 + 2336) )
          *(_DWORD *)(a1 + 2336) = v8;
      }
      if ( sub_10023D10((_DWORD *)a1, 35) && *(_DWORD *)(a1 + 2324) == *(_DWORD *)(a1 + 2336) )
      {
        if ( (*(_DWORD *)(a1 + 236) & 0x8000000) != 0 )
          sub_10029620((_DWORD *)a1, 1, (int)"      (failed)\n");
        v9 = (_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)a1 + 1340))(a1);
        v10 = *(_DWORD *)(a1 + 2124);
        *(_DWORD *)(a1 + 2128) = *v9;
        if ( v10 )
          v11 = *(const char **)(v10 + 44);
        else
          v11 = "GetCurSchedule() == NULL";
        v12 = *(const char **)(a1 + 260);
        if ( !v12 )
          v12 = String;
        DevWarning(2, "(%s) Schedule (%s) Failed at %d!\n", v12, v11, *(_DWORD *)(a1 + 2132));
        sub_100445B0(a1, (int)v9);
      }
      else
      {
        sub_1002B660(a1, *(_DWORD *)(a1 + 2336));
        v13 = &dword_10691CA8[8 * v6];
        v38 = *(float *)&v13;
        *(_QWORD *)v13 = __rdtsc();
        v34 = (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 1336))(a1);
        v38 = COERCE_FLOAT(&v37);
        v37 = __rdtsc();
        *(_QWORD *)v13 = v37 - *(_QWORD *)v13;
        sub_100445B0(a1, v34);
        v6 = (int)v41;
      }
    }
    if ( !*(_DWORD *)(a1 + 2124) )
    {
      v14 = &dword_10691CA8[8 * v6];
      v38 = *(float *)&v14;
      *(_QWORD *)v14 = __rdtsc();
      v15 = (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 1336))(a1);
      v38 = COERCE_FLOAT(&v36);
      v36 = __rdtsc();
      *(_QWORD *)v14 = v36 - *(_QWORD *)v14;
      if ( v15 )
        sub_100445B0(a1, v15);
      v6 = (int)v41;
    }
    v16 = *(int **)(a1 + 2124);
    if ( !v16 || !v16[2] )
    {
      DevMsg("ERROR: Missing or invalid schedule!\n");
      (*(void (__thiscall **)(int, int))(*(_DWORD *)a1 + 1416))(a1, 1);
      v38 = COERCE_FLOAT(&v35);
      v31 = __rdtsc();
      v35 = v31;
      goto LABEL_90;
    }
    if ( !*(_DWORD *)(a1 + 2136) )
    {
      if ( !*(_DWORD *)(a1 + 2132) )
      {
        v17 = *v16;
        v18 = (*(int (__thiscall **)(int, int))(*(_DWORD *)a1 + 1304))(a1, *v16);
        if ( v18 == -1 )
          v18 = v17;
        (*(void (__thiscall **)(int, int))(*(_DWORD *)a1 + 1236))(a1, v18);
      }
      v19 = &dword_10691CB0[8 * v6];
      v38 = *(float *)&v19;
      *(_QWORD *)v19 = __rdtsc();
      v20 = (_DWORD *)sub_10043EC0((_DWORD *)a1);
      if ( v42 )
        v21 = (const char *)(*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)a1 + 1316))(a1, *v20);
      else
        v21 = "ai_task";
      *v40 = (int)v21;
      if ( (*(_DWORD *)(a1 + 236) & 0x8000000) != 0 )
        sub_10029620((_DWORD *)a1, 1, (int)"  Task: %s\n");
      v22 = *(_DWORD *)a1;
      *(_DWORD *)(a1 + 2136) = 1;
      *(_DWORD *)(a1 + 2148) = 0;
      a2 = *(float *)(dword_106B31C8 + 12);
      v23 = *(void (__thiscall **)(int, _DWORD *))(v22 + 1256);
      *(float *)(a1 + 2144) = *(float *)(dword_106B31C8 + 12);
      v23(a1, v20);
      if ( sub_10020E90((_DWORD *)a1) && !sub_10023D10((_DWORD *)a1, 35) )
        sub_10043B70((_BYTE *)a1);
      v38 = COERCE_FLOAT(&v35);
      v35 = __rdtsc();
      v6 = (int)v41;
      *(_QWORD *)v19 = v35 - *(_QWORD *)v19;
    }
    sub_1003A0D0(a1, a2);
    v24 = *(_DWORD *)(a1 + 2136);
    if ( v24 == 4 || !v24 )
      goto LABEL_75;
    if ( !sub_10020E90((_DWORD *)a1) || sub_10023D10((_DWORD *)a1, 35) )
      goto LABEL_76;
    v25 = (_DWORD *)sub_10043EC0((_DWORD *)a1);
    v26 = v42 ? (char *)(*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)a1 + 1316))(a1, *v25) : "ai_task";
    *v40 = (int)v26;
    v41 = &dword_10691CB8[8 * v6];
    v38 = *(float *)&v41;
    *(_QWORD *)v41 = __rdtsc();
    v27 = 0;
    do
    {
      (*(void (__thiscall **)(int, _DWORD *))(*(_DWORD *)a1 + 1264))(a1, v25);
      if ( !*(_DWORD *)(a1 + 2152) || *(_DWORD *)(a1 + 2136) == 4 || sub_10023D10((_DWORD *)a1, 35) )
        break;
      if ( *(_DWORD *)(dword_106907FC + 48) )
      {
        if ( *(_DWORD *)(dword_10690604 + 48) )
        {
          v28 = Plat_MSTime();
          if ( sub_10044730(a1, v28 - (_DWORD)v39, 8) )
          {
            v43 = 1;
            break;
          }
        }
      }
    }
    while ( ++v27 < 8 );
    if ( sub_10020E90((_DWORD *)a1) && !sub_10023D10((_DWORD *)a1, 35) )
    {
      if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)a1 + 1752))(a1) )
        *(_DWORD *)(a1 + 2716) |= 0x40000u;
      sub_10043CC0((char *)a1);
    }
    sub_10022B90(v41);
    if ( *(_DWORD *)(a1 + 2136) != 4 )
    {
LABEL_76:
      v43 = 1;
      goto LABEL_77;
    }
    if ( !v43 )
    {
LABEL_75:
      v29 = Plat_MSTime();
      if ( sub_10044730(a1, v29 - (_DWORD)v39, 8) )
        goto LABEL_76;
    }
LABEL_77:
    v40 += 8;
    if ( (int)v40 >= (int)&dword_10691DE0 )
      break;
  }
  sub_1003A0D0(a1, a2);
  if ( (dword_1069042C & 2) != 0
    && !(unsigned __int8)sub_1007E040(*(_DWORD *)(a1 + 2588))
    && *(_DWORD *)(a1 + 3568) >= dword_105FE110 )
  {
    v30 = *(_DWORD *)(a1 + 864);
    v38 = 0.0;
    if ( v30 != COERCE_INT(0.0) )
    {
      if ( *(_BYTE *)(a1 + 84) )
      {
        *(_BYTE *)(a1 + 88) |= 1u;
      }
      else
      {
        v32 = *(int **)(a1 + 24);
        if ( v32 )
          sub_100194B0(v32, 864);
      }
      *(float *)(a1 + 864) = 0.0;
    }
  }
  v38 = COERCE_FLOAT(&v35);
  v31 = __rdtsc();
  v35 = v31;
LABEL_90:
  qword_10690DF0 = v35 - qword_10690DF0;
  return v31;
}
