void __cdecl sub_10063520(int *a1)
{
  char v1; // bl
  char *v2; // eax
  int v3; // esi
  const char *v4; // eax
  char *v5; // eax
  int v6; // eax
  const char *v7; // eax
  int v8; // eax
  int v9; // edi

  if ( dword_10693628 )
  {
    v1 = 0;
    if ( *a1 > 1 && a1[259] && *a1 > 1 && (v2 = (char *)a1[259], *v2) )
    {
      v3 = sub_1012C5B0(0, v2, 0, 0, 0);
      if ( !v3 )
      {
        v4 = String;
        if ( *a1 > 1 )
          v4 = (const char *)a1[259];
        v5 = (char *)sub_101811E0(v4, -1);
        v3 = (int)v5;
        if ( !v5 )
        {
          if ( *a1 > 1 )
            DevMsg("Entity %s not found, and couldn't create!\n", (const char *)a1[259]);
          else
            DevMsg("Entity %s not found, and couldn't create!\n", String);
          return;
        }
        v1 = 1;
        sub_10260750(v5);
      }
    }
    else
    {
      v8 = sub_10153490();
      v3 = sub_101E94B0(v8);
      if ( !v3 )
      {
        DevMsg("No entity under the crosshair.\n");
        return;
      }
    }
    v6 = __RTDynamicCast(
           v3,
           0,
           (struct _s_RTTICompleteObjectLocator *)&CBaseEntity `RTTI Type Descriptor',
           (int)&CAI_BaseNPC `RTTI Type Descriptor',
           0);
    if ( v6 )
    {
      v9 = *(_DWORD *)(v6 + 1676);
      if ( v1 )
        sub_1025FAC0(v3);
      sub_10086AC0(v9);
      dword_1060F300 = sub_10153480();
    }
    else
    {
      v7 = (const char *)sub_100D6390(v3);
      DevMsg("Entity %s is not an NPC.\n", v7);
    }
  }
}
