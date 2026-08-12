char __thiscall sub_1022F000(void *this, _DWORD *a2)
{
  int v2; // esi
  int v3; // edx
  Concurrency::details::SchedulerProxy *v4; // eax
  Concurrency::details::SchedulerProxy *v5; // ebx
  unsigned int NumExternalThreads; // edi
  unsigned __int16 v7; // ax
  _DWORD *v8; // edi
  char *v9; // eax
  int v10; // ebx
  _DWORD *v11; // edi
  _DWORD *v12; // ebx
  bool v13; // cc
  int v14; // esi
  int v15; // edx
  int v16; // eax
  int v17; // ecx
  int v18; // eax
  int v19; // eax
  int v20; // esi
  char result; // al
  BOOL (__cdecl *v22)(_DWORD *, _DWORD *); // [esp+8h] [ebp-48h] BYREF
  int v23; // [esp+Ch] [ebp-44h]
  int v24; // [esp+10h] [ebp-40h]
  int v25; // [esp+14h] [ebp-3Ch]
  int v26; // [esp+18h] [ebp-38h]
  int v27; // [esp+1Ch] [ebp-34h]
  int v28; // [esp+20h] [ebp-30h]
  unsigned int v29; // [esp+24h] [ebp-2Ch] BYREF
  int v30; // [esp+2Ch] [ebp-24h] BYREF
  int v31; // [esp+30h] [ebp-20h]
  void *v32; // [esp+34h] [ebp-1Ch]
  int i; // [esp+38h] [ebp-18h]
  int v34; // [esp+3Ch] [ebp-14h]
  int v35; // [esp+40h] [ebp-10h]
  int v36; // [esp+44h] [ebp-Ch]
  _DWORD *v37; // [esp+48h] [ebp-8h] BYREF
  int j; // [esp+4Ch] [ebp-4h] BYREF

  v2 = 0;
  v32 = this;
  v3 = *(_DWORD *)(dword_106C422C + 48);
  v22 = sub_1005D140;
  v23 = 0;
  v24 = 0;
  v25 = 0;
  v26 = 0xFFFF;
  v27 = -1;
  v28 = 0;
  v36 = v3;
  v34 = 0;
  v35 = 0;
  for ( i = 0; v2 < sub_1016BFC0(a2); i = v2 )
  {
    v4 = (Concurrency::details::SchedulerProxy *)sub_1041CBF0(v2);
    v5 = v4;
    if ( v4 )
    {
      if ( (unsigned int)(sub_10418360(v4) - 6) <= 1 )
      {
        NumExternalThreads = Concurrency::details::SchedulerProxy::GetNumExternalThreads(v5);
        j = NumExternalThreads;
        if ( NumExternalThreads )
        {
          v29 = NumExternalThreads;
          v7 = sub_10228C20(&v22, (int)&v29);
          if ( v7 == 0xFFFF )
          {
            v8 = (_DWORD *)(*(int (__thiscall **)(void *, unsigned int))(*(_DWORD *)v32 + 892))(v32, NumExternalThreads);
            v37 = v8;
            sub_1022EF50((int)&v22, &j, (int *)&v37);
          }
          else
          {
            v8 = *(_DWORD **)(v23 + 16 * v7 + 12);
          }
          if ( v8 )
          {
            v9 = (char *)sub_104183D0(v5);
            v10 = sub_100BDF40((int)v8, v9);
            v31 = v10;
            if ( v10 >= 0 )
            {
              v11 = sub_10001430(v8);
              if ( v11 )
              {
                v12 = (_DWORD *)sub_10245550(v10);
                v13 = v12[17] <= 0;
                v37 = 0;
                if ( !v13 )
                {
                  do
                  {
                    v14 = v12[18];
                    for ( j = 0; j < v14; ++j )
                    {
                      v15 = (int)v37;
                      v16 = v12[17];
                      v17 = j;
                      if ( (int)v37 >= v16 )
                        v15 = v16 - 1;
                      if ( j >= v14 )
                        v17 = v14 - 1;
                      v18 = sub_102455F0(v31, *(__int16 *)((char *)v12 + 2 * v15 + 2 * v17 * v16 + v12[15]));
                      v19 = sub_102454D0(v18);
                      ++v35;
                      v20 = v19;
                      if ( v36 )
                        Msg("%s checking block %d\n", (const char *)(*v11 + 12), *(_DWORD *)(v19 + 52));
                      v30 = 0;
                      if ( sub_10245250(&v30) )
                      {
                        ++v34;
                        if ( v36 > 1 )
                          Msg("%s:%s[%i:%i] was resident\n", *v11 + 12, v20 + *(_DWORD *)(v20 + 4), v37, j);
                      }
                      else if ( v36 )
                      {
                        Msg("%s:%s[%i:%i] async load\n", *v11 + 12, v20 + *(_DWORD *)(v20 + 4), v37, j);
                      }
                      v14 = v12[18];
                    }
                    v37 = (_DWORD *)((char *)v37 + 1);
                  }
                  while ( (int)v37 < v12[17] );
                  v2 = i;
                }
              }
            }
          }
        }
      }
    }
    ++v2;
  }
  if ( v36 && v35 > 0 )
  {
    Msg("%d of %d animations resident\n", v34, v35);
    return sub_1022CD20((int)&v22);
  }
  else
  {
    result = sub_102291D0((int)&v22);
    if ( v25 >= 0 )
    {
      result = v23;
      if ( v23 )
      {
        (*(void (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, v23);
        return 0;
      }
    }
  }
  return result;
}
