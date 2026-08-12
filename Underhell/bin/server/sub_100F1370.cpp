int __thiscall sub_100F1370(int *this, float a2, Concurrency::details::SchedulerProxy *a3, int a4)
{
  unsigned __int8 (__thiscall *v7)(int *, float *, _DWORD, Concurrency::details::SchedulerProxy *, Concurrency::details::SchedulerProxy *, int); // edx
  char v8; // [esp+0h] [ebp-50h]
  float v9[17]; // [esp+Ch] [ebp-44h] BYREF
  Concurrency::details::SchedulerProxy *NumExternalThreads; // [esp+5Ch] [ebp+Ch]

  if ( a2 == 0.0 || !a3 )
    return Msg("CBaseFlex::AddSceneEvent:  scene or event was NULL!!!\n");
  NumExternalThreads = (Concurrency::details::SchedulerProxy *)Concurrency::details::SchedulerProxy::GetNumExternalThreads(a3);
  if ( !NumExternalThreads )
    return Msg("CBaseFlex::AddSceneEvent:  event->GetActor() was NULL!!!\n");
  sub_100ED450(v9);
  memset(v9, 0, sizeof(v9));
  v9[1] = a2;
  LODWORD(v9[0]) = a3;
  if ( a4 )
    v9[9] = *(float *)(*(int (__thiscall **)(int))(*(_DWORD *)a4 + 8))(a4);
  else
    v9[9] = NAN;
  v7 = *(unsigned __int8 (__thiscall **)(int *, float *, _DWORD, Concurrency::details::SchedulerProxy *, Concurrency::details::SchedulerProxy *, int))(*this + 840);
  LOBYTE(v9[3]) = 0;
  if ( v7(this, v9, LODWORD(a2), a3, NumExternalThreads, a4) )
    return sub_100EF650(this + 385, this[388], (int)v9);
  else
    return sub_1022F660("CBaseFlex::AddSceneEvent:  event failed\n", v8);
}
