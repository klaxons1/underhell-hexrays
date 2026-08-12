char *__cdecl sub_10104280(char *a1)
{
  char *result; // eax
  char *i; // esi
  int v3; // edi
  float *v4; // eax
  float *v5; // eax
  int v6; // esi
  _DWORD *v7; // eax
  _DWORD *v8; // esi
  char *v9; // eax
  char String1[2048]; // [esp+4h] [ebp-280Ch] BYREF
  char Destination[2048]; // [esp+804h] [ebp-200Ch] BYREF
  char v12[2048]; // [esp+1004h] [ebp-180Ch] BYREF
  char v13[2048]; // [esp+1804h] [ebp-100Ch] BYREF
  char v14[2048]; // [esp+2004h] [ebp-80Ch] BYREF
  char *v15[3]; // [esp+2804h] [ebp-Ch] BYREF

  result = sub_100DBA50(a1, v13);
  for ( i = result; result; i = result )
  {
    if ( v13[0] == 123 )
    {
      v3 = dword_1047CA8C;
      v15[0] = i;
      v15[1] = (char *)-1;
      v15[2] = i;
      (*(void (__thiscall **)(int))(*(_DWORD *)dword_1047CA8C + 100))(dword_1047CA8C);
      if ( !sub_100DBE80(v15, "classname", v14) )
        Error("classname missing from entity!\n");
      if ( !strcmp(v14, "prop_physics_multiplayer")
        && (v4 = (float *)sub_10034900(0x808u)) != 0
        && (v5 = sub_10103D30(v4), (v6 = (int)v5) != 0) )
      {
        (*(void (__thiscall **)(float *, char **))(*(_DWORD *)v5 + 140))(v5, v15);
        if ( !sub_101034A0(v6) )
          (*(void (__thiscall **)(int))(*(_DWORD *)(v6 + 8) + 4))(v6 + 8);
      }
      else if ( !strcmp(v14, "func_proprrespawnzone")
             && (v7 = sub_10034900(0x4C0u)) != 0
             && (v8 = sub_10103F20(v7)) != 0 )
      {
        (*(void (__thiscall **)(_DWORD *, char **))(*v8 + 140))(v8, v15);
        if ( !sub_10103810((int)v8) )
          (*(void (__thiscall **)(_DWORD *))(v8[2] + 4))(v8 + 2);
      }
      else if ( sub_100DBEA0(v15, Destination, v12) )
      {
        while ( sub_100DBB60(v15, Destination, v12) )
          ;
      }
      i = (char *)sub_10073980(v15);
      (*(void (__thiscall **)(int))(*(_DWORD *)v3 + 104))(v3);
    }
    else
    {
      Error("MapEntity_ParseAllEntities: found %s when expecting {", v13);
    }
    v9 = sub_100DBE10(i, String1);
    result = sub_100DBA50(v9, v13);
  }
  return result;
}
