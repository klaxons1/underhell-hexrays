bool __thiscall sub_102FDCB0(_DWORD *this, int a2, int a3)
{
  int v4; // esi

  if ( (*(unsigned __int8 (__thiscall **)(int, int))(*(_DWORD *)dword_106B31E0 + 12))(dword_106B31E0, a2) )
    v4 = 0;
  else
    v4 = (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 20))(a2);
  return this[1] != v4
      && (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v4 + 284))(v4)
      && __RTDynamicCast(
           v4,
           0,
           (struct _s_RTTICompleteObjectLocator *)&CBaseEntity `RTTI Type Descriptor',
           (int)&CNPC_Antlion `RTTI Type Descriptor',
           0) != 0;
}
