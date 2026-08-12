void __thiscall sub_1008A530(char *this)
{
  char *v1; // ebx
  bool v2; // zf
  int v3; // esi
  int *v4; // edi
  _DWORD *v5; // esi
  int v6; // eax
  int v7; // ebx
  int v8; // eax
  int v9; // ecx
  int v10; // eax
  int v11; // ebx
  int v12; // eax
  int v13; // ecx
  signed int v14; // eax
  _BYTE *v15; // eax
  char Buffer[64]; // [esp+2Ch] [ebp-5Ch] BYREF
  __int64 v17; // [esp+6Ch] [ebp-1Ch] BYREF
  unsigned __int64 *v18; // [esp+74h] [ebp-14h]
  unsigned __int64 v19; // [esp+78h] [ebp-10h] BYREF
  __int64 *v20; // [esp+80h] [ebp-8h]
  int v21; // [esp+84h] [ebp-4h] BYREF

  v1 = this;
  HIDWORD(v19) = this;
  CVProfile::EnterScope(
    g_VProfCurrentProfile,
    "CClientShadowMgr::InitDepthTextureShadows",
    0,
    "Flashlight Shadows",
    0,
    4);
  v20 = &v17;
  v17 = __rdtsc();
  v2 = v1[268] == 0;
  *((_DWORD *)v1 + 68) = *(_DWORD *)(dword_1042C334 + 48);
  if ( v2 )
  {
    v1[268] = 1;
    v18 = (unsigned __int64 *)(*(int (__thiscall **)(int))(*(_DWORD *)dword_1047C96C + 404))(dword_1047C96C);
    v3 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_1047C96C + 432))(dword_1047C96C);
    (*(void (__thiscall **)(int))(*(_DWORD *)dword_1047C96C + 316))(dword_1047C96C);
    sub_10233450(*((_DWORD *)v1 + 68), *((_DWORD *)v1 + 68), 0, v3, 2, 0, "_rt_ShadowDummy");
    v4 = (int *)(v1 + 276);
    sub_10087F10((int *)v1 + 69);
    v5 = v1 + 296;
    *((_DWORD *)v1 + 77) = 0;
    if ( *((int *)v1 + 76) >= 0 )
    {
      if ( *v5 )
      {
        (*(void (__thiscall **)(_DWORD, _DWORD))(*g_pMemAlloc + 20))(g_pMemAlloc, *v5);
        *v5 = 0;
      }
      *((_DWORD *)v1 + 75) = 0;
    }
    *((_DWORD *)v1 + 78) = *((_DWORD *)v1 + 74);
    v20 = 0;
    if ( *((int *)v1 + 79) > 0 )
    {
      while ( 1 )
      {
        unknown_libname_2(&v21);
        sprintf(Buffer, "_rt_ShadowDepthTexture_%d", v20);
        sub_10233450(*((_DWORD *)v1 + 68), *((_DWORD *)v1 + 68), 0, v18, 3, 0, Buffer);
        if ( !v20 )
        {
          v6 = (*(int (__thiscall **)(int))(*(_DWORD *)v21 + 12))(v21);
          *((_DWORD *)v1 + 68) = v6;
          sub_10229140(&unk_1042C330, v6);
        }
        v7 = v4[3];
        v8 = v4[1];
        if ( v7 + 1 > v8 )
          sub_1010AFF0(v7 - v8 + 1);
        ++v4[3];
        v9 = *v4;
        v10 = v4[3] - v7 - 1;
        v4[4] = *v4;
        if ( v10 > 0 )
          memcpy((void *)(v9 + 4 * v7 + 4), (const void *)(v9 + 4 * v7), 4 * v10);
        if ( *v4 + 4 * v7 )
          sub_10233240(&v21);
        v11 = v5[3];
        v12 = v5[1];
        if ( v11 + 1 > v12 )
          sub_1001A460(v5, v11 - v12 + 1);
        ++v5[3];
        v13 = *v5;
        v14 = v5[3] - v11 - 1;
        v5[4] = *v5;
        if ( v14 > 0 )
          memcpy((void *)(v11 + v13 + 1), (const void *)(v11 + v13), v14);
        v15 = (_BYTE *)(v11 + *v5);
        if ( v15 )
          *v15 = 0;
        sub_10233380(&v21);
        v20 = (__int64 *)((char *)v20 + 1);
        if ( (int)v20 >= *(_DWORD *)(HIDWORD(v19) + 316) )
          break;
        v1 = (char *)HIDWORD(v19);
      }
    }
    (*(void (__thiscall **)(int))(*(_DWORD *)dword_1047C96C + 320))(dword_1047C96C);
  }
  v18 = &v19;
  v19 = __rdtsc();
  v17 = v19 - v17;
  DevMsg("InitDepthTextureShadows took %.2f msec\n", (double)v17 * g_ClockSpeedMillisecondsMultiplier);
  CVProfile::ExitScope(g_VProfCurrentProfile);
}
