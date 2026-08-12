int __cdecl sub_10257F10(int *a1)
{
  int result; // eax
  int i; // esi
  char *v3; // eax
  unsigned int v4; // ebx
  int *v5; // ecx

  result = sub_1012BC10(&dword_1069E3E0, 0);
  for ( i = result; result; i = result )
  {
    if ( (__RTDynamicCast(
            i,
            0,
            (struct _s_RTTICompleteObjectLocator *)&CBaseEntity `RTTI Type Descriptor',
            (int)&CBaseTrigger `RTTI Type Descriptor',
            0)
       || __RTDynamicCast(
            i,
            0,
            (struct _s_RTTICompleteObjectLocator *)&CBaseEntity `RTTI Type Descriptor',
            (int)&CTriggerVPhysicsMotion `RTTI Type Descriptor',
            0)
       || __RTDynamicCast(
            i,
            0,
            (struct _s_RTTICompleteObjectLocator *)&CBaseEntity `RTTI Type Descriptor',
            (int)&CTriggerVolume `RTTI Type Descriptor',
            0))
      && (*a1 <= 1
       || (v3 = (char *)sub_100634F0(a1, 1)) == 0
       || !*v3
       || *(char **)(i + 92) == v3
       || sub_100D6240((_DWORD *)i, v3)) )
    {
      if ( (*(_DWORD *)(i + 192) & 0x20) != 0 )
      {
        v4 = *(_DWORD *)(i + 192) & 0xFFFFFFDF;
        if ( *(_DWORD *)(i + 192) != v4 )
        {
          if ( *(_BYTE *)(i + 84) )
          {
            *(_BYTE *)(i + 88) |= 1u;
          }
          else
          {
            v5 = *(int **)(i + 24);
            if ( v5 )
              sub_100194B0(v5, 192);
          }
          *(_DWORD *)(i + 192) = v4;
        }
        if ( *(_DWORD *)(i + 24) )
          **(_DWORD **)(i + 24) |= 0x80u;
        sub_100D8500((_DWORD *)i);
      }
      else
      {
        sub_100EAB80((_DWORD *)i, 32);
      }
    }
    result = sub_1012BC10(&dword_1069E3E0, i);
  }
  return result;
}
