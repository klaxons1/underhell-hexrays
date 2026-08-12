bool __stdcall sub_10257050(int a1)
{
  if ( a1 )
    a1 = *(_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)a1 + 8))(a1);
  else
    a1 = -1;
  return sub_10319100(&a1) != -1;
}
