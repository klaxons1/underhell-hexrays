int __stdcall sub_10223670(float a1, int *a2, Concurrency::details::SchedulerProxy *a3)
{
  const char *v3; // eax
  int result; // eax

  v3 = (const char *)sub_104183B0(a3);
  result = _stricmp(v3, "NULL");
  if ( result )
    return sub_100F1370(a2, a1, a3, 0);
  return result;
}
