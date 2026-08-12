_DWORD *__usercall sub_102100C0@<eax>(int a1@<ecx>, _DWORD *a2@<ebx>)
{
  _DWORD *v2; // esi
  const char *v3; // edi
  const char **v4; // eax
  _DWORD *result; // eax
  char *v6; // edi
  char *v7; // eax
  char *v8; // eax
  int *v9; // eax
  int *v10; // ebx
  int v11; // ecx
  int v12; // edi
  int v13; // eax
  int v14; // ecx
  int v15; // eax
  _DWORD *v16; // edi
  int v18; // [esp+8h] [ebp-10h] BYREF
  _DWORD *v19; // [esp+Ch] [ebp-Ch]
  char *v20; // [esp+10h] [ebp-8h]
  int v21; // [esp+14h] [ebp-4h]

  v2 = (_DWORD *)a1;
  v19 = (_DWORD *)a1;
  sub_100BDBA0(a1);
  if ( !*((_BYTE *)v2 + 225) && v2[55] )
  {
    v3 = (const char *)v2[23];
    if ( !v3 )
      v3 = String;
    v4 = (const char **)(*(int (__thiscall **)(_DWORD *, int *))(*v2 + 28))(v2, &v18);
    Warning("%s has a health specified in model '%s'. Use prop_physics or prop_dynamic instead.\n", v3, *v4);
  }
  sub_10206C10(v2, v2[418] != 0);
  result = (_DWORD *)v2[65];
  if ( result )
  {
    v6 = (char *)v2[65];
    v7 = (char *)v2[436];
    v21 = 0;
    v20 = v6;
    if ( v7 && *v7 )
    {
      v20 = v7;
      v6 = v7;
    }
    while ( 1 )
    {
      v8 = v6;
      if ( !v6 )
        v8 = (char *)String;
      result = sub_1012BF20(&dword_1069E3E0, v21, v8, 0, 0, 0, 0);
      v21 = (int)result;
      if ( !result )
        break;
      if ( result != v2 )
      {
        v9 = (int *)__RTDynamicCast(
                      (int)result,
                      0,
                      (struct _s_RTTICompleteObjectLocator *)&CBaseEntity `RTTI Type Descriptor',
                      (int)&CBasePropDoor `RTTI Type Descriptor',
                      0);
        v10 = v9;
        if ( v9 )
        {
          if ( v9[415] <= 0 )
          {
            v11 = *(_DWORD *)(*(int (__thiscall **)(int *, _DWORD *))(*v9 + 8))(v9, a2);
            v12 = v2[415];
            v13 = v2[413];
            v18 = v11;
            if ( v12 + 1 > v13 )
              sub_102ABFC0(v12 - v13 + 1);
            ++v2[415];
            v14 = v2[412];
            v15 = v2[415] - v12 - 1;
            v2[416] = v14;
            if ( v15 > 0 )
              memcpy((void *)(v14 + 4 * v12 + 4), (const void *)(v14 + 4 * v12), 4 * v15);
            v16 = (_DWORD *)(v2[412] + 4 * v12);
            if ( v16 )
              *v16 = v18;
            v2 = v19;
            v10[437] = *(_DWORD *)(*(int (__thiscall **)(_DWORD *))(*v19 + 8))(v19);
            a2 = v2;
            (*(void (__thiscall **)(int *))(*v10 + 76))(v10);
            v6 = v20;
          }
        }
      }
    }
  }
  return result;
}
