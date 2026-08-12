void __thiscall sub_10063DF0(char *this, char a2, int a3, int a4, float *a5, float *a6, int a7)
{
  char *v7; // ebx
  volatile signed __int32 *v8; // edi
  DWORD CurrentThreadId; // ecx
  bool v10; // zf
  int v11; // esi
  int v12; // esi
  int *v14; // edi
  int v15; // esi
  int *v16; // edi
  int v17; // esi
  int v18; // eax
  int v19; // ebx
  int v20; // ecx
  int v21; // eax
  int v22; // edi
  double v23; // st7
  int v24; // edx
  float *v25; // eax
  int v26; // ecx
  double v27; // st7
  int v28; // ecx
  int v29; // esi
  int v30; // edi
  _DWORD *v31; // ecx
  int v32; // edx
  int v33; // eax
  int v34; // esi
  char v35; // [esp+Ch] [ebp-410h] BYREF
  char v36; // [esp+14h] [ebp-408h] BYREF
  _DWORD v37[8]; // [esp+3E4h] [ebp-38h] BYREF
  char *v38; // [esp+404h] [ebp-18h]
  int *v39; // [esp+408h] [ebp-14h]
  char *v40; // [esp+40Ch] [ebp-10h]
  int v41; // [esp+410h] [ebp-Ch]
  int v42; // [esp+414h] [ebp-8h]
  int v43; // [esp+418h] [ebp-4h]
  char v44; // [esp+428h] [ebp+Ch]
  int *v45; // [esp+42Ch] [ebp+10h]

  v7 = this;
  v40 = this;
  CVProfile::EnterScope(g_VProfCurrentProfile, "CRopeManager::DrawRenderCache", 0, "Ropes", 0, 4);
  v8 = (volatile signed __int32 *)(v7 + 48);
  v38 = v7 + 48;
  CurrentThreadId = GetCurrentThreadId();
  if ( CurrentThreadId != *((_DWORD *)v7 + 12) && _InterlockedCompareExchange(v8, CurrentThreadId, 0) )
  {
    _mm_pause();
    CThreadFastMutex::Lock(v7 + 48, CurrentThreadId, 0);
  }
  else
  {
    ++*((_DWORD *)v7 + 13);
  }
  if ( *(_DWORD *)(dword_1040E804 + 48) )
  {
    if ( a2 && !*((_DWORD *)v7 + 41) && dword_1047C970 )
    {
      if ( sub_10229D00(32) )
        v11 = sub_10229D20("DepthWrite");
      else
        v11 = 0;
      sub_1022ACA0("$no_fullbright", 1);
      sub_1022ACA0("$alphatest", 0);
      sub_1022ACA0("$nocull", 1);
      *((_DWORD *)v7 + 41) = (*(int (__thiscall **)(int, const char *, const char *, int))(*(_DWORD *)dword_1047C970
                                                                                         + 428))(
                               dword_1047C970,
                               "__DepthWrite01",
                               "Other textures",
                               v11);
    }
    v12 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_1047C96C + 380))(dword_1047C96C);
    v43 = v12;
    if ( v12 )
      (*(void (__thiscall **)(int))(*(_DWORD *)v12 + 8))(v12);
    if ( a4 > 0 )
    {
      v14 = (int *)(a3 + 4);
      v45 = (int *)(a3 + 4);
      v41 = a4;
      do
      {
        v15 = v14[1];
        v16 = v14 + 2;
        if ( v15 )
        {
          *((_DWORD *)v7 + 6) = 0;
          if ( *((_DWORD *)v7 + 10) < v15 )
            sub_10063570((int *)v7 + 7, *((_DWORD *)v7 + 10), v15 - *((_DWORD *)v7 + 10), 0);
          if ( v15 > 0 )
          {
            v39 = v16;
            v42 = v15;
            do
            {
              v17 = *v16;
              if ( *v16 )
              {
                v18 = *((_DWORD *)v7 + 6);
                if ( v18 < *((_DWORD *)v7 + 10) )
                {
                  v20 = *((_DWORD *)v7 + 7);
                  v21 = v18 + 1;
                  *((_DWORD *)v7 + 6) = v21;
                  v19 = 3288 * v21 + v20 - 3288;
                }
                else
                {
                  Warning("CRopeManager::GetNextSegmentFromCache too many segments for cache!\n");
                  v19 = 0;
                }
                if ( a7 )
                {
                  sub_10062390((_BYTE *)v17, v17, v19, a5, a6, a7);
                  v7 = v40;
                  a7 += 32;
                }
                else
                {
                  v22 = *(_DWORD *)(v17 + 1268);
                  *(float *)&v37[3] = *(float *)(v17 + 2012);
                  *(float *)&v37[4] = *(float *)(v17 + 2016);
                  v37[2] = v22;
                  v23 = *(float *)(v17 + 2020);
                  v37[1] = v17 + 1784;
                  *(float *)&v37[5] = v23;
                  v37[0] = &v35;
                  *(float *)&v37[6] = (float)*(int *)(v17 + 1924);
                  *(float *)&v37[7] = (float)*(int *)(v17 + 1928);
                  if ( v22 )
                  {
                    v24 = 0;
                    v25 = (float *)&v36;
                    do
                    {
                      v26 = *(_DWORD *)(v17 + 1264);
                      v27 = *(float *)(v26 + v24 + 24);
                      v28 = v26 + v24 + 24;
                      *(v25 - 2) = v27;
                      v24 += 36;
                      v25 += 3;
                      --v22;
                      *(v25 - 4) = *(float *)(v28 + 4);
                      *(v25 - 3) = *(float *)(v28 + 8);
                    }
                    while ( v22 );
                  }
                  sub_10062390((_BYTE *)v17, v17, v19, a5, a6, (int)v37);
                  v7 = v40;
                }
              }
              else if ( a7 )
              {
                a7 += 32;
              }
              v16 = v39 + 1;
              v10 = v42-- == 1;
              ++v39;
            }
            while ( !v10 );
          }
          v29 = 0;
          v30 = 0;
          if ( *((int *)v7 + 6) > 0 )
          {
            v31 = (_DWORD *)*((_DWORD *)v7 + 7);
            v32 = *((_DWORD *)v7 + 6);
            do
            {
              v29 += 2 * *v31;
              v33 = 3 * *v31;
              v31 += 822;
              --v32;
              v30 = v30 + 2 * v33 - 6;
            }
            while ( v32 );
          }
          if ( a2
            || !*v45
            || !*(_DWORD *)(dword_1040E60C + 48)
            || (*(int (__thiscall **)(int))(*(_DWORD *)dword_1041315C + 188))(dword_1041315C) <= 70
            || (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)dword_1047C97C + 184))(dword_1047C97C) )
          {
            v44 = 0;
          }
          else
          {
            v44 = 1;
            sub_10061870(v7, v43, *v45, v29, v30);
          }
          if ( *(_DWORD *)(dword_1040E924 + 48) )
          {
            if ( a2 )
              sub_10061AB0((int *)v7, v43, *((_DWORD *)v7 + 41), v29, v30, v44);
            else
              sub_10061AB0((int *)v7, v43, *(v45 - 1), v29, v30, v44);
          }
        }
        v14 = v45 + 131;
        v10 = v41-- == 1;
        v45 += 131;
      }
      while ( !v10 );
      v8 = (volatile signed __int32 *)v38;
      v12 = v43;
    }
    *((_DWORD *)v7 + 6) = 0;
    *((_DWORD *)v7 + 10) = 0;
    if ( *((int *)v7 + 9) >= 0 )
    {
      if ( *((_DWORD *)v7 + 7) )
      {
        (*(void (__thiscall **)(_DWORD, _DWORD))(*g_pMemAlloc + 20))(g_pMemAlloc, *((_DWORD *)v7 + 7));
        *((_DWORD *)v7 + 7) = 0;
      }
      *((_DWORD *)v7 + 8) = 0;
    }
    *((_DWORD *)v7 + 11) = *((_DWORD *)v7 + 7);
    if ( a7 && *((_WORD *)v7 + 93) )
    {
      v34 = *((unsigned __int16 *)v7 + 90);
      sub_10063620((int *)v7 + 42, *((_WORD *)v7 + 90));
      *(_WORD *)(*((_DWORD *)v7 + 42) + 12 * v34 + 10) = *((_WORD *)v7 + 92);
      *((_WORD *)v7 + 92) = v34;
      v12 = v43;
    }
    if ( v12 )
    {
      (*(void (__thiscall **)(int))(*(_DWORD *)v12 + 12))(v12);
      (*(void (__thiscall **)(int))(*(_DWORD *)v12 + 4))(v12);
    }
    v10 = (*((_DWORD *)v8 + 1))-- == 1;
    if ( v10 )
      _InterlockedExchange(v8, 0);
  }
  else
  {
    v10 = (*((_DWORD *)v7 + 13))-- == 1;
    if ( v10 )
      _InterlockedExchange(v8, 0);
  }
  CVProfile::ExitScope(g_VProfCurrentProfile);
}
