int __cdecl sub_1013D350(
        float *a1,
        float *a2,
        int a3,
        char ArgList,
        int a5,
        int a6,
        float a7,
        int a8,
        int a9,
        _DWORD *a10,
        int a11)
{
  char *v11; // esi
  int v12; // edi
  int *v13; // ecx
  bool v14; // zf
  int *v15; // ecx
  int v16; // ecx
  int v17; // edx
  double v19; // [esp+10h] [ebp-A8h]
  char Buffer[128]; // [esp+24h] [ebp-94h] BYREF
  int v21; // [esp+A4h] [ebp-14h]
  int v22; // [esp+A8h] [ebp-10h]
  int v23; // [esp+ACh] [ebp-Ch]

  v11 = sub_100E3960((int)"env_explosion", a1, a2, a3);
  sub_10429A00(Buffer, 0x80u, "%3d", ArgList);
  (*(void (__thiscall **)(char *, const char *, char *))(*(_DWORD *)v11 + 128))(v11, "iMagnitude", Buffer);
  v12 = a6 | *((_DWORD *)v11 + 62);
  if ( *((_DWORD *)v11 + 62) != v12 )
  {
    if ( v11[84] )
    {
      v11[88] |= 1u;
    }
    else
    {
      v13 = (int *)*((_DWORD *)v11 + 6);
      if ( v13 )
        sub_100194B0(v13, 248);
    }
    *((_DWORD *)v11 + 62) = v12;
  }
  if ( a5 )
  {
    sub_10429A00(Buffer, 0x80u, "%d", a5);
    (*(void (__thiscall **)(char *, const char *, char *))(*(_DWORD *)v11 + 128))(v11, "iRadiusOverride", Buffer);
  }
  if ( 0.0 != a7 )
  {
    v19 = a7;
    sub_10429A00(Buffer, 0x80u, "%.3f", SLOBYTE(v19));
    (*(void (__thiscall **)(char *, const char *, char *))(*(_DWORD *)v11 + 128))(v11, "DamageForce", Buffer);
  }
  v14 = v11[113] == 5;
  v21 = 0;
  if ( !v14 )
  {
    if ( v11[84] )
    {
      v11[88] |= 1u;
    }
    else
    {
      v15 = (int *)*((_DWORD *)v11 + 6);
      if ( v15 )
        sub_100194B0(v15, 113);
    }
    v11[113] = 5;
  }
  (*(void (__thiscall **)(char *, int))(*(_DWORD *)v11 + 76))(v11, a3);
  (*(void (__thiscall **)(char *))(*(_DWORD *)v11 + 96))(v11);
  if ( a8 )
    *((_DWORD *)v11 + 206) = *(_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)a8 + 8))(a8);
  else
    *((_DWORD *)v11 + 206) = -1;
  *((_DWORD *)v11 + 207) = a9;
  if ( a10 )
    *((_DWORD *)v11 + 209) = *a10;
  v16 = v22;
  v17 = v23;
  *((_DWORD *)v11 + 208) = a11;
  return (*(int (__thiscall **)(char *, const char *, _DWORD, _DWORD, _DWORD, int, int, int, _DWORD, _DWORD))(*(_DWORD *)v11 + 148))(
           v11,
           "Explode",
           0,
           0,
           0,
           v16,
           v17,
           -1,
           0,
           0);
}
