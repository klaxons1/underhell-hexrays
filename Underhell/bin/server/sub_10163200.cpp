int __thiscall sub_10163200(int this)
{
  const char *v2; // eax
  int v3; // eax
  int v4; // edi
  const char *v5; // eax

  sub_100EC3F0((_DWORD *)this, (int)sub_103D79E0, 0.0, 0);
  sub_100EC4A0((int *)this, *(float *)(dword_106B31C8 + 12), 0);
  v2 = *(const char **)(this + 800);
  if ( !v2 )
    v2 = String;
  v3 = sub_101811E0(v2, -1);
  v4 = v3;
  if ( v3 )
  {
    *(_BYTE *)(this + 812) = __RTDynamicCast(
                               v3,
                               0,
                               (struct _s_RTTICompleteObjectLocator *)&CBaseEntity `RTTI Type Descriptor',
                               (int)&CBaseCombatWeapon `RTTI Type Descriptor',
                               0) != 0;
    return sub_1025FAC0(v4);
  }
  else
  {
    v5 = sub_100D6390((_DWORD *)this);
    DevMsg("%s removed itself!\n", v5);
    return sub_1025FAC0(this);
  }
}
