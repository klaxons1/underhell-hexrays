void __thiscall sub_10051C00(int this, int a2)
{
  if ( a2 )
    *(_DWORD *)(this + 232) = *(_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)a2 + 8))(a2);
  else
    *(_DWORD *)(this + 232) = -1;
  *(float *)(this + 80) = 0.0;
}
