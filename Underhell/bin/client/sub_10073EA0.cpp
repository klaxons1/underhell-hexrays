double sub_10073EA0()
{
  int v0; // eax
  double result; // st7
  float v2; // [esp+0h] [ebp-8h]
  float v3; // [esp+0h] [ebp-8h]
  float v4; // [esp+4h] [ebp-4h]

  if ( (dword_10413134 & 1) == 0 )
  {
    dword_10413134 |= 1u;
    v0 = (*(int (__thiscall **)(int, const char *))(*(_DWORD *)g_pCVar + 44))(g_pCVar, "cl_updaterate");
    dword_10413130 = __RTDynamicCast(
                       v0,
                       0,
                       (struct _s_RTTICompleteObjectLocator *)&ConCommandBase `RTTI Type Descriptor',
                       (int)&ConVar_ServerBounded `RTTI Type Descriptor',
                       0);
  }
  if ( !dword_10413130 )
    return 0.1;
  v2 = ((double (__thiscall *)(int *))*(_DWORD *)(*off_103DC734 + 64))(off_103DC734);
  v4 = ((double (__thiscall *)(int *))*(_DWORD *)(*off_103DC730[0] + 64))(off_103DC730[0]);
  result = v4 / ((double (__thiscall *)(int))*(_DWORD *)(*(_DWORD *)dword_10413130 + 64))(dword_10413130);
  if ( result >= v2 )
  {
    v3 = ((double (__thiscall *)(int *))*(_DWORD *)(*off_103DC730[0] + 64))(off_103DC730[0]);
    return v3 / ((double (__thiscall *)(int))*(_DWORD *)(*(_DWORD *)dword_10413130 + 64))(dword_10413130);
  }
  else
  {
    (*(void (__thiscall **)(int *))(*off_103DC734 + 64))(off_103DC734);
  }
  return result;
}
