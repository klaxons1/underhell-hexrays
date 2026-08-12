const char *__stdcall sub_1010F610(int *a1)
{
  const char *result; // eax
  const char *v2; // esi
  int v3; // eax
  const char *v4; // eax
  int v5; // edi
  int v6; // eax

  if ( a1[6] == 2 )
  {
    result = (const char *)a1[2];
    if ( !result )
      return result;
  }
  else
  {
    result = sub_1010D460((int)(a1 + 2));
  }
  if ( *result )
  {
    v2 = 0;
    if ( *(_DWORD *)(dword_106B31C8 + 20) != 1 )
    {
      v3 = __RTDynamicCast(
             *a1,
             0,
             (struct _s_RTTICompleteObjectLocator *)&CBaseEntity `RTTI Type Descriptor',
             (int)&CBasePlayer `RTTI Type Descriptor',
             0);
      if ( v3 )
        v2 = *(const char **)(v3 + 24);
      result = (const char *)sub_101172D0();
      if ( !(_BYTE)result )
      {
LABEL_12:
        if ( !v2 )
          return result;
        goto LABEL_13;
      }
      if ( v2 )
      {
LABEL_13:
        if ( *((_DWORD *)v2 + 3) )
        {
          if ( a1[6] == 2 )
          {
            v4 = (const char *)a1[2];
            if ( !v4 )
              v4 = String;
          }
          else
          {
            LOBYTE(v4) = (unsigned __int8)sub_1010D460((int)(a1 + 2));
          }
          v5 = *(_DWORD *)dword_106B31D0;
          v6 = sub_1025F440("%s\n", (char)v4);
          return (const char *)(*(int (__cdecl **)(int, const char *, int))(v5 + 152))(dword_106B31D0, v2, v6);
        }
        return result;
      }
    }
    result = (const char *)(*(int (__thiscall **)(int, int))(*(_DWORD *)dword_106B31D0 + 76))(dword_106B31D0, 1);
    v2 = result;
    goto LABEL_12;
  }
  return result;
}
