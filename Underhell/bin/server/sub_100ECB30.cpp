char __thiscall sub_100ECB30(void *this, int a2, float a3, int a4, Concurrency::details::SchedulerProxy *a5)
{
  int v6; // eax
  _DWORD *v7; // esi
  int *v8; // eax
  int v9; // eax
  double v10; // st7
  double v11; // st7
  void *NumExternalThreads; // eax
  double v14; // st7
  const char *v15; // eax
  double v16; // [esp+0h] [ebp-14h]
  const char *v17; // [esp+8h] [ebp-Ch]
  float v18; // [esp+28h] [ebp+14h]

  if ( sub_10418360(a5) == 4 )
  {
    v6 = sub_100D7680((int)this);
    v7 = (_DWORD *)v6;
    if ( v6 )
    {
      if ( sub_1007E040(*(_DWORD **)(v6 + 2588)) )
      {
        v8 = (int *)sub_10043EC0(v7);
        if ( v8 )
        {
          v9 = *v8;
          if ( v9 == 121 || v9 == 129 )
          {
            v10 = sub_10418520(a5) - a3;
            v18 = v10;
            if ( v10 >= 0.0 )
            {
              v11 = ((double (__thiscall *)(_DWORD *))*(_DWORD *)(*v7 + 1688))(v7);
              if ( v11 > 0.0 && v11 <= v18 )
                return 1;
            }
          }
        }
        return 0;
      }
      if ( !*(_BYTE *)(a2 + 41) )
      {
        if ( !*(_BYTE *)(a2 + 12) || sub_100697A0(v7, 62, 1) )
          return 0;
        NumExternalThreads = (void *)Concurrency::details::SchedulerProxy::GetNumExternalThreads(a5);
        v17 = (const char *)sub_10018D60(NumExternalThreads);
        v14 = sub_1041CA40(a4);
        v16 = v14;
        v15 = (const char *)sub_1041CAF0(a4, LODWORD(v14));
        Warning(
          "%s : %8.2f: waiting for actor %s to complete MOVETO but actor not in SCHED_SCENE_GENERIC\n",
          v15,
          v16,
          v17);
      }
    }
  }
  return 1;
}
