char *__thiscall sub_10256E10(int this)
{
  char *v2; // eax
  _DWORD *v3; // eax
  int v4; // eax

  v2 = *(char **)(this + 804);
  if ( v2 )
  {
    v3 = sub_1012BF20(&dword_1069E3E0, 0, v2, 0, 0, 0, 0);
    v4 = __RTDynamicCast(
           (int)v3,
           0,
           (struct _s_RTTICompleteObjectLocator *)&CBaseEntity `RTTI Type Descriptor',
           (int)&CBaseFilter `RTTI Type Descriptor',
           0);
    if ( v4 )
    {
      *(_DWORD *)(this + 808) = *(_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)v4 + 8))(v4);
      return sub_100E38F0((float *)this);
    }
    *(_DWORD *)(this + 808) = -1;
  }
  return sub_100E38F0((float *)this);
}
