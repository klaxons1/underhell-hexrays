void __thiscall sub_10266B20(int this, int a2, int a3)
{
  if ( a2 )
    *(_DWORD *)(this + 356) = *(_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)a2 + 8))(a2);
  else
    *(_DWORD *)(this + 356) = -1;
  *(float *)(this + 360) = *(float *)(dword_106B31C8 + 12);
}
