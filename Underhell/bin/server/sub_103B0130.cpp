char __thiscall sub_103B0130(int this, int a2, int a3, int a4)
{
  if ( a2 != dword_106EADA0 )
    return sub_10038420((int *)this, a2, a3, a4);
  *(float *)(this + 3916) = *(float *)(dword_106B31C8 + 12);
  if ( a4 )
    *(_DWORD *)(this + 3920) = *(_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)a4 + 8))(a4);
  else
    *(_DWORD *)(this + 3920) = -1;
  return 1;
}
