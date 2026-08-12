int __thiscall sub_102236F0(int *this, float a2, int *a3, Concurrency::details::SchedulerProxy *a4)
{
  int v5; // edi
  int v6; // eax
  int v7; // eax

  v5 = *this;
  v6 = sub_10418450(a4);
  v7 = (*(int (__thiscall **)(int *, int, _DWORD, _DWORD, _DWORD))(v5 + 900))(this, v6, 0, 0, 0);
  return sub_100F1370(a3, a2, a4, v7);
}
