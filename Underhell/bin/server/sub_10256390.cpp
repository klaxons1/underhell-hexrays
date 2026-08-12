int __cdecl sub_10256390(char *a1, int a2)
{
  int v2; // ebx
  _DWORD *v3; // edi
  int v4; // eax
  int v5; // esi
  _DWORD *v6; // eax
  int v8; // [esp+8h] [ebp-4h]

  v2 = 0;
  v8 = 0;
  v3 = sub_1012BC90(&dword_1069E3E0, 0, "trigger_changelevel");
  if ( v3 )
  {
    while ( 1 )
    {
      v4 = __RTDynamicCast(
             (int)v3,
             0,
             (struct _s_RTTICompleteObjectLocator *)&CBaseEntity `RTTI Type Descriptor',
             (int)&CChangeLevel `RTTI Type Descriptor',
             0);
      v5 = v4;
      if ( v4 )
      {
        v6 = sub_10254F80((char *)(v4 + 1124));
        if ( v6 )
        {
          if ( sub_10255090(a1, v8, (char *)(v5 + 1092), (char *)(v5 + 1124), v6[6]) )
          {
            if ( ++v8 >= a2 )
              return v8;
          }
        }
        v2 = v8;
      }
      v3 = sub_1012BC90(&dword_1069E3E0, (int)v3, "trigger_changelevel");
      if ( !v3 )
        return v2;
    }
  }
  return 0;
}
