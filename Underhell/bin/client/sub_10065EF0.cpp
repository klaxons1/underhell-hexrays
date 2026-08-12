int __thiscall sub_10065EF0(int this, float a2, int a3, Concurrency::details::SchedulerProxy *a4)
{
  const char *v6; // eax
  int result; // eax
  int v8; // esi
  int NumExternalThreads; // eax
  char v10; // [esp+2Ch] [ebp+10h]

  v6 = (const char *)sub_101E1B70(a4);
  result = _stricmp(v6, "NULL");
  if ( result )
  {
    v8 = 0;
    NumExternalThreads = Concurrency::details::SchedulerProxy::GetNumExternalThreads(a4);
    if ( NumExternalThreads )
      v8 = sub_10065E70((_DWORD *)(this - 1192), NumExternalThreads);
    v10 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_104131DC + 36))(dword_104131DC, *(_DWORD *)(this + 16));
    sub_101E2540(a4);
    sub_1011BF50("%s : %8.2f:  finish %s\n", v10);
    result = sub_101E1B20(a4) - 2;
    switch ( result )
    {
      case 0:
        if ( v8 )
          result = (*(int (__thiscall **)(int, int, int, Concurrency::details::SchedulerProxy *))(*(_DWORD *)(this - 1192)
                                                                                                + 620))(
                     this - 1192,
                     a3,
                     v8,
                     a4);
        break;
      case 3:
        if ( *(_BYTE *)(this + 20) && v8 )
          result = (*(int (__thiscall **)(int, int, int, Concurrency::details::SchedulerProxy *))(*(_DWORD *)(this - 1192)
                                                                                                + 604))(
                     this - 1192,
                     a3,
                     v8,
                     a4);
        break;
      case 4:
        if ( v8 )
          result = (*(int (__thiscall **)(int, int, int, Concurrency::details::SchedulerProxy *))(*(_DWORD *)(this - 1192)
                                                                                                + 628))(
                     this - 1192,
                     a3,
                     v8,
                     a4);
        break;
      case 5:
        if ( v8 )
          result = (*(int (__thiscall **)(int, int, int, Concurrency::details::SchedulerProxy *))(*(_DWORD *)(this - 1192)
                                                                                                + 636))(
                     this - 1192,
                     a3,
                     v8,
                     a4);
        break;
      case 8:
        if ( v8 )
          result = (*(int (__thiscall **)(int, int, int, Concurrency::details::SchedulerProxy *))(*(_DWORD *)(this - 1192)
                                                                                                + 612))(
                     this - 1192,
                     a3,
                     v8,
                     a4);
        break;
      default:
        return result;
    }
  }
  return result;
}
