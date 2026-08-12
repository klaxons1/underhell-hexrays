int sub_10156EF0()
{
  int result; // eax
  int v1; // ebx
  _DWORD *v2; // eax
  _DWORD *v3; // edi
  int v4; // esi
  int v5; // [esp+4h] [ebp-4h]

  result = sub_1012BC10(&dword_1069E3E0, 0);
  v1 = result;
  v5 = result;
  if ( result )
  {
    while ( 1 )
    {
      v2 = (_DWORD *)__RTDynamicCast(
                       v1,
                       0,
                       (struct _s_RTTICompleteObjectLocator *)&CBaseEntity `RTTI Type Descriptor',
                       (int)&CBaseAnimating `RTTI Type Descriptor',
                       0);
      v3 = v2;
      if ( v2 )
      {
        sub_100BD870(v2);
        v4 = v3[275];
        if ( v4 )
        {
          nullsub_4(v3[275]);
          if ( *(_DWORD *)(v4 + 84) )
            sub_10184660(*(_DWORD *)(v4 + 84));
          sub_101C7570(v4 + 96);
          sub_101C8650(v4 + 96);
          sub_102375F0(v4 + 64);
          sub_102375F0(v4 + 44);
          sub_102375F0(v4 + 8);
          sub_10184660(v4);
          v1 = v5;
          v3[275] = 0;
        }
      }
      result = sub_1012BC10(&dword_1069E3E0, v1);
      v5 = result;
      if ( !result )
        break;
      v1 = result;
    }
  }
  return result;
}
