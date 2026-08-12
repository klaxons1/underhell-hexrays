int __thiscall sub_10067600(int this, float a2, int a3, Concurrency::details::SchedulerProxy *a4)
{
  const char *v6; // eax
  char v7; // di
  int result; // eax
  int v9; // edi
  int NumExternalThreads; // eax
  const char *v11; // eax
  int v12; // eax
  char v13; // [esp+2Ch] [ebp+10h]

  v6 = (const char *)sub_101E1B70(a4);
  if ( !_stricmp(v6, "NULL") )
  {
    v7 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_104131DC + 36))(dword_104131DC, *(_DWORD *)(this + 16));
    sub_101E2540(a4);
    return sub_1011BF50("%s : %8.2f:  ignored %s\n", v7);
  }
  else
  {
    v9 = 0;
    NumExternalThreads = Concurrency::details::SchedulerProxy::GetNumExternalThreads(a4);
    if ( !NumExternalThreads || (v9 = sub_10065E70((_DWORD *)(this - 1192), NumExternalThreads)) != 0 )
    {
      v13 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_104131DC + 36))(
              dword_104131DC,
              *(_DWORD *)(this + 16));
      sub_101E2540(a4);
      sub_1011BF50("%s : %8.2f:  start %s\n", v13);
      result = sub_101E1B20(a4) - 2;
      switch ( result )
      {
        case 0:
          if ( v9 )
            result = (*(int (__thiscall **)(int, int, int, Concurrency::details::SchedulerProxy *))(*(_DWORD *)(this - 1192)
                                                                                                  + 616))(
                       this - 1192,
                       a3,
                       v9,
                       a4);
          break;
        case 3:
          goto LABEL_16;
        case 4:
          if ( v9 )
            result = (*(int (__thiscall **)(int, int, int, Concurrency::details::SchedulerProxy *))(*(_DWORD *)(this - 1192)
                                                                                                  + 624))(
                       this - 1192,
                       a3,
                       v9,
                       a4);
          break;
        case 5:
          if ( v9 )
            result = (*(int (__thiscall **)(int, int, int, Concurrency::details::SchedulerProxy *))(*(_DWORD *)(this - 1192)
                                                                                                  + 632))(
                       this - 1192,
                       a3,
                       v9,
                       a4);
          break;
        case 8:
          if ( v9 )
            result = (*(int (__thiscall **)(int, int, int, Concurrency::details::SchedulerProxy *))(*(_DWORD *)(this - 1192)
                                                                                                  + 608))(
                       this - 1192,
                       a3,
                       v9,
                       a4);
          break;
        case 10:
          result = sub_10065CD0((float *)(this - 1192), a3, (int)a4);
LABEL_16:
          if ( *(_BYTE *)(this + 20) && v9 )
          {
            if ( !sub_101E1C10(a4) || (v11 = (const char *)sub_101E1C10(a4), (v12 = atoi(v11)) == 0) )
              v12 = 80;
            result = (*(int (__thiscall **)(int, int, int, Concurrency::details::SchedulerProxy *, int))(*(_DWORD *)(this - 1192) + 600))(
                       this - 1192,
                       a3,
                       v9,
                       a4,
                       v12);
          }
          break;
        default:
          return result;
      }
    }
    else
    {
      return sub_10067420((int *)(this - 1192), a2, a3, (int)a4);
    }
  }
  return result;
}
