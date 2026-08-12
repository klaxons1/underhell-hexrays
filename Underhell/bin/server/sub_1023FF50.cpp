int __thiscall sub_1023FF50(_DWORD *this)
{
  char *v2; // eax
  _DWORD *v3; // eax
  int v4; // eax

  v2 = (char *)this[274];
  if ( !v2 )
    v2 = (char *)String;
  v3 = sub_1012BF20(&dword_1069E3E0, 0, v2, 0, 0, 0, 0);
  v4 = __RTDynamicCast(
         (int)v3,
         0,
         (struct _s_RTTICompleteObjectLocator *)&CBaseEntity `RTTI Type Descriptor',
         (int)&CEnvSoundscapeTriggerable `RTTI Type Descriptor',
         0);
  if ( v4 )
    this[273] = *(_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)v4 + 8))(v4);
  else
    this[273] = -1;
  return sub_10255CE0(this);
}
