double __thiscall sub_10074120(_DWORD *this)
{
  int v2; // eax
  int v3; // ecx
  int v4; // eax
  int v5; // eax
  int v6; // edx
  float v8; // [esp+4h] [ebp-8h]
  float v9; // [esp+4h] [ebp-8h]
  float v10; // [esp+8h] [ebp-4h]

  if ( (dword_10413154 & 1) != 0 )
  {
    v3 = dword_10413150;
  }
  else
  {
    dword_10413154 |= 1u;
    v2 = (*(int (__thiscall **)(int, const char *))(*(_DWORD *)g_pCVar + 44))(g_pCVar, "cl_updaterate");
    v3 = __RTDynamicCast(
           v2,
           0,
           (struct _s_RTTICompleteObjectLocator *)&ConCommandBase `RTTI Type Descriptor',
           (int)&ConVar_ServerBounded `RTTI Type Descriptor',
           0);
    dword_10413150 = v3;
  }
  if ( (dword_10413154 & 2) != 0 )
  {
    v5 = dword_1041314C;
  }
  else
  {
    dword_10413154 |= 2u;
    v4 = (*(int (__thiscall **)(int, const char *))(*(_DWORD *)g_pCVar + 44))(g_pCVar, "sv_client_min_interp_ratio");
    v5 = __RTDynamicCast(
           v4,
           0,
           (struct _s_RTTICompleteObjectLocator *)&ConCommandBase `RTTI Type Descriptor',
           (int)&ConVar `RTTI Type Descriptor',
           0);
    v3 = dword_10413150;
    dword_1041314C = v5;
  }
  if ( !v3 )
    return *(float *)(this[7] + 44);
  if ( !v5 )
    return *(float *)(this[7] + 44);
  v6 = *(_DWORD *)(v5 + 28);
  if ( -1.0 == *(float *)(v6 + 44) )
    return *(float *)(this[7] + 44);
  v8 = *(float *)(this[7] + 44);
  v10 = *(float *)(v6 + 44);
  if ( v10 / ((double (__thiscall *)(int))*(_DWORD *)(*(_DWORD *)v3 + 64))(v3) < v8 )
    return *(float *)(this[7] + 44);
  v9 = *(float *)(*(_DWORD *)(dword_1041314C + 28) + 44);
  return v9 / ((double (__thiscall *)(int))*(_DWORD *)(*(_DWORD *)dword_10413150 + 64))(dword_10413150);
}
