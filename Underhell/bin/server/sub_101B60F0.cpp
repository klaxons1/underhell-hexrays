char *__cdecl sub_101B60F0(char *String2, _DWORD *a2)
{
  _DWORD *v3; // esi
  const char *v5; // ebx
  float *v6; // eax
  float v7; // ecx
  float v8; // edx
  char *v9; // eax
  _DWORD *i; // esi
  const char *v11; // eax
  __int64 v12; // [esp+8h] [ebp-128h]
  char Buffer[256]; // [esp+24h] [ebp-10Ch] BYREF
  float v14; // [esp+124h] [ebp-Ch]
  float v15; // [esp+128h] [ebp-8h]
  float v16; // [esp+12Ch] [ebp-4h]
  char *String2a; // [esp+138h] [ebp+8h]

  if ( !String2 || !strlen(String2) )
    return 0;
  v12 = (unsigned int)String2;
  String2a = 0;
  v3 = sub_1012BF20(&dword_1069E3E0, 0, (char *)v12, SHIDWORD(v12), 0, 0, 0);
  if ( !v3 )
    return String2a;
  while ( !v3[106] )
  {
LABEL_7:
    v3 = sub_1012BF20(&dword_1069E3E0, (int)v3, String2, 0, 0, 0, 0);
    if ( !v3 )
      return String2a;
  }
  if ( !String2a )
  {
    String2a = (char *)v3[106];
    goto LABEL_7;
  }
  if ( a2 )
  {
    v5 = (const char *)a2[23];
    if ( !v5 )
      v5 = String;
    v6 = (float *)sub_10019640(a2);
  }
  else
  {
    v5 = "Unknown";
    v6 = &flt_106F1CA8;
  }
  v7 = *v6;
  v8 = v6[1];
  v16 = v6[2];
  v15 = v8;
  v14 = v7;
  v9 = sub_1001E280(Buffer, "(%f, %f, %f)", v7, v8, v16);
  DevWarning("entity %s at %s has physics attachment to more than one entity with the name %s!!!\n", v5, v9, String2);
  for ( i = sub_1012BF20(&dword_1069E3E0, (int)v3, String2, 0, 0, 0, 0);
        i;
        i = sub_1012BF20(&dword_1069E3E0, (int)i, String2, 0, 0, 0, 0) )
  {
    v11 = (const char *)i[23];
    if ( !v11 )
      v11 = String;
    DevWarning("Found %s\n", v11);
  }
  return String2a;
}
