int __cdecl sub_10225FD0(int a1, unsigned int a2)
{
  int v2; // eax
  int result; // eax
  int v4; // esi
  const char *v5; // eax

  if ( a2 == -1 || off_1061BE18[4 * (a2 & 0xFFF) + 2] != a2 >> 12 )
    v2 = 0;
  else
    v2 = off_1061BE18[4 * (a2 & 0xFFF) + 1];
  result = __RTDynamicCast(
             v2,
             0,
             (struct _s_RTTICompleteObjectLocator *)&CBaseEntity `RTTI Type Descriptor',
             (int)&CSceneEntity `RTTI Type Descriptor',
             0);
  v4 = result;
  if ( result )
  {
    v5 = *(const char **)(result + 804);
    if ( !v5 )
      v5 = String;
    sub_1022F660("%s : stop scripted scene\n", (char)v5);
    return (*(int (__thiscall **)(int))(*(_DWORD *)v4 + 764))(v4);
  }
  return result;
}
