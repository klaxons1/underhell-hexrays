char __thiscall sub_1001A0E0(_DWORD *this, int a2, float a3, int a4, Concurrency::details::SchedulerProxy *a5)
{
  double v7; // st7
  int v8; // eax
  float v9; // [esp+24h] [ebp+Ch]
  float v10; // [esp+2Ch] [ebp+14h]

  if ( sub_10418360(a5) != 16 || (unsigned int)(*(_DWORD *)(a2 + 56) - 2) > 1 )
    return sub_100ECB30(a2, a3, a4, a5);
  if ( *(_DWORD *)(a2 + 16) == -1 )
    return 1;
  v7 = sub_10418520(a5) - a3;
  if ( v7 < 0.0 )
    return 1;
  v8 = sub_100C4F80(*(_DWORD *)(a2 + 16));
  sub_10019B30(this, v8);
  v9 = v7;
  v10 = v7;
  return (1.0 - sub_100C4EB0(*(_DWORD *)(a2 + 16))) * v9 <= v10;
}
