int __thiscall sub_102250A0(int this, float a2, int a3, Concurrency::details::SchedulerProxy *a4)
{
  const char *v6; // eax
  int result; // eax
  int v8; // esi
  unsigned int NumExternalThreads; // eax
  int v10; // eax
  Concurrency::details::SchedulerProxy *v11; // [esp+2Ch] [ebp+10h]

  v6 = (const char *)sub_104183B0(a4);
  result = _stricmp(v6, "NULL");
  if ( result )
  {
    v8 = 0;
    NumExternalThreads = Concurrency::details::SchedulerProxy::GetNumExternalThreads(a4);
    if ( NumExternalThreads )
      v8 = (*(int (__thiscall **)(int, unsigned int))(*(_DWORD *)(this - 800) + 892))(this - 800, NumExternalThreads);
    v11 = *(Concurrency::details::SchedulerProxy **)(this + 4);
    if ( !v11 )
      v11 = (Concurrency::details::SchedulerProxy *)String;
    sub_10418BD0(a4);
    sub_1022F660("%s : %8.2f:  finish %s\n", (char)v11);
    result = sub_10418360(a4) - 2;
    switch ( result )
    {
      case 0:
        if ( v8 )
        {
          if ( !*(_BYTE *)(this + 86) )
            result = (*(int (__thiscall **)(int, int, int, Concurrency::details::SchedulerProxy *))(*(_DWORD *)(this - 800)
                                                                                                  + 780))(
                       this - 800,
                       a3,
                       v8,
                       a4);
        }
        break;
      case 1:
        if ( v8 && !*(_BYTE *)(this + 86) )
          result = (*(int (__thiscall **)(int, int, int, Concurrency::details::SchedulerProxy *))(*(_DWORD *)(this - 800)
                                                                                                + 804))(
                     this - 800,
                     a3,
                     v8,
                     a4);
        break;
      case 2:
        if ( v8 && !*(_BYTE *)(this + 86) )
          result = (*(int (__thiscall **)(int, int, int, Concurrency::details::SchedulerProxy *))(*(_DWORD *)(this - 800)
                                                                                                + 812))(
                     this - 800,
                     a3,
                     v8,
                     a4);
        break;
      case 3:
        if ( v8 )
          result = (*(int (__thiscall **)(int, int, int, Concurrency::details::SchedulerProxy *))(*(_DWORD *)(this - 800)
                                                                                                + 820))(
                     this - 800,
                     a3,
                     v8,
                     a4);
        break;
      case 4:
        if ( v8 )
          result = (*(int (__thiscall **)(int, int, int, Concurrency::details::SchedulerProxy *))(*(_DWORD *)(this - 800)
                                                                                                + 796))(
                     this - 800,
                     a3,
                     v8,
                     a4);
        break;
      case 5:
        if ( v8 )
          result = (*(int (__thiscall **)(int, int, int, Concurrency::details::SchedulerProxy *))(*(_DWORD *)(this - 800)
                                                                                                + 836))(
                     this - 800,
                     a3,
                     v8,
                     a4);
        break;
      case 6:
        if ( v8 && !*(_BYTE *)(this + 86) )
          result = (*(int (__thiscall **)(int, int, int, Concurrency::details::SchedulerProxy *))(*(_DWORD *)(this - 800)
                                                                                                + 828))(
                     this - 800,
                     a3,
                     v8,
                     a4);
        break;
      case 8:
        if ( v8 && !*(_BYTE *)(this + 86) )
          result = (*(int (__thiscall **)(int, int, int, Concurrency::details::SchedulerProxy *))(*(_DWORD *)(this - 800)
                                                                                                + 788))(
                     this - 800,
                     a3,
                     v8,
                     a4);
        break;
      case 9:
        if ( !*(_BYTE *)(this + 86) )
        {
          result = sub_104185B0(a4);
          if ( result )
            result = sub_1041E210(1, 0.0, 0.0);
        }
        break;
      case 11:
        if ( !*(_BYTE *)(this + 86) )
          result = (*(int (__thiscall **)(int, int, Concurrency::details::SchedulerProxy *))(*(_DWORD *)(this - 800)
                                                                                           + 848))(
                     this - 800,
                     a3,
                     a4);
        break;
      case 13:
        if ( !*(_BYTE *)(this + 86) )
          result = (*(int (__thiscall **)(int, int, int, Concurrency::details::SchedulerProxy *))(*(_DWORD *)(this - 800)
                                                                                                + 864))(
                     this - 800,
                     a3,
                     v8,
                     a4);
        break;
      case 14:
        result = sub_104183D0(a4);
        if ( !result || (v10 = sub_104183D0(a4), (result = sub_104291C0(v10, "debugtext", 9)) != 0) )
        {
          if ( v8 )
            result = (*(int (__thiscall **)(int, int, int, Concurrency::details::SchedulerProxy *))(*(_DWORD *)(this - 800)
                                                                                                  + 856))(
                       this - 800,
                       a3,
                       v8,
                       a4);
        }
        break;
      default:
        return result;
    }
  }
  return result;
}
