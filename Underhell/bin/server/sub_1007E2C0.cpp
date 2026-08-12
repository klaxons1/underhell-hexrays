int __thiscall sub_1007E2C0(_DWORD *this, int a2)
{
  int result; // eax
  int v4; // eax
  int v5; // eax
  int v6; // ecx

  result = 0;
  if ( a2 )
  {
    result = sub_100D8070(a2);
    if ( !result )
    {
      v4 = __RTDynamicCast(
             a2,
             0,
             (struct _s_RTTICompleteObjectLocator *)&CBaseEntity `RTTI Type Descriptor',
             (int)&CAI_Hint `RTTI Type Descriptor',
             0);
      if ( !v4 )
        return 0;
      v5 = *(_DWORD *)(v4 + 856);
      if ( v5 == -1 )
      {
        return 0;
      }
      else
      {
        v6 = this[8];
        if ( v5 < 0 || v5 >= *(_DWORD *)(v6 + 4) )
        {
          ++dword_10691DE0;
          return MEMORY[0x60];
        }
        else
        {
          return *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(v6 + 8) + 4 * v5) + 96);
        }
      }
    }
  }
  return result;
}
