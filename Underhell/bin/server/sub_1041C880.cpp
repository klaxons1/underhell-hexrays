char __cdecl sub_1041C880(int a1, int a2)
{
  float *v2; // esi
  float *v3; // edi
  unsigned int NumExternalThreads; // ebx
  unsigned int v6; // eax
  int v7; // ebx
  int v8; // eax
  int v9; // ebp
  int v10; // esi
  const char *v11; // esi
  int v12; // kr00_4
  const char *v13; // esi
  int v14; // kr04_4
  float v15; // [esp+Ch] [ebp+4h]
  float v16; // [esp+Ch] [ebp+4h]
  float v17; // [esp+Ch] [ebp+4h]
  float v18; // [esp+Ch] [ebp+4h]

  v2 = *(float **)(a2 + 4);
  v3 = *(float **)(a1 + 4);
  v15 = sub_10418510(v3);
  if ( sub_10418510(v2) > v15 )
    return 1;
  v16 = sub_10418510(v3);
  if ( sub_10418510(v2) < v16 )
    return 0;
  if ( !sub_10418530(v3) || !sub_10418530(v2) )
    goto LABEL_9;
  v17 = sub_10418520(v3);
  if ( sub_10418520(v2) < v17 )
    return 1;
  v18 = sub_10418520(v3);
  if ( sub_10418520(v2) > v18 )
    return 0;
LABEL_9:
  NumExternalThreads = Concurrency::details::SchedulerProxy::GetNumExternalThreads((Concurrency::details::SchedulerProxy *)v3);
  v6 = Concurrency::details::SchedulerProxy::GetNumExternalThreads((Concurrency::details::SchedulerProxy *)v2);
  if ( NumExternalThreads && v6 && NumExternalThreads == v6 )
  {
    v7 = Concurrency::details::SchedulingRing::Id((Concurrency::details::SchedulingRing *)v3);
    v8 = Concurrency::details::SchedulingRing::Id((Concurrency::details::SchedulingRing *)v2);
    v9 = v8;
    if ( v7 && v8 && v7 == v8 )
    {
      v10 = sub_1041EF20(v7);
      return v10 < sub_1041EF20(v9);
    }
    else
    {
      v11 = (const char *)sub_104183B0((char *)v2);
      v12 = strcmp((const char *)sub_104183B0((char *)v3), v11);
      return v12 && -(v12 < 0) - ((v12 < 0) - 1) == -1;
    }
  }
  else
  {
    v13 = (const char *)sub_104183B0((char *)v2);
    v14 = strcmp((const char *)sub_104183B0((char *)v3), v13);
    return v14 && -(v14 < 0) - ((v14 < 0) - 1) == -1;
  }
}
