int sub_10255000()
{
  int v0; // edi
  int result; // eax
  _DWORD *v2; // esi
  int v3; // eax
  const char *v4; // esi

  v0 = 0;
  result = sub_1016BFB0(&dword_10690DF8);
  if ( result > 0 )
  {
    do
    {
      v2 = *(_DWORD **)(sub_1002A680(&dword_10690DF8) + 4 * v0);
      v3 = (*(int (__thiscall **)(_DWORD *))(*v2 + 1364))(v2);
      if ( v3
        && __RTDynamicCast(
             v3,
             0,
             (struct _s_RTTICompleteObjectLocator *)&CAI_BehaviorBase `RTTI Type Descriptor',
             (int)&CAI_LeadBehavior `RTTI Type Descriptor',
             0) )
      {
        v4 = (const char *)v2[65];
        if ( !v4 )
          v4 = String;
        Warning("Entity '%s' is still actively leading\n", v4);
      }
      ++v0;
      result = sub_1016BFB0(&dword_10690DF8);
    }
    while ( v0 < result );
  }
  return result;
}
