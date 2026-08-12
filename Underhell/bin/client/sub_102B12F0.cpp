_DWORD *sub_102B12F0()
{
  _WORD *v0; // eax
  const char *v2; // [esp-8h] [ebp-8h]

  v2 = type_info::name(
         (type_info *)&C_BaseParticleEntity `RTTI Type Descriptor',
         (struct __type_info_node *)&unk_10481AF0);
  v0 = sub_100F0920();
  return sub_100F07D0(v0, (int)v2, (int)sub_10011DB0);
}
