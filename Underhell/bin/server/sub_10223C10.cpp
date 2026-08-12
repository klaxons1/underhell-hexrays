char __thiscall sub_10223C10(_DWORD *this, float a2, int a3, Concurrency::details::SchedulerProxy *a4)
{
  void *NumExternalThreads; // esi
  _DWORD *v6; // eax
  const char *v7; // edi
  const char *v8; // eax

  if ( sub_10418360(a4) == 11 )
    return 1;
  NumExternalThreads = (void *)Concurrency::details::SchedulerProxy::GetNumExternalThreads(a4);
  if ( !NumExternalThreads )
    return 1;
  v6 = (_DWORD *)(*(int (__thiscall **)(_DWORD *, void *))(*(this - 200) + 892))(this - 200, NumExternalThreads);
  if ( !v6 )
  {
    v7 = (const char *)*(this - 135);
    if ( !v7 )
      v7 = String;
    v8 = (const char *)sub_10018D60(NumExternalThreads);
    Warning("CSceneEntity %s unable to find actor \"%s\"\n", v7, v8);
    return 1;
  }
  return sub_100EDE50(v6, a2, a3, (int)a4);
}
