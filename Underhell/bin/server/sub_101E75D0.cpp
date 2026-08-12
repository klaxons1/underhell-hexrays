int __thiscall sub_101E75D0(unsigned int *this, int a2)
{
  char **v3; // ecx
  char *v4; // eax
  _DWORD *v5; // eax
  int result; // eax

  v3 = (char **)(a2 + 8);
  if ( *(_DWORD *)(a2 + 24) == 2 )
  {
    v4 = *v3;
    if ( !*v3 )
      v4 = (char *)String;
  }
  else
  {
    v4 = (char *)sub_1010D460((int)v3);
  }
  v5 = sub_1012BF20(&dword_1069E3E0, 0, v4, 0, 0, 0, 0);
  result = __RTDynamicCast(
             (int)v5,
             0,
             (struct _s_RTTICompleteObjectLocator *)&CBaseEntity `RTTI Type Descriptor',
             (int)&CFogController `RTTI Type Descriptor',
             0);
  if ( result )
    return sub_101E6360(this + 609, result);
  return result;
}
