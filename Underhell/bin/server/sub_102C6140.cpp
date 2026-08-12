void __thiscall sub_102C6140(_DWORD *this, int a2, int a3, int a4)
{
  const char *v5; // eax
  char *v6; // edi
  _DWORD *v7; // eax
  int v8; // eax
  unsigned int v9; // eax
  int v10; // eax
  int v11; // eax
  int v12; // eax
  bool v13; // cf

  sub_1015F7B0(this, a2, a3, a4);
  if ( a2 )
  {
    v5 = *(const char **)(a2 + 92);
    if ( !v5 )
      v5 = String;
    sub_1015EFA0((int)this, "Attacker: %s\n", v5);
  }
  if ( a3 )
  {
    v6 = *(char **)(a3 + 92);
    if ( !v6 )
      v6 = (char *)String;
    v7 = (_DWORD *)sub_102C5F80(this, v6);
    if ( v7 )
    {
      sub_1015EFA0((int)this, "Player has killed %d %s's\n", ++*v7, v6);
      v8 = __RTDynamicCast(
             a2,
             0,
             (struct _s_RTTICompleteObjectLocator *)&CBasePlayer `RTTI Type Descriptor',
             (int)&CPropVehicleDriveable `RTTI Type Descriptor',
             0);
      if ( v8
        || ((v9 = *(_DWORD *)(a4 + 40), v9 == -1) || off_1061BE18[4 * (*(_DWORD *)(a4 + 40) & 0xFFF) + 2] != v9 >> 12
          ? (v10 = 0)
          : (v10 = off_1061BE18[4 * (*(_DWORD *)(a4 + 40) & 0xFFF) + 1]),
            (v8 = __RTDynamicCast(
                    v10,
                    0,
                    (struct _s_RTTICompleteObjectLocator *)&CBaseEntity `RTTI Type Descriptor',
                    (int)&CPropVehicleDriveable `RTTI Type Descriptor',
                    0)) != 0) )
      {
        v11 = (**(int (__thiscall ***)(int))(v8 + 1484))(v8 + 1484);
        if ( v11 )
        {
          if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v11 + 320))(v11) )
          {
            v12 = this[23];
            v13 = __CFADD__((*(_DWORD *)(v12 + 280))++, 1);
            *(_DWORD *)(v12 + 284) += v13;
            sub_1015EFA0((int)this, "  Vehicular homicide [%I64d] of %s's\n", *(_QWORD *)(this[23] + 280), v6);
          }
        }
      }
    }
    else
    {
      sub_1015EFA0((int)this, "Player killed %s (not tracked)\n", v6);
    }
  }
}
