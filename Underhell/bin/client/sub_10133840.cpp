int __userpurge sub_10133840@<eax>(int a1@<ecx>, int a2@<edi>, int a3, int a4, int a5, int a6, int a7, int ArgList)
{
  int result; // eax
  int v10; // ebx
  double v11; // st7
  int v12; // edi
  double v13; // st6
  double v14; // st7
  int v15; // edi
  int v16; // eax
  double v17; // st7
  int v18; // eax
  int v19; // edi
  int v20; // eax
  int v21; // edi
  int v22; // edi
  bool v23; // cc
  bool v24; // c0
  bool v25; // c3
  int v26; // ecx
  int v27; // eax
  int v28; // edx
  int v29; // edi
  int v30; // ebx
  int v31; // edi
  int v32; // edi
  int v33; // edi
  int v34; // edi
  int v35; // edi
  int v36; // edi
  int v37; // edi
  int v38; // edi
  double v39; // [esp+4h] [ebp-130h]
  double ArgList_4; // [esp+Ch] [ebp-128h]
  double ArgList_4a; // [esp+Ch] [ebp-128h]
  double ArgList_4b; // [esp+Ch] [ebp-128h]
  char Buffer[256]; // [esp+20h] [ebp-114h] BYREF
  int v45; // [esp+120h] [ebp-14h]
  int v46; // [esp+124h] [ebp-10h]
  int v47; // [esp+128h] [ebp-Ch]
  int v48; // [esp+12Ch] [ebp-8h]
  int v49; // [esp+130h] [ebp-4h]

  result = dword_10439784;
  if ( !*(_DWORD *)(dword_10439784 + 48) )
    return result;
  if ( *(_DWORD *)(dword_10439934 + 48) )
    v10 = *(_DWORD *)(a1 + 57712);
  else
    v10 = *(_DWORD *)(a1 + 57716);
  v11 = *((float *)off_103DC81C + 2);
  v12 = a5 - *(_DWORD *)(a1 + 57760);
  v13 = *(float *)(a1 + 57632) * 0.9;
  v45 = v12;
  v14 = v11 * 0.09999999999999998 + v13;
  *(float *)(a1 + 57632) = v14;
  if ( v14 <= 0.0 )
    *(float *)(a1 + 57632) = 1.0;
  if ( (*(unsigned __int8 (__thiscall **)(int, int))(*(_DWORD *)dword_1041315C + 300))(dword_1041315C, a2) )
    *(float *)(a1 + 57636) = 0.0;
  a5 = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA6C + 268))(dword_1047CA6C, v10);
  sub_10228370(Buffer, 0x100u, "fps:%4i   ping: %i ms", (int)(1.0 / *(float *)(a1 + 57632)));
  (*(void (__cdecl **)(int, int, int, int, int, int, int, int, char *))(*(_DWORD *)dword_1047CA64 + 536))(
    dword_1047CA64,
    v10,
    a4,
    v12,
    229,
    229,
    178,
    255,
    Buffer);
  v46 = a6 + a4;
  sub_10133570((_DWORD *)a1, a6 + a4, v12);
  v15 = a5 + v12;
  v16 = *(_DWORD *)(ArgList + 12 * (((unsigned __int16)*(_DWORD *)(a1 + 57652) - 1) & 0x3FF) + 4);
  ArgList = v16;
  if ( v16 )
    dword_10439960 = v16;
  else
    ArgList = dword_10439960;
  sub_10228370(Buffer, 0x100u, "in :%4i   %2.2f k/s ", *(_WORD *)(a7 + 36 * (*(_DWORD *)(a1 + 57648) & 0x3FF) + 26));
  a7 = (*(int (**)(int, int, const char *, ...))(*(_DWORD *)dword_1047CA64 + 548))(dword_1047CA64, v10, "%s", Buffer);
  (*(void (__cdecl **)(int, int, int, int, int, int, int, int, char *))(*(_DWORD *)dword_1047CA64 + 536))(
    dword_1047CA64,
    v10,
    a4,
    v15,
    229,
    229,
    178,
    255,
    Buffer);
  ArgList_4 = sub_10073EA0() * 1000.0;
  sub_10228370(Buffer, 0x100u, "lerp: %5.1f ms", SLOBYTE(ArgList_4));
  v47 = 229;
  v48 = 229;
  v49 = 178;
  v17 = sub_10073EA0();
  if ( v17 > 0.001 )
  {
    if ( 1.0 / v17 <= *(float *)(a1 + 57764) )
    {
      if ( 2.0 / *(float *)(*(_DWORD *)(*(_DWORD *)(a1 + 57724) + 28) + 44) > v17 )
      {
        v47 = 255;
        v48 = 125;
        v49 = 31;
      }
    }
    else
    {
      v47 = 255;
      v48 = 255;
      v49 = 31;
    }
  }
  (*(void (__cdecl **)(int, int, int, int, int, int, int, int, char *))(*(_DWORD *)dword_1047CA64 + 536))(
    dword_1047CA64,
    v10,
    a4 + a7,
    v15,
    v47,
    v48,
    v49,
    255,
    Buffer);
  ArgList_4a = *(float *)(a1 + 57668);
  sub_10228370(Buffer, 0x100u, "%3.1f/s", SLOBYTE(ArgList_4a));
  v18 = (*(int (**)(int, int, const char *, ...))(*(_DWORD *)dword_1047CA64 + 548))(dword_1047CA64, v10, "%s", Buffer);
  (*(void (__cdecl **)(int, int, int, int, int, int, int, int, char *))(*(_DWORD *)dword_1047CA64 + 536))(
    dword_1047CA64,
    v10,
    a4 - v18 + a6 - 1,
    v15,
    229,
    229,
    178,
    255,
    Buffer);
  v19 = a5 + v15;
  sub_10228370(Buffer, 0x100u, "out:%4i   %2.2f k/s", ArgList);
  (*(void (__cdecl **)(int, int, int, int, int, int, int, int, char *))(*(_DWORD *)dword_1047CA64 + 536))(
    dword_1047CA64,
    v10,
    a4,
    v19,
    229,
    229,
    178,
    255,
    Buffer);
  ArgList_4b = *(float *)(a1 + 57672);
  sub_10228370(Buffer, 0x100u, "%3.1f/s", SLOBYTE(ArgList_4b));
  v20 = (*(int (**)(int, int, const char *, ...))(*(_DWORD *)dword_1047CA64 + 548))(dword_1047CA64, v10, "%s", Buffer);
  (*(void (__cdecl **)(int, int, int, int, int, int, int, int, char *))(*(_DWORD *)dword_1047CA64 + 536))(
    dword_1047CA64,
    v10,
    a4 - v20 + a6 - 1,
    v19,
    229,
    229,
    178,
    255,
    Buffer);
  v21 = a5 + v19;
  result = sub_10133650((_DWORD *)a1, v46, v21);
  if ( a3 > 2 )
  {
    sub_10228370(Buffer, 0x100u, "loss:%3i    choke: %2i ", (int)(100.0 * *(float *)(a1 + 57640)));
    (*(void (**)(int, int, const char *, ...))(*(_DWORD *)dword_1047CA64 + 548))(dword_1047CA64, v10, "%s", Buffer);
    result = (*(int (__cdecl **)(int, int, int, int, int, int, int, int, char *))(*(_DWORD *)dword_1047CA64 + 536))(
               dword_1047CA64,
               v10,
               a4,
               v21,
               229,
               229,
               178,
               255,
               Buffer);
    v22 = a5 + v21;
    v23 = a3 < 3;
    if ( a3 <= 3 )
      goto LABEL_25;
    v39 = *(float *)(a1 + 57764);
    sub_10228370(Buffer, 0x100u, "sv  : %5.1f   var: %4.2f msec", SLOBYTE(v39));
    v24 = *(float *)(a1 + 57764) > 10.0;
    v25 = 10.0 == *(float *)(a1 + 57764);
    v26 = 229;
    v48 = 229;
    v49 = 178;
    if ( v24 || v25 )
    {
      if ( *(float *)(a1 + 57764) < 20.0 )
      {
        v26 = 255;
        v48 = 255;
        v49 = 0;
      }
    }
    else
    {
      v26 = 255;
      v48 = 31;
      v49 = 31;
    }
    result = (*(int (__cdecl **)(int, int, int, int, int, int, int, int, char *))(*(_DWORD *)dword_1047CA64 + 536))(
               dword_1047CA64,
               v10,
               a4,
               v22,
               v26,
               v48,
               v49,
               255,
               Buffer);
  }
  v23 = a3 < 3;
LABEL_25:
  if ( !v23 )
  {
    v27 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_1047CA64 + 268))(
            dword_1047CA64,
            *(_DWORD *)(a1 + 57720));
    v28 = *(_DWORD *)(a1 + 57720);
    a6 = v27;
    v29 = v45 - v27 - 5;
    (*(void (__thiscall **)(int, int, const wchar_t *, int *, int *))(*(_DWORD *)dword_1047CA64 + 288))(
      dword_1047CA64,
      v28,
      L"otherplayersWWW",
      &a3,
      &a5);
    v30 = a4 - a3;
    if ( a4 - a3 < 0 )
      v30 = v46 + 5;
    (*(void (__cdecl **)(int, _DWORD, int, int, _DWORD, _DWORD, int, int, const char *))(*(_DWORD *)dword_1047CA64 + 536))(
      dword_1047CA64,
      *(_DWORD *)(a1 + 57720),
      v30,
      v29,
      0,
      0,
      255,
      255,
      "localplayer");
    v31 = v29 - a6;
    (*(void (__cdecl **)(int, _DWORD, int, int, _DWORD, int, _DWORD, int, const char *))(*(_DWORD *)dword_1047CA64 + 536))(
      dword_1047CA64,
      *(_DWORD *)(a1 + 57720),
      v30,
      v31,
      0,
      255,
      0,
      255,
      "otherplayers");
    v32 = v31 - a6;
    (*(void (__cdecl **)(int, _DWORD, int, int, int, _DWORD, _DWORD, int, const char *))(*(_DWORD *)dword_1047CA64 + 536))(
      dword_1047CA64,
      *(_DWORD *)(a1 + 57720),
      v30,
      v32,
      255,
      0,
      0,
      255,
      "entities");
    v33 = v32 - a6;
    (*(void (__cdecl **)(int, _DWORD, int, int, int, int, _DWORD, int, const char *))(*(_DWORD *)dword_1047CA64 + 536))(
      dword_1047CA64,
      *(_DWORD *)(a1 + 57720),
      v30,
      v33,
      255,
      255,
      0,
      255,
      "sounds");
    v34 = v33 - a6;
    (*(void (__cdecl **)(int, _DWORD, int, int, _DWORD, int, int, int, const char *))(*(_DWORD *)dword_1047CA64 + 536))(
      dword_1047CA64,
      *(_DWORD *)(a1 + 57720),
      v30,
      v34,
      0,
      255,
      255,
      255,
      "events");
    v35 = v34 - a6;
    (*(void (__cdecl **)(int, _DWORD, int, int, int, int, _DWORD, int, const char *))(*(_DWORD *)dword_1047CA64 + 536))(
      dword_1047CA64,
      *(_DWORD *)(a1 + 57720),
      v30,
      v35,
      128,
      128,
      0,
      255,
      "usermessages");
    v36 = v35 - a6;
    (*(void (__cdecl **)(int, _DWORD, int, int, _DWORD, int, int, int, const char *))(*(_DWORD *)dword_1047CA64 + 536))(
      dword_1047CA64,
      *(_DWORD *)(a1 + 57720),
      v30,
      v36,
      0,
      128,
      128,
      255,
      "entmessages");
    v37 = v36 - a6;
    (*(void (__cdecl **)(int, _DWORD, int, int, int, _DWORD, _DWORD, int, const char *))(*(_DWORD *)dword_1047CA64 + 536))(
      dword_1047CA64,
      *(_DWORD *)(a1 + 57720),
      v30,
      v37,
      128,
      0,
      0,
      255,
      "stringcmds");
    v38 = v37 - a6;
    (*(void (__cdecl **)(int, _DWORD, int, int, _DWORD, int, _DWORD, int, const char *))(*(_DWORD *)dword_1047CA64 + 536))(
      dword_1047CA64,
      *(_DWORD *)(a1 + 57720),
      v30,
      v38,
      0,
      128,
      0,
      255,
      "stringtables");
    return (*(int (__cdecl **)(int, _DWORD, int, int, _DWORD, _DWORD, int, int, const char *))(*(_DWORD *)dword_1047CA64
                                                                                             + 536))(
             dword_1047CA64,
             *(_DWORD *)(a1 + 57720),
             v30,
             v38 - a6,
             0,
             0,
             128,
             255,
             "voice");
  }
  return result;
}
