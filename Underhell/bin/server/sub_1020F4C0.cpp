char __thiscall sub_1020F4C0(int *this, int a2)
{
  int v2; // edx

  if ( *(_DWORD *)(a2 + 24) == 5 )
    v2 = *(_DWORD *)(a2 + 8);
  else
    v2 = 0;
  return sub_1020D450(this, this[55] - v2, *(int (__thiscall ****)(_DWORD))a2);
}
