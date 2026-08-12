char *__thiscall sub_102FC1D0(int this, int a2)
{
  if ( a2 )
    *(_DWORD *)(this + 4104) = *(_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)a2 + 8))(a2);
  else
    *(_DWORD *)(this + 4104) = -1;
  return sub_10023CB0((char *)this, 77);
}
