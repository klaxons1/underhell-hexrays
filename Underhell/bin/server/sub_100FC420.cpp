char *__thiscall sub_100FC420(int this)
{
  char *v2; // eax
  int v3; // eax
  int v4; // eax

  v2 = *(char **)(this + 800);
  if ( v2 )
  {
    v3 = sub_1012BF20(0, v2, 0, 0, 0, 0);
    v4 = __RTDynamicCast(
           v3,
           0,
           (struct _s_RTTICompleteObjectLocator *)&CBaseEntity `RTTI Type Descriptor',
           (int)&CBaseFilter `RTTI Type Descriptor',
           0);
    if ( v4 )
    {
      *(_DWORD *)(this + 804) = *(_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)v4 + 8))(v4);
      return sub_100E38F0((float *)this);
    }
    *(_DWORD *)(this + 804) = -1;
  }
  return sub_100E38F0((float *)this);
}
