char __thiscall sub_10177130(void *this, _BYTE *a2, int a3, int a4, int a5)
{
  if ( !a2
    || !(*(unsigned __int8 (__thiscall **)(_BYTE *))(*(_DWORD *)a2 + 320))(a2)
    || a2[3370]
    || !__RTDynamicCast(
          (int)a2,
          0,
          (struct _s_RTTICompleteObjectLocator *)&CBasePlayer `RTTI Type Descriptor',
          (int)&CHL2_Player `RTTI Type Descriptor',
          0)
    || !(unsigned __int8)sub_102DF1A0(10.0, 1.0, (int)"Player.Eat") )
  {
    return 0;
  }
  sub_1025FAC0(this);
  return 1;
}
