bool __thiscall sub_10022470(_DWORD *this, int a2, float a3, int a4)
{
  int v4; // eax
  int v6; // eax
  bool result; // al

  v4 = *(_DWORD *)(a2 + 96);
  result = 0;
  if ( v4 )
  {
    v6 = __RTDynamicCast(
           v4,
           0,
           (struct _s_RTTICompleteObjectLocator *)&CBaseEntity `RTTI Type Descriptor',
           (int)&CBaseDoor `RTTI Type Descriptor',
           0);
    if ( v6 )
    {
      if ( (*(unsigned __int8 (__stdcall **)(int, int, _DWORD, int))(*(this - 526) + 1772))(a2, v6, LODWORD(a3), a4) )
        return 1;
    }
  }
  return result;
}
