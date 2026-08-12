int __thiscall sub_10039AE0(_DWORD *this, int a2, int *a3)
{
  int v3; // esi
  int (__thiscall *v5)(_DWORD *, int, char *); // edx
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // ebx
  int v11; // eax
  const char *v12; // eax
  const char *v13; // esi
  const char *v14; // eax
  int v15; // eax
  int v16; // esi
  int v17; // ecx
  int v18; // eax
  int *v19; // esi
  int v20; // esi
  const char *v21; // [esp-4h] [ebp-1Ch]
  int v22; // [esp+Ch] [ebp-Ch]
  int v23; // [esp+10h] [ebp-8h]
  char v24; // [esp+16h] [ebp-2h] BYREF
  char v25; // [esp+17h] [ebp-1h] BYREF
  int v26; // [esp+24h] [ebp+Ch]

  v3 = a2;
  v5 = *(int (__thiscall **)(_DWORD *, int, char *))(*this + 936);
  v23 = 0;
  v24 = 0;
  v25 = 0;
  v6 = v5(this, a2, &v24);
  v22 = v6;
  if ( a3 )
    *a3 = v6;
  v26 = a2;
  do
  {
    ++v23;
    v7 = (*(int (__thiscall **)(_DWORD *, int))(*this + 932))(this, v3);
    if ( v7 != v3 )
      v26 = v7;
    v8 = (*(int (__thiscall **)(_DWORD *, int, char *))(*this + 936))(this, v7, &v25);
    v9 = v8;
    if ( v8 == v3 )
      break;
    v3 = v8;
  }
  while ( v23 < 5 );
  if ( v3 == 16 )
    return 16;
  if ( sub_10022CA0(this, v8) )
    return v9;
  if ( v25 )
  {
    if ( (dword_10691B34 & 1) == 0 )
    {
      dword_10691B34 |= 1u;
      dword_10691B20 = 0;
      dword_10691B24 = 0;
      dword_10691B28 = 0;
      dword_10691B2C = 0;
      dword_10691B30 = 0;
      atexit(sub_1046EAC0);
    }
    v11 = 0;
    if ( dword_10691B2C > 0 )
    {
      while ( *(_DWORD *)(dword_10691B20 + 4 * v11) != v9 )
      {
        if ( ++v11 >= dword_10691B2C )
          goto LABEL_30;
      }
      if ( !v11 )
      {
        v12 = *(const char **)(sub_100CF460(this) + 92);
        if ( !v12 )
          v12 = String;
        v13 = (const char *)this[23];
        if ( !v13 )
          v13 = String;
        v21 = v12;
        v14 = sub_10008F90(v9);
        DevWarning("%s missing activity \"%s\" needed by weapon\"%s\"\n", v13, v14, v21);
        v15 = dword_10691B2C;
        v16 = dword_10691B2C;
        if ( dword_10691B2C + 1 > dword_10691B24 )
        {
          sub_102ABFC0(dword_10691B2C - dword_10691B24 + 1);
          v15 = dword_10691B2C;
        }
        v17 = dword_10691B20;
        dword_10691B2C = v15 + 1;
        v18 = v15 - v16;
        dword_10691B30 = dword_10691B20;
        if ( v18 > 0 )
        {
          memcpy((void *)(dword_10691B20 + 4 * v16 + 4), (const void *)(dword_10691B20 + 4 * v16), 4 * v18);
          v17 = dword_10691B20;
        }
        v19 = (int *)(v17 + 4 * v16);
        if ( v19 )
          *v19 = v9;
      }
    }
  }
LABEL_30:
  v20 = v26;
  if ( v26 == v9 || !sub_10022CA0(this, v26) )
  {
    if ( v22 != v26 && sub_10022CA0(this, v22) )
      return a2;
    v20 = a2;
    if ( a2 == v22 || !sub_10022CA0(this, a2) )
    {
      if ( a2 == 11 )
        return 6;
      if ( a2 == 6 )
        return 11;
    }
  }
  return v20;
}
