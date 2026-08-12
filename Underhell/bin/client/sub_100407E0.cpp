int __thiscall sub_100407E0(int *this, int a2, Concurrency::details::SchedulerProxy *a3, int a4, char a5)
{
  unsigned __int8 (__thiscall *v8)(int *, float *, int, Concurrency::details::SchedulerProxy *, Concurrency::details::SchedulerProxy *, int); // eax
  char v9; // [esp+0h] [ebp-50h]
  float v10[17]; // [esp+Ch] [ebp-44h] BYREF
  Concurrency::details::SchedulerProxy *NumExternalThreads; // [esp+5Ch] [ebp+Ch]

  if ( !a2 || !a3 )
    return Msg("C_BaseFlex::AddSceneEvent:  scene or event was NULL!!!\n");
  NumExternalThreads = (Concurrency::details::SchedulerProxy *)Concurrency::details::SchedulerProxy::GetNumExternalThreads(a3);
  if ( !NumExternalThreads )
    return Msg("C_BaseFlex::AddSceneEvent:  event->GetActor() was NULL!!!\n");
  sub_1003EE00(v10);
  memset(v10, 0, sizeof(v10));
  LODWORD(v10[1]) = a2;
  LODWORD(v10[0]) = a3;
  if ( a4 )
    v10[9] = *(float *)(*(int (__thiscall **)(int))(*(_DWORD *)a4 + 8))(a4);
  else
    v10[9] = NAN;
  v8 = *(unsigned __int8 (__thiscall **)(int *, float *, int, Concurrency::details::SchedulerProxy *, Concurrency::details::SchedulerProxy *, int))(*this + 756);
  LOBYTE(v10[16]) = a5;
  LOBYTE(v10[3]) = 0;
  if ( v8(this, v10, a2, a3, NumExternalThreads, a4) )
    return sub_1003FE30(this + 638, this[641], (int)v10);
  else
    return sub_101E6050(a2, "C_BaseFlex::AddSceneEvent:  event failed\n", v9);
}
