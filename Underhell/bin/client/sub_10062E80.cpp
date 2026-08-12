void __userpurge sub_10062E80(int a1@<ecx>, int a2@<ebp>, float *a3, int a4)
{
  int v4; // esi
  int v5; // eax
  bool v6; // zf
  int v7; // edi
  float *v8; // esi
  int v9; // eax
  int v10; // edx
  char v11; // cl
  double v12; // st7
  double v13; // st6
  double v14; // st5
  double v15; // st1
  double v16; // st4
  double v17; // st3
  double v18; // st7
  _DWORD *v19; // eax
  _DWORD *v20; // eax
  bool v21; // cf
  int v22; // ecx
  int v23; // eax
  int v24; // ecx
  float *v25; // esi
  int v26; // eax
  float v27[22]; // [esp+24h] [ebp-10Ch] BYREF
  _BYTE v28[12]; // [esp+7Ch] [ebp-B4h] BYREF
  int v29; // [esp+88h] [ebp-A8h] BYREF
  float v30; // [esp+94h] [ebp-9Ch]
  float v31; // [esp+98h] [ebp-98h]
  float v32; // [esp+9Ch] [ebp-94h]
  float v33; // [esp+A0h] [ebp-90h]
  float v34; // [esp+A8h] [ebp-88h]
  char v35; // [esp+B2h] [ebp-7Eh]
  char v36; // [esp+B3h] [ebp-7Dh]
  float v37[3]; // [esp+D8h] [ebp-58h] BYREF
  float v38[3]; // [esp+E4h] [ebp-4Ch] BYREF
  float v39[3]; // [esp+F0h] [ebp-40h] BYREF
  int *v40; // [esp+FCh] [ebp-34h]
  unsigned __int64 v41; // [esp+104h] [ebp-2Ch] BYREF
  void **v42; // [esp+110h] [ebp-20h] BYREF
  unsigned __int64 v43; // [esp+114h] [ebp-1Ch] BYREF
  int v44; // [esp+11Ch] [ebp-14h]
  int i; // [esp+120h] [ebp-10h]
  int v46; // [esp+124h] [ebp-Ch]
  void *v47; // [esp+128h] [ebp-8h]
  int v48; // [esp+12Ch] [ebp-4h] BYREF
  void *retaddr; // [esp+130h] [ebp+0h]

  v46 = a2;
  v47 = retaddr;
  v4 = a1;
  v5 = *(_DWORD *)(a1 + 4);
  v42 = &CTraceFilterWorldOnly::`vftable';
  v6 = (*(_BYTE *)(v5 + 1248) & 4) == 0;
  v44 = a1;
  if ( !v6 && *(_DWORD *)(dword_1040E5C4 + 48) || *(_DWORD *)(dword_1040E5C4 + 48) == 2 )
  {
    v40 = &dword_1040EA70;
    i = (int)&v41;
    v41 = __rdtsc();
    v7 = a4;
    HIDWORD(v43) = 0;
    if ( a4 > 0 )
    {
      v8 = a3;
      v37[0] = 2.0;
      v37[1] = 2.0;
      v37[2] = 2.0;
      v38[0] = -2.0;
      v38[1] = -2.0;
      v38[2] = -2.0;
      do
      {
        for ( i = 0; i < 10; ++i )
        {
          sub_1000E4B0(v27, v8 + 3, v8, v38, v37);
          (*(void (__thiscall **)(int, float *, int, void ***, _BYTE *))(*(_DWORD *)dword_104131A0 + 16))(
            dword_104131A0,
            v27,
            16395,
            &v42,
            v28);
          if ( *(_DWORD *)(dword_10439134 + 48) )
            sub_10130AC0((int)v28, (int)&v29, 255, 255, 0, 1, -1.0);
          if ( 1.0 == v34 )
            break;
          if ( 0.0 == v34 || v35 || v36 )
          {
            v20 = (_DWORD *)(*(_DWORD *)(v44 + 4) + 4 * (SHIDWORD(v43) >> 5) + 1192);
            *v20 |= 1 << (BYTE4(v43) & 0x1F);
            *v8 = v8[3];
            v8[1] = v8[4];
            v8[2] = v8[5];
            break;
          }
          v9 = v44;
          v10 = SHIDWORD(v43) >> 5;
          v11 = BYTE4(v43) & 0x1F;
          v12 = *v8 - (*v8 - v8[3]) * flt_103DBE10;
          v13 = v8[1] - (v8[1] - v8[4]) * flt_103DBE10;
          v14 = v8[2] - (v8[2] - v8[5]) * flt_103DBE10;
          v15 = 2.2 - (v14 * v32 + v13 * v31 + v30 * v12 - v33);
          v16 = v32 * v15;
          v17 = v12 + v30 * v15;
          v18 = v31 * v15;
          *v8 = v17;
          v8[1] = v18 + v13;
          v8[2] = v14 + v16;
          v19 = (_DWORD *)(*(_DWORD *)(v9 + 4) + 4 * v10 + 1192);
          *v19 |= 1 << v11;
        }
        if ( i == 10 )
        {
          *v8 = v8[3];
          v8[1] = v8[4];
          v8[2] = v8[5];
        }
        v8 += 9;
        ++HIDWORD(v43);
      }
      while ( SHIDWORD(v43) < a4 );
      v7 = a4;
      v4 = v44;
    }
    if ( v40 )
    {
      i = (int)&v43;
      v43 = __rdtsc();
      v41 = v43 - v41;
      v21 = __CFADD__((_DWORD)v41, *v40);
      *v40 += v41;
      v40[1] += HIDWORD(v41) + v21;
    }
  }
  else
  {
    v7 = a4;
  }
  v22 = *(_DWORD *)(v4 + 4);
  if ( (*(_BYTE *)(v22 + 1936) & 1) != 0 )
  {
    sub_10061100(v22, (int)&v48, 0, a3, v39);
    if ( (*(_BYTE *)(*(_DWORD *)(v44 + 4) + 1936) & 4) != 0 && v7 > 3 )
    {
      sub_101EDFB0(v39, v38);
      v23 = v7 - 2;
      if ( v7 - 2 > 2 )
        v23 = 2;
      sub_100604F0((int)a3, 1, v23, flt_103DBBB8, flt_103DBBBC, v38);
    }
  }
  v24 = *(_DWORD *)(v44 + 4);
  if ( (*(_BYTE *)(v24 + 1936) & 2) != 0 )
  {
    v25 = &a3[9 * v7 - 9];
    sub_10061100(v24, (int)&v48, 1, v25, v39);
    if ( (*(_BYTE *)(*(_DWORD *)(v44 + 4) + 1936) & 8) != 0 && v7 > 3 )
    {
      sub_101EDFB0(v39, v38);
      v26 = v7 - 2;
      if ( v7 - 2 > 2 )
        v26 = 2;
      sub_100604F0((int)v25, -1, v26, flt_103DBBB8, flt_103DBBBC, v38);
    }
  }
}
