double __thiscall sub_10073F90(_DWORD *this)
{
  int v3; // eax
  int v4; // eax
  int v5; // eax

  if ( byte_10413050 )
    return 0.0;
  if ( (dword_1041313C & 1) != 0 )
  {
    v4 = dword_10413138;
  }
  else
  {
    dword_1041313C |= 1u;
    v3 = (*(int (__thiscall **)(int, const char *))(*(_DWORD *)g_pCVar + 44))(g_pCVar, "sv_client_predict");
    v4 = __RTDynamicCast(
           v3,
           0,
           (struct _s_RTTICompleteObjectLocator *)&ConCommandBase `RTTI Type Descriptor',
           (int)&ConVar `RTTI Type Descriptor',
           0);
    dword_10413138 = v4;
  }
  if ( !v4 || (v5 = *(_DWORD *)(v4 + 28), *(_DWORD *)(v5 + 48) == -1) )
    v5 = this[7];
  return *(float *)(v5 + 44);
}
