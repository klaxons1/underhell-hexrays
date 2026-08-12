void __cdecl sub_10185F00(int *a1)
{
  const char *v1; // eax
  const char *v2; // eax
  int v3; // esi
  int v4; // eax
  int v5; // [esp-4h] [ebp-2Ch]
  float v6; // [esp+14h] [ebp-14h]
  float v7; // [esp+1Ch] [ebp-Ch]
  float v8; // [esp+20h] [ebp-8h]
  float v9; // [esp+24h] [ebp-4h]

  if ( dword_10445528 && *a1 >= 2 )
  {
    v1 = Locale;
    if ( *a1 > 1 )
      v1 = (const char *)a1[259];
    v9 = sub_10227D70(v1);
    v8 = 0.0;
    if ( *a1 >= 3 )
    {
      v2 = Locale;
      if ( *a1 > 2 )
        v2 = (const char *)a1[260];
      v8 = sub_10227D70(v2);
    }
    if ( *a1 == 4 )
      v9 = ((double (__thiscall *)(int))*(_DWORD *)(*(_DWORD *)dword_10445528 + 20))(dword_10445528) * v9;
    v7 = ((double (__thiscall *)(int))*(_DWORD *)(*(_DWORD *)dword_10445528 + 48))(dword_10445528) * (v9 * 1024.0);
    v6 = v7 / ((double (__thiscall *)(int))*(_DWORD *)(*(_DWORD *)dword_10445528 + 52))(dword_10445528);
    (*(void (__stdcall **)(_DWORD))(*(_DWORD *)dword_10445528 + 36))(LODWORD(v6));
    if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)dword_10445528 + 28))(dword_10445528)
      || (v3 = sub_100422D0()) == 0
      || (v4 = sub_100422D0(), !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v4 + 500))(v4))
      && (*(int (__thiscall **)(int))(*(_DWORD *)v3 + 844))(v3) != 1 )
    {
      v5 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_10445528 + 24))(dword_10445528);
      (*(void (__thiscall **)(int))(*(_DWORD *)dword_1044CC48 + 36))(dword_1044CC48);
      sub_10247080(v5, (void *)"zoom", v9, 0.0, v8, 0, 0.0);
    }
  }
}
