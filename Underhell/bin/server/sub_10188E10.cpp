void __thiscall sub_10188E10(int this)
{
  char *v2; // eax
  _DWORD *v3; // eax
  int v4; // eax

  sub_100E38F0((float *)this);
  v2 = *(char **)(this + 840);
  if ( !v2 )
    v2 = (char *)String;
  v3 = sub_1012BF20(&dword_1069E3E0, 0, v2, 0, 0, 0, 0);
  v4 = __RTDynamicCast(
         (int)v3,
         0,
         (struct _s_RTTICompleteObjectLocator *)&CBaseEntity `RTTI Type Descriptor',
         (int)&CPathKeyFrame `RTTI Type Descriptor',
         0);
  *(_DWORD *)(this + 848) = v4;
  if ( v4 )
    *(_DWORD *)(v4 + 852) = this;
  sub_10188860(this);
}
