void __stdcall sub_10155630(char a1)
{
  int v1; // eax
  int v2; // esi
  char *v3; // eax
  _DWORD *v4; // eax
  int v5; // eax
  int v6; // eax
  int v7; // eax
  int v8; // eax

  if ( a1 )
  {
    sub_10155010();
    sub_101700E0();
    v1 = *(_DWORD *)(dword_106B339C + 48);
    if ( v1 != -1 )
    {
      if ( v1 )
      {
        v6 = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_106B31D0 + 76))(dword_106B31D0, v1);
        v7 = sub_100AC640(v6);
        v8 = __RTDynamicCast(
               v7,
               0,
               (struct _s_RTTICompleteObjectLocator *)&CBaseEntity `RTTI Type Descriptor',
               (int)&CBaseAnimating `RTTI Type Descriptor',
               0);
        if ( v8 )
          sub_100C0570(v8, 0.0, 0);
      }
      else
      {
        v2 = 0;
        while ( 1 )
        {
          if ( (dword_106B3394 & 0x1000) != 0 )
          {
            v3 = "FCVAR_NEVER_AS_STRING";
          }
          else
          {
            v3 = *(char **)(dword_106B339C + 36);
            if ( !v3 )
              v3 = (char *)String;
          }
          v4 = sub_1012BF20(&dword_1069E3E0, v2, v3, 0, 0, 0, 0);
          v2 = (int)v4;
          if ( !v4 )
            break;
          v5 = __RTDynamicCast(
                 (int)v4,
                 0,
                 (struct _s_RTTICompleteObjectLocator *)&CBaseEntity `RTTI Type Descriptor',
                 (int)&CBaseAnimating `RTTI Type Descriptor',
                 0);
          if ( v5 )
            sub_100C0570(v5, 0.0, 0);
        }
      }
    }
  }
}
