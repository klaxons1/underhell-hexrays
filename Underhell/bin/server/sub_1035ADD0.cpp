void __thiscall sub_1035ADD0(_DWORD *this)
{
  unsigned int v2; // eax
  int v3; // ecx
  int v4; // eax
  unsigned int v5; // eax
  const char *v6; // eax
  const char *v7; // ecx

  sub_101A8A30(this);
  v2 = this[908];
  if ( v2 == -1 || off_1061BE18[4 * (this[908] & 0xFFF) + 2] != v2 >> 12 )
    v3 = 0;
  else
    v3 = off_1061BE18[4 * (this[908] & 0xFFF) + 1];
  v4 = __RTDynamicCast(
         v3,
         0,
         (struct _s_RTTICompleteObjectLocator *)&CBaseEntity `RTTI Type Descriptor',
         (int)&CPropCrane `RTTI Type Descriptor',
         0);
  if ( v4 )
    this[939] = *(_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)v4 + 8))(v4);
  else
    this[939] = -1;
  v5 = this[939];
  if ( v5 == -1 || off_1061BE18[4 * (this[939] & 0xFFF) + 2] != v5 >> 12 || !off_1061BE18[4 * (this[939] & 0xFFF) + 1] )
  {
    v6 = (const char *)this[906];
    if ( !v6 )
      v6 = String;
    v7 = (const char *)this[65];
    if ( !v7 )
      v7 = String;
    Warning("npc_cranedriver %s couldn't find his crane named %s.\n", v7, v6);
    sub_1025FAC0((int)this);
  }
}
