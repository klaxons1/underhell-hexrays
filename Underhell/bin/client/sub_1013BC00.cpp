int __usercall sub_1013BC00@<eax>(const char *a1@<esi>, int a2)
{
  int v2; // eax
  int result; // eax
  int v4; // esi

  if ( dword_1043A260 )
  {
    (**(void (__thiscall ***)(int, int))dword_1043A260)(dword_1043A260, 1);
    dword_1043A260 = 0;
  }
  if ( *(int *)a2 > 1 )
    atoi(*(const char **)(a2 + 1036));
  v2 = sub_10034E30("viewangleanim");
  result = __RTDynamicCast(
             v2,
             0,
             (struct _s_RTTICompleteObjectLocator *)&C_BaseEntity `RTTI Type Descriptor',
             (int)&CViewAngleAnimation `RTTI Type Descriptor',
             0);
  v4 = result;
  if ( !result )
    result = Warning("classname %s used to create wrong class type\n", a1);
  dword_1043A260 = v4;
  if ( v4 )
    return (*(int (__thiscall **)(int))(*(_DWORD *)v4 + 120))(v4);
  return result;
}
