void __thiscall sub_10336B20(void *this)
{
  int v2; // esi
  unsigned int v3; // eax
  int v4; // ecx
  int v5; // eax

  v2 = sub_1012BC10(&dword_1069E3E0, 0);
  if ( v2 )
  {
    while ( 1 )
    {
      v3 = *(_DWORD *)(v2 + 412);
      if ( v3 == -1 || off_1061BE18[4 * (*(_DWORD *)(v2 + 412) & 0xFFF) + 2] != v3 >> 12 )
        v4 = 0;
      else
        v4 = off_1061BE18[4 * (*(_DWORD *)(v2 + 412) & 0xFFF) + 1];
      if ( (void *)v4 == this )
      {
        v5 = __RTDynamicCast(
               v2,
               0,
               (struct _s_RTTICompleteObjectLocator *)&CBaseEntity `RTTI Type Descriptor',
               (int)&CSquadInsignia `RTTI Type Descriptor',
               0);
        if ( v5 )
          break;
      }
      v2 = sub_1012BC10(&dword_1069E3E0, v2);
      if ( !v2 )
        return;
    }
    sub_1025FAC0(v5);
  }
}
