int __thiscall sub_1002FCD0(_DWORD *this, int a2)
{
  char **v2; // eax
  char *v4; // eax
  int v5; // eax
  int result; // eax

  v2 = (char **)(a2 + 8);
  if ( *(_DWORD *)(a2 + 24) != 2 )
  {
    a2 = 0;
    v2 = (char **)&a2;
  }
  v4 = *v2;
  if ( !v4 )
    v4 = (char *)String;
  v5 = sub_1012BF20(0, v4, 0, 0, 0, 0);
  result = __RTDynamicCast(
             v5,
             0,
             (struct _s_RTTICompleteObjectLocator *)&CBaseEntity `RTTI Type Descriptor',
             (int)&CBaseFilter `RTTI Type Descriptor',
             0);
  if ( result )
  {
    result = (*(int (__thiscall **)(int))(*(_DWORD *)result + 8))(result);
    this[733] = *(_DWORD *)result;
  }
  else
  {
    this[733] = -1;
  }
  return result;
}
