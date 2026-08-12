int __thiscall sub_1008B860(unsigned __int16 *this, int a2)
{
  int result; // eax
  const char *v4; // esi
  int i; // ebx
  int v6; // ebx
  void *v7; // eax
  int v8; // esi
  void *v9; // ecx
  int j; // esi
  int v11; // ecx
  _DWORD *v12; // esi
  bool v13; // sf
  int k; // esi
  _DWORD *m; // eax
  int v16; // esi
  int v17; // eax
  int v18; // ebx
  unsigned __int16 *v19; // ecx
  __int64 v20; // [esp+20h] [ebp-30h] BYREF
  __int64 v21; // [esp+28h] [ebp-28h] BYREF
  const char *v22; // [esp+30h] [ebp-20h]
  unsigned __int64 v23; // [esp+34h] [ebp-1Ch] BYREF
  unsigned __int64 v24; // [esp+3Ch] [ebp-14h] BYREF
  unsigned __int64 v25; // [esp+44h] [ebp-Ch] BYREF
  int v26; // [esp+4Ch] [ebp-4h]

  result = *(_DWORD *)(a2 + 8);
  HIDWORD(v25) = *(_DWORD *)(a2 + 4);
  v26 = result;
  if ( HIDWORD(v25) )
  {
    v4 = (const char *)sub_101811E0("ai_network_build_helper", -1);
    v22 = v4;
    v21 = 0;
    *((_DWORD *)this + 8) = sub_10073900(v4);
    DevMsg("Building AI node graph...\n");
    HIDWORD(v24) = &v20;
    v20 = __rdtsc();
    DevMsg("Initializing node positions...\n");
    HIDWORD(v24) = &v21;
    v21 = __rdtsc();
    for ( i = 0; i < SHIDWORD(v25); ++i )
    {
      sub_100889E0(this, (int *)a2, *(_DWORD *)(v26 + 4 * i));
      if ( v4 )
        (*(void (__thiscall **)(const char *, int, _DWORD))(*(_DWORD *)v4 + 720))(v4, a2, *(_DWORD *)(v26 + 4 * i));
    }
    v6 = *(_DWORD *)(a2 + 4);
    HIDWORD(v24) = &v23;
    v23 = __rdtsc();
    v21 = v23 - v21;
    DevMsg("...done initializing node positions. %f seconds\n", (double)v21 * g_ClockSpeedSecondsMultiplier);
    DevMsg("Initializing node neighbors...\n");
    HIDWORD(v24) = &v21;
    v21 = __rdtsc();
    HIDWORD(v23) = this + 10;
    sub_10052D00(this + 10, v6, 0);
    v7 = (void *)*((_DWORD *)this + 7);
    if ( v7 )
      memset(v7, 0, 4 * this[11]);
    sub_1008A2E0(this);
    sub_1008A340((int *)this, *((_DWORD *)this + 3), v6, 0);
    if ( v6 > 0 )
    {
      v8 = 0;
      HIDWORD(v25) = v6;
      do
      {
        sub_10052D00((unsigned __int16 *)(v8 + *(_DWORD *)this), v6, 0);
        v9 = *(void **)(*(_DWORD *)this + v8 + 8);
        if ( v9 )
          memset(v9, 0, 4 * *(unsigned __int16 *)(*(_DWORD *)this + v8 + 2));
        v8 += 12;
        --HIDWORD(v25);
      }
      while ( HIDWORD(v25) );
    }
    for ( j = 0; j < v6; ++j )
      sub_10088E20(this, a2, *(_DWORD *)(v26 + 4 * j));
    HIDWORD(v24) = &v25;
    v25 = __rdtsc();
    v21 = v25 - v21;
    DevMsg("...done initializing node neighbors. %f seconds\n", (double)v21 * g_ClockSpeedSecondsMultiplier);
    DevMsg("Forcing dynamic link neighbors...\n");
    HIDWORD(v24) = &v21;
    v21 = __rdtsc();
    sub_10086C20(this);
    HIDWORD(v24) = &v25;
    v25 = __rdtsc();
    v21 = v25 - v21;
    DevMsg("...done forcing dynamic link neighbors. %f seconds\n", (double)v21 * g_ClockSpeedSecondsMultiplier);
    DevMsg("Determining links...\n");
    HIDWORD(v24) = &v21;
    v21 = __rdtsc();
    v11 = 0;
    for ( HIDWORD(v25) = 0; v11 < v6; HIDWORD(v25) = v11 )
    {
      v12 = *(_DWORD **)(v26 + 4 * v11);
      v13 = (int)v12[20] < 0;
      v12[21] = 0;
      if ( !v13 )
      {
        if ( v12[18] )
        {
          (*(void (__thiscall **)(_DWORD, _DWORD))(*g_pMemAlloc + 20))(g_pMemAlloc, v12[18]);
          v11 = HIDWORD(v25);
          v12[18] = 0;
        }
        v12[19] = 0;
      }
      ++v11;
      v12[22] = v12[18];
    }
    for ( k = 0; k < v6; ++k )
      sub_10087500((int *)this, a2, *(int **)(v26 + 4 * k));
    HIDWORD(v24) = &v25;
    v25 = __rdtsc();
    v21 = v25 - v21;
    DevMsg("...done determining links. %f seconds\n", (double)v21 * g_ClockSpeedSecondsMultiplier);
    DevMsg("Determining zones...\n");
    HIDWORD(v24) = &v21;
    v21 = __rdtsc();
    sub_10086B50(a2);
    v21 = __rdtsc() - v21;
    a2 = (int)&v24;
    v24 = __rdtsc();
    v20 = v24 - v20;
    DevMsg("...done determining zones. %f seconds\n", (double)v21 * g_ClockSpeedSecondsMultiplier);
    DevMsg("...done building AI node graph, %f seconds\n", (double)v20 * g_ClockSpeedSecondsMultiplier);
    for ( m = (_DWORD *)sub_100709F0(&a2); m; m = (_DWORD *)sub_10070A20(&a2) )
      sub_100700E0(m);
    v16 = *((_DWORD *)this + 3) - 1;
    if ( v16 >= 0 )
    {
      v17 = 12 * v16;
      a2 = 12 * v16;
      do
      {
        v18 = v17 + *(_DWORD *)this;
        if ( *(_WORD *)(v18 + 2) > 1u )
        {
          (*(void (__thiscall **)(_DWORD, _DWORD))(*g_pMemAlloc + 20))(g_pMemAlloc, *(_DWORD *)(v18 + 8));
          v17 = a2;
        }
        v17 -= 12;
        --v16;
        *(_DWORD *)(v18 + 8) = 0;
        a2 = v17;
      }
      while ( v16 >= 0 );
    }
    v19 = (unsigned __int16 *)HIDWORD(v23);
    *((_DWORD *)this + 3) = 0;
    sub_10052D00(v19, 0, 0);
    sub_100739B0();
    result = (int)v22;
    if ( v22 )
      return sub_1025FAC0(v22);
  }
  return result;
}
