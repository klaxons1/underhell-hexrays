int __thiscall sub_10242560(_DWORD *this, int a2)
{
  unsigned int v2; // ecx
  int *v3; // eax
  unsigned int v4; // ecx
  int v5; // eax
  int v6; // eax

  v2 = this[77];
  if ( v2 != -1
    && (v3 = &off_1061BE18[4 * (v2 & 0xFFF) + 1], v4 = v2 >> 12, v3[1] == v4)
    && *v3
    && (v3[1] != v4 ? (v5 = 0) : (v5 = *v3),
        (v6 = __RTDynamicCast(
                v5,
                0,
                (struct _s_RTTICompleteObjectLocator *)&CBaseEntity `RTTI Type Descriptor',
                (int)&CBaseViewModel `RTTI Type Descriptor',
                0)) != 0) )
  {
    return (*(int (__thiscall **)(int, int))(*(_DWORD *)v6 + 80))(v6, a2);
  }
  else
  {
    return 8;
  }
}
