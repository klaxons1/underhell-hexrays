void __thiscall sub_101CAAD0(int this, int a2, int a3, char a4, float a5)
{
  if ( a2 )
    *(_DWORD *)(this + 808) = *(_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)a2 + 8))(a2);
  else
    *(_DWORD *)(this + 808) = -1;
  if ( a3 )
    *(_DWORD *)(this + 812) = *(_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)a3 + 8))(a3);
  else
    *(_DWORD *)(this + 812) = -1;
  *(float *)(this + 820) = a5;
  *(_DWORD *)(this + 816) = 0;
  *(_BYTE *)(this + 828) = a4;
}
