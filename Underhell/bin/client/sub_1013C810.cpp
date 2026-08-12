int __cdecl sub_1013C810(int a1)
{
  const char *v2; // eax
  int v3; // eax
  int v4; // esi
  int (__thiscall ***v5)(_DWORD); // eax
  const char *v6; // eax

  if ( *(_DWORD *)a1 == 2 )
  {
    if ( !_stricmp("off", *(const char **)(a1 + 1036)) )
      return (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_10439968 + 80))(dword_10439968, 0);
    v2 = Locale;
    if ( *(int *)a1 > 1 )
      v2 = *(const char **)(a1 + 1036);
    v3 = (*(int (__thiscall **)(int, const char *, const char *, _DWORD, _DWORD))(*(_DWORD *)dword_1047C96C + 280))(
           dword_1047C96C,
           v2,
           "Other textures",
           0,
           0);
    v4 = v3;
    if ( !v3 || (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v3 + 168))(v3) )
      return (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_10439968 + 80))(dword_10439968, 0);
    else
      return (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_10439968 + 80))(dword_10439968, v4);
  }
  else
  {
    v5 = (int (__thiscall ***)(_DWORD))(*(int (__thiscall **)(int))(*(_DWORD *)dword_10439968 + 84))(dword_10439968);
    if ( v5 )
    {
      v6 = (const char *)(**v5)(v5);
      return Warning("r_screenoverlay: %s\n", v6);
    }
    else
    {
      return Warning("r_screenoverlay: %s\n", "off");
    }
  }
}
