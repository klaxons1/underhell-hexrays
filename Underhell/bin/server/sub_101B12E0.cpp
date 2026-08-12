int __thiscall sub_101B12E0(int this, int a2)
{
  int v3; // ebx
  const char *v4; // edx
  const char *v5; // eax
  const char *v6; // ecx
  const char *v7; // eax
  const char *v8; // eax
  int result; // eax
  int v10; // edx
  const char *v11; // edx
  const char *v12; // eax
  const char *v13; // eax
  const char *v14; // eax
  int v15; // ecx
  int v16; // eax
  int v17; // eax
  int v18; // ecx
  int v19; // eax
  int v20; // eax
  const char *v21; // [esp-8h] [ebp-14h]
  const char *v22; // [esp-8h] [ebp-14h]
  const char *v23; // [esp-4h] [ebp-10h]
  const char *v24; // [esp-4h] [ebp-10h]

  sub_101B10E0(*(char **)(this + 804), a2, 0, this);
  sub_101B10E0(*(char **)(this + 808), a2, 1, this);
  v3 = *(_DWORD *)(a2 + 24);
  if ( !v3 )
  {
    if ( !*(_DWORD *)(a2 + 28) )
      goto LABEL_24;
    v4 = *(const char **)(this + 804);
    v5 = v4;
    if ( !v4 )
      v5 = String;
    if ( strlen(v5) )
    {
      v6 = *(const char **)(this + 808);
      if ( !v6 )
        v6 = String;
      v7 = *(const char **)(this + 804);
      if ( !v4 )
        v7 = String;
      v23 = v6;
      v21 = v7;
      v8 = sub_100D6390((_DWORD *)this);
      result = Warning("Bogus constraint %s (attaches ENTITY NOT FOUND:%s to %s)\n", v8, v21, v23);
      *(_DWORD *)(a2 + 28) = 0;
      *(_DWORD *)(a2 + 24) = 0;
      return result;
    }
    v10 = dword_106BAFEC;
    goto LABEL_23;
  }
  if ( *(_DWORD *)(a2 + 28) )
  {
LABEL_24:
    v15 = *(_DWORD *)(a2 + 24);
    if ( v15 && (v16 = (*(int (__thiscall **)(int))(*(_DWORD *)v15 + 68))(v15), (v17 = sub_101CB4A0(v16)) != 0) )
      result = *(_DWORD *)(v17 + 8);
    else
      result = 0;
    *(_DWORD *)(a2 + 32) = result;
    if ( !result )
    {
      v18 = *(_DWORD *)(a2 + 28);
      if ( v18 && (v19 = (*(int (__thiscall **)(int))(*(_DWORD *)v18 + 68))(v18), (v20 = sub_101CB4A0(v19)) != 0) )
      {
        result = *(_DWORD *)(v20 + 8);
        *(_DWORD *)(a2 + 32) = result;
      }
      else
      {
        result = 0;
        *(_DWORD *)(a2 + 32) = 0;
      }
    }
    return result;
  }
  v11 = *(const char **)(this + 808);
  v12 = v11;
  if ( !v11 )
    v12 = String;
  if ( !strlen(v12) )
  {
    *(_DWORD *)(a2 + 28) = v3;
    v10 = dword_106BAFEC;
    *(_BYTE *)(a2 + 44) = 1;
LABEL_23:
    *(_DWORD *)(a2 + 24) = v10;
    *(float *)(a2 + 40) = 1.0;
    *(float *)(a2 + 36) = 1.0;
    goto LABEL_24;
  }
  if ( !v11 )
    v11 = String;
  v13 = *(const char **)(this + 804);
  if ( !v13 )
    v13 = String;
  v24 = v11;
  v22 = v13;
  v14 = sub_100D6390((_DWORD *)this);
  result = Warning("Bogus constraint %s (attaches %s to ENTITY NOT FOUND:%s)\n", v14, v22, v24);
  *(_DWORD *)(a2 + 28) = 0;
  *(_DWORD *)(a2 + 24) = 0;
  return result;
}
