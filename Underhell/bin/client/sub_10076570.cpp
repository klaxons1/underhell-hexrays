int sub_10076570()
{
  int result; // eax
  int v1; // ebx
  int v2; // eax
  int v3; // edi
  int v4; // esi
  int v5; // [esp+4h] [ebp-4h]

  result = sub_1007A7F0(off_103DCD78);
  v1 = result;
  v5 = result;
  if ( result )
  {
    while ( 1 )
    {
      v2 = __RTDynamicCast(
             v1,
             0,
             (struct _s_RTTICompleteObjectLocator *)&C_BaseEntity `RTTI Type Descriptor',
             (int)&C_BaseAnimating `RTTI Type Descriptor',
             0);
      v3 = v2;
      if ( v2 )
      {
        sub_10026650(v2);
        v4 = *(_DWORD *)(v3 + 1940);
        if ( v4 )
        {
          nullsub_4();
          if ( *(_DWORD *)(v4 + 84) )
            sub_10034930(*(_DWORD *)(v4 + 84));
          sub_100F9890(v4 + 96);
          sub_100F9DC0(v4 + 96);
          sub_1011A810(v4 + 64);
          sub_1011A810(v4 + 44);
          sub_1011A810(v4 + 8);
          sub_10034930(v4);
          v1 = v5;
          *(_DWORD *)(v3 + 1940) = 0;
        }
      }
      result = sub_1007A820(v1);
      v5 = result;
      if ( !result )
        break;
      v1 = result;
    }
  }
  return result;
}
