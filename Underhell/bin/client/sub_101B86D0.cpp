void __thiscall sub_101B86D0(_DWORD *this, int a2)
{
  if ( a2 )
    this[13] = *(_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)a2 + 8))(a2);
  else
    this[13] = -1;
}
