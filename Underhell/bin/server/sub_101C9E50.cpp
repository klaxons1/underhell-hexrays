void __thiscall sub_101C9E50(int this, int a2, int a3, float a4)
{
  if ( a2 )
    *(_DWORD *)(this + 800) = *(_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)a2 + 8))(a2);
  else
    *(_DWORD *)(this + 800) = -1;
  if ( a3 )
    *(_DWORD *)(this + 804) = *(_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)a3 + 8))(a3);
  else
    *(_DWORD *)(this + 804) = -1;
  *(float *)(this + 808) = a4;
}
