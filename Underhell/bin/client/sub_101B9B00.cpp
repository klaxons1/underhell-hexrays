int __stdcall sub_101B9B00(int a1)
{
  int v1; // eax
  int v2; // eax
  int v3; // eax

  v1 = sub_10036480(a1);
  v2 = __RTDynamicCast(
         v1,
         0,
         (struct _s_RTTICompleteObjectLocator *)&C_BaseEntity `RTTI Type Descriptor',
         (int)&C_BaseViewModel `RTTI Type Descriptor',
         0);
  if ( v2 && (v3 = (*(int (__thiscall **)(int))(*(_DWORD *)v2 + 776))(v2)) != 0 )
    return (*(int (__thiscall **)(int))(*(_DWORD *)(v3 + 8) + 36))(v3 + 8);
  else
    return -1;
}
