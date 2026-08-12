void __thiscall sub_10137170(int this)
{
  char *v2; // eax
  _DWORD *v3; // eax
  int v4; // eax

  v2 = *(char **)(this + 1020);
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
      *(_DWORD *)(this + 1024) = *(_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)v4 + 8))(v4);
    else
      *(_DWORD *)(this + 1024) = -1;
  }
  sub_100E38F0((float *)this);
  if ( 0.0 == *(float *)(this + 984) && (*(_DWORD *)(this + 248) & 8) == 0 )
    sub_10136D60(this);
}
