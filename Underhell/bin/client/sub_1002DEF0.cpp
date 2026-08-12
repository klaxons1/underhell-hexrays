char __userpurge sub_1002DEF0@<al>(int a1@<ecx>, int a2@<edi>, void *a3, int a4, int a5, float a6)
{
  _DWORD *v7; // ebx
  bool v8; // zf
  char v9; // al
  const char *v10; // eax
  DWORD CurrentThreadId; // eax
  int v13; // edi
  DWORD v14; // eax
  int v15; // ecx
  _DWORD *v16; // eax
  int v17; // eax
  int v18; // edi
  int v19; // ecx
  int v20; // eax
  _DWORD *v21; // edi
  int v22; // edx
  void (*v23)(void); // edx
  int v24; // edi
  int v25; // eax
  int v26; // ecx
  int v27; // eax
  int v28; // eax
  int v29; // eax
  int v30; // eax
  int v31; // eax
  int v32; // eax
  volatile __int32 *v33; // eax
  int v34; // [esp+30h] [ebp-E6Ch]
  int v35; // [esp+38h] [ebp-E64h]
  int v36; // [esp+38h] [ebp-E64h]
  int v37; // [esp+3Ch] [ebp-E60h]
  _BYTE v39[2048]; // [esp+4Ch] [ebp-E50h] BYREF
  _BYTE v40[1536]; // [esp+84Ch] [ebp-650h] BYREF
  _BYTE v41[48]; // [esp+E4Ch] [ebp-50h] BYREF
  _DWORD v42[4]; // [esp+E7Ch] [ebp-20h] BYREF
  int v43; // [esp+E8Ch] [ebp-10h]
  int v44; // [esp+E90h] [ebp-Ch]
  int v45; // [esp+E94h] [ebp-8h]
  int v46; // [esp+E98h] [ebp-4h]
  __int16 v47; // [esp+EACh] [ebp+10h]

  CVProfile::EnterScope(g_VProfCurrentProfile, "C_BaseAnimating::SetupBones", 0, "Client_Animation", 0, 4);
  v7 = (_DWORD *)(a1 - 4);
  v8 = (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)(a1 - 4) + 724))(a1 - 4) == 0;
  v9 = BYTE1(dword_10403940);
  if ( v8 )
    v9 = dword_10403940;
  if ( !v9 && flt_10404550 + 1.0 <= *(float *)off_103DC81C )
  {
    v10 = (const char *)sub_10034D90(a1 - 4);
    sub_10025960("*** ERROR: Bone access not allowed (entity %i:%s)\n", *(_DWORD *)(a1 + 76), v10);
    flt_10404550 = *(float *)off_103DC81C;
  }
  if ( *(_DWORD *)(a1 + 1804) == -1 )
    goto LABEL_7;
  if ( a5 == -1 )
    a5 = *(_DWORD *)(a1 + 1268);
  if ( *(_DWORD *)(dword_10403684 + 48) )
    a5 |= 0x7FF00u;
  if ( sub_1000E2D0((_BYTE *)(a1 - 4)) )
    a5 |= 0x7FF00u;
  if ( byte_10403661 )
  {
    CurrentThreadId = GetCurrentThreadId();
    if ( CurrentThreadId != *(_DWORD *)(a1 + 1292)
      && _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 1292), CurrentThreadId, 0) )
    {
LABEL_89:
      CVProfile::ExitScope(g_VProfCurrentProfile);
      return 0;
    }
    ++*(_DWORD *)(a1 + 1296);
  }
  v13 = a1 + 1292;
  v45 = a1 + 1292;
  v14 = GetCurrentThreadId();
  v15 = *(_DWORD *)(a1 + 1292);
  v46 = v14;
  if ( v14 != v15 && _InterlockedCompareExchange((volatile signed __int32 *)v13, v14, 0) )
  {
    _mm_pause();
    CThreadFastMutex::Lock(a1 + 1292, v46, 0);
  }
  else
  {
    ++*(_DWORD *)(a1 + 1296);
  }
  if ( byte_10403661 )
  {
    v8 = (*(_DWORD *)(a1 + 1296))-- == 1;
    if ( v8 )
      _InterlockedExchange((volatile __int32 *)v13, 0);
  }
  if ( *(_DWORD *)(a1 + 1260) != dword_10403664 )
  {
    if ( ((double (__thiscall *)(int))*(_DWORD *)(*v7 + 740))(a1 - 4) >= *(float *)(a1 + 1896) )
    {
      *(float *)(a1 + 1896) = a6;
      *(_DWORD *)(a1 + 1284) = 0;
      *(_DWORD *)(a1 + 1288) = 0;
    }
    *(_DWORD *)(a1 + 1268) = *(_DWORD *)(a1 + 1272);
    *(_DWORD *)(a1 + 1272) = 0;
    if ( !v7[485] && (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 36))(a1) )
      sub_10026520(a1 - 4);
    v16 = (_DWORD *)v7[485];
    if ( v16 && *v16 )
    {
      v16[33] = 0;
      v16[34] = 0;
      v16[35] = 0;
    }
  }
  if ( byte_10403660
    && !byte_10403661
    && *(int *)(a1 + 1884) >= 16
    && !sub_1000EF90((_DWORD *)(a1 - 4))
    && *(_DWORD *)(a1 + 1264) != dword_103D7BC0 )
  {
    *(_DWORD *)(a1 + 1264) = dword_103D7BC0;
    v17 = dword_104037F8;
    v18 = dword_104037F8;
    if ( dword_104037F8 + 1 > dword_104037F0 )
    {
      sub_1010AFF0(dword_104037F8 - dword_104037F0 + 1);
      v17 = dword_104037F8;
    }
    v19 = dword_104037EC;
    dword_104037F8 = v17 + 1;
    v20 = v17 - v18;
    dword_104037FC = dword_104037EC;
    if ( v20 > 0 )
    {
      memcpy((void *)(dword_104037EC + 4 * v18 + 4), (const void *)(dword_104037EC + 4 * v18), 4 * v20);
      v19 = dword_104037EC;
    }
    v21 = (_DWORD *)(v19 + 4 * v18);
    if ( v21 )
      *v21 = v7;
    v13 = v45;
  }
  v22 = *(_DWORD *)(a1 + 1284);
  *(_DWORD *)(a1 + 1272) |= a5;
  *(_DWORD *)(a1 + 1260) = dword_10403664;
  if ( (a5 & v22) != a5 )
  {
    v23 = *(void (**)(void))(*(_DWORD *)dword_1047CA8C + 100);
    v46 = dword_1047CA8C;
    v23();
    if ( !v7[485] && (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 36))(a1) )
      sub_10026520(a1 - 4);
    v24 = v7[485];
    if ( !v24 || !*(_DWORD *)v24 || !(unsigned __int8)sub_101282A0(v7[485]) )
    {
      (*(void (__thiscall **)(int))(*(_DWORD *)v46 + 104))(v46);
      v33 = (volatile __int32 *)v45;
      v8 = (*(_DWORD *)(v45 + 4))-- == 1;
      if ( v8 )
        _InterlockedExchange(v33, 0);
LABEL_7:
      CVProfile::ExitScope(g_VProfCurrentProfile);
      return 0;
    }
    v35 = (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 4))(a1);
    v25 = (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 8))(a1);
    sub_101F0B70(v25, v35, v41);
    v26 = *(_DWORD *)(a1 + 1268) | a5;
    v43 = *(_DWORD *)(a1 + 1284);
    v27 = v26 | v43;
    *(_DWORD *)(a1 + 1288) = v26 | v43;
    *(_DWORD *)(a1 + 1284) = v27;
    v47 = v26;
    v8 = (*(_BYTE *)(*(_DWORD *)v24 + 152) & 0x10) == 0;
    v44 = v27;
    if ( v8 )
    {
      nullsub_4();
      sub_1000DEB0((_DWORD *)(a1 - 4), 8);
      if ( *(_DWORD *)(a1 + 1224) )
        goto LABEL_64;
      if ( *(int *)(*(_DWORD *)v24 + 284) > 0 && (*(_BYTE *)(a1 + 82) & 2) == 0 )
      {
        v28 = sub_100DDA40(4192);
        if ( v28 )
          v29 = sub_10023FA0(v28);
        else
          v29 = 0;
        *(_DWORD *)(a1 + 1224) = v29;
      }
      if ( *(_DWORD *)(a1 + 1224) )
      {
LABEL_64:
        if ( (unsigned __int8)sub_10037760(a1 - 4) || (*(_DWORD *)(a1 + 108) & 8) != 0 )
          sub_100207E0(*(_DWORD **)(a1 + 1224));
        v37 = v44;
        v36 = *((_DWORD *)off_103DC81C + 1);
        v34 = (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 4))(a1);
        v30 = (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 8))(a1);
        sub_10024430(*(_DWORD **)(a1 + 1224), v24, v30, v34, a6, v36, v37);
      }
      if ( a1 == 4 )
        v31 = 0;
      else
        v31 = a1 + 4;
      ((void (__thiscall *)(int (__stdcall ***)(int, int), int, int, int))**off_103E22C0)(off_103E22C0, v31, v24, a2);
      (*(void (__thiscall **)(int, int, _BYTE *, _BYTE *, _DWORD, int))(*v7 + 652))(
        a1 - 4,
        v24,
        v40,
        v39,
        LODWORD(a6),
        v44);
      memset(v42, 0, sizeof(v42));
      if ( *(_DWORD *)(a1 + 1224) && !sub_10025550(a1 - 4) )
      {
        (*(void (__stdcall **)(_DWORD))(*v7 + 612))(LODWORD(a6));
        sub_10023590((int)v40, *(_DWORD *)(a1 + 1224), (int)v40, (int)v39, *(_DWORD *)(a1 + 1280), (int)v42);
        (*(void (__thiscall **)(int, _DWORD))(*v7 + 616))(a1 - 4, LODWORD(a6));
        sub_10022390(*(float **)(a1 + 1224), (int)v40, (int)v39, *(_DWORD *)(a1 + 1280), (int)v42);
      }
      (*(void (__thiscall **)(int, int, _BYTE *, _BYTE *, _BYTE *, int))(*v7 + 604))(a1 - 4, v24, v40, v39, v41, v44);
      sub_1000DEC0((_DWORD *)(a1 - 4), 8);
      (*(void (__thiscall **)(int, int))(*v7 + 632))(a1 - 4, v24);
    }
    else
    {
      sub_101ED9E0(v41, *(_DWORD *)(a1 + 1280));
    }
    if ( (v43 & 0x200) == 0 && (v47 & 0x200) != 0 )
      sub_10028360((_DWORD *)(a1 - 4), v24);
    (*(void (__thiscall **)(int))(*(_DWORD *)v46 + 104))(v46);
    v13 = v45;
  }
  if ( !a3 )
    goto LABEL_81;
  v32 = *(_DWORD *)(a1 + 1884);
  if ( a4 < v32 )
  {
    Warning("SetupBones: invalid bone array size (%d - needs %d)\n", a4, *(_DWORD *)(a1 + 1884));
    v8 = (*(_DWORD *)(v13 + 4))-- == 1;
    if ( v8 )
      _InterlockedExchange((volatile __int32 *)v13, 0);
    goto LABEL_89;
  }
  memcpy_0(a3, *(const void **)(a1 + 1872), 48 * v32);
LABEL_81:
  v8 = (*(_DWORD *)(v13 + 4))-- == 1;
  if ( v8 )
    _InterlockedExchange((volatile __int32 *)v13, 0);
  CVProfile::ExitScope(g_VProfCurrentProfile);
  return 1;
}
