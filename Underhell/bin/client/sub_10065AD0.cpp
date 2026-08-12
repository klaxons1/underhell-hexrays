int __thiscall sub_10065AD0(char *this, int a2, int *a3, Concurrency::details::SchedulerProxy *a4)
{
  const char *v5; // eax
  int result; // eax

  v5 = (const char *)sub_101E1B70(a4);
  result = _stricmp(v5, "NULL");
  if ( result )
    return sub_100407E0(a3, a2, a4, 0, this[1212]);
  return result;
}
