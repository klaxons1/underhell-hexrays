int __usercall sub_10073900@<eax>(const char *a1@<esi>)
{
  int v1; // eax
  int v2; // esi

  if ( !dword_1069307C )
  {
    v1 = sub_101811E0("aitesthull", -1);
    v2 = __RTDynamicCast(
           v1,
           0,
           (struct _s_RTTICompleteObjectLocator *)&CBaseEntity `RTTI Type Descriptor',
           (int)&CAI_TestHull `RTTI Type Descriptor',
           0);
    if ( !v2 )
      Warning("classname %s used to create wrong class type\n", a1);
    dword_1069307C = v2;
    (*(void (__thiscall **)(int))(*(_DWORD *)v2 + 96))(v2);
    sub_100EA940(0x2000);
  }
  if ( *(_BYTE *)(dword_1069307C + 3620) == 1 )
    DevMsg("WARNING: TestHull used and never returned!\n");
  sub_101129A0(*(_WORD *)(dword_1069307C + 356) & 0xFFFB);
  *(_BYTE *)(dword_1069307C + 3620) = 1;
  return dword_1069307C;
}
