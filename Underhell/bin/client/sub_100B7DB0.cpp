int __cdecl sub_100B7DB0(int *a1)
{
  int result; // eax
  int v2; // edi
  int v3; // esi
  const char *v4; // eax
  int v5; // eax
  int v6; // edi
  int v7; // esi
  int v8; // ebx
  int v9; // eax
  char *v10; // ecx
  int v11; // edi
  const char *v12; // eax
  const char *v13; // [esp-Ch] [ebp-14h]
  int v14; // [esp+4h] [ebp-4h]

  result = sub_100B4090(&dword_1042FB78, "CHudAnimationInfo");
  v2 = 0;
  v14 = result;
  if ( result )
  {
    if ( *a1 == 2 )
    {
      if ( dword_1042FBA0 <= 0 )
        goto LABEL_7;
      while ( 1 )
      {
        v3 = *(_DWORD *)(dword_1042FB94 + 4 * v2);
        v13 = sub_10035360(a1, 1);
        v4 = (const char *)(*(int (__thiscall **)(int))(*(_DWORD *)v3 + 32))(v3);
        if ( !_stricmp(v4, v13) )
          break;
        if ( ++v2 >= dword_1042FBA0 )
          goto LABEL_7;
      }
      v11 = *(_DWORD *)(dword_1042FB94 + 4 * v2);
      if ( v11 )
      {
        result = __RTDynamicCast(
                   v11,
                   0,
                   (struct _s_RTTICompleteObjectLocator *)&CHudElement `RTTI Type Descriptor',
                   (int)&vgui::Panel `RTTI Type Descriptor',
                   0);
        *(_DWORD *)(v14 + 276) = result;
      }
      else
      {
LABEL_7:
        v5 = sub_101B9A20();
        v6 = dword_1047CA70;
        v7 = *(_DWORD *)dword_1047CA70;
        v8 = v5;
        v9 = (*(int (__thiscall **)(int))(*(_DWORD *)(v14 + 44) + 104))(v14 + 44);
        if ( !(*(int (__thiscall **)(int, int, int))(v7 + 216))(v6, v8, v9) )
          goto LABEL_14;
        v10 = (char *)Locale;
        if ( *a1 > 1 )
          v10 = (char *)a1[259];
        result = sub_10239950(v10, 1);
        if ( result )
        {
          *(_DWORD *)(v14 + 276) = result;
        }
        else
        {
LABEL_14:
          v12 = Locale;
          if ( *a1 > 1 )
            v12 = (const char *)a1[259];
          return Msg("No such element %s\n", v12);
        }
      }
    }
    else
    {
      *(_DWORD *)(result + 276) = 0;
    }
  }
  return result;
}
