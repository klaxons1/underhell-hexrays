int __cdecl sub_101B0940(char *String2)
{
  char *v1; // eax
  _DWORD *v2; // eax
  int v3; // eax

  v1 = String2;
  if ( !String2 )
    v1 = (char *)String;
  v2 = sub_1012BF20(&dword_1069E3E0, 0, v1, 0, 0, 0, 0);
  if ( v2
    && (v3 = __RTDynamicCast(
               (int)v2,
               0,
               (struct _s_RTTICompleteObjectLocator *)&CBaseEntity `RTTI Type Descriptor',
               (int)&CPhysConstraintSystem `RTTI Type Descriptor',
               0)) != 0 )
  {
    return *(_DWORD *)(v3 + 800);
  }
  else
  {
    return 0;
  }
}
