int sub_10283340()
{
  int v0; // eax
  int v1; // edi
  int v2; // esi

  v0 = sub_101811E0("env_fire_trail", -1);
  v1 = v0;
  if ( v0 )
  {
    v2 = __RTDynamicCast(
           v0,
           0,
           (struct _s_RTTICompleteObjectLocator *)&CBaseEntity `RTTI Type Descriptor',
           (int)&CFireTrail `RTTI Type Descriptor',
           0);
    if ( v2 )
    {
      (*(void (__thiscall **)(int))(*(_DWORD *)v2 + 136))(v2);
      return v2;
    }
    sub_1025FAC0(v1);
  }
  return 0;
}
