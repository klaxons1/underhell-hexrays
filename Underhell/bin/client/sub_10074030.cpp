double __thiscall sub_10074030(_DWORD *this)
{
  int v2; // eax
  int v3; // eax
  int v4; // ecx
  int v5; // esi
  int v6; // ecx
  int v7; // edx

  if ( (dword_10413148 & 1) == 0 )
  {
    dword_10413148 |= 1u;
    v2 = (*(int (__thiscall **)(int, const char *))(*(_DWORD *)g_pCVar + 44))(g_pCVar, "sv_client_min_interp_ratio");
    dword_10413144 = __RTDynamicCast(
                       v2,
                       0,
                       (struct _s_RTTICompleteObjectLocator *)&ConCommandBase `RTTI Type Descriptor',
                       (int)&ConVar `RTTI Type Descriptor',
                       0);
  }
  if ( (dword_10413148 & 2) != 0 )
  {
    v4 = dword_10413140;
  }
  else
  {
    dword_10413148 |= 2u;
    v3 = (*(int (__thiscall **)(int, const char *))(*(_DWORD *)g_pCVar + 44))(g_pCVar, "sv_client_max_interp_ratio");
    v4 = __RTDynamicCast(
           v3,
           0,
           (struct _s_RTTICompleteObjectLocator *)&ConCommandBase `RTTI Type Descriptor',
           (int)&ConVar `RTTI Type Descriptor',
           0);
    dword_10413140 = v4;
  }
  if ( !dword_10413144 )
    return *(float *)(this[7] + 44);
  if ( !v4 )
    return *(float *)(this[7] + 44);
  v5 = *(_DWORD *)(dword_10413144 + 28);
  if ( -1.0 == *(float *)(v5 + 44) )
    return *(float *)(this[7] + 44);
  v6 = *(_DWORD *)(v4 + 28);
  v7 = this[7];
  if ( *(float *)(v6 + 44) < (double)*(float *)(v7 + 44) )
    return *(float *)(v6 + 44);
  if ( *(float *)(v5 + 44) <= (double)*(float *)(v7 + 44) )
    return *(float *)(v7 + 44);
  return *(float *)(v5 + 44);
}
