int sub_1010FBF0()
{
  int result; // eax
  int *v1; // edi
  int v2; // esi
  int v3; // eax
  const char *v4; // eax
  int v5; // eax
  int v6; // edx

  result = sub_10153490();
  v1 = (int *)result;
  if ( result )
  {
    result = (*(int (__thiscall **)(int))(*(_DWORD *)result + 320))(result);
    if ( (_BYTE)result )
    {
      result = sub_100CF460(v1);
      v2 = result;
      if ( result )
      {
        v3 = sub_10153490();
        (*(void (__cdecl **)(int, _DWORD, const char *))(*(_DWORD *)dword_106B31D0 + 152))(
          dword_106B31D0,
          *(_DWORD *)(v3 + 24),
          "cancelselect");
        v4 = (const char *)(*(int (__thiscall **)(int))(*(_DWORD *)v2 + 1256))(v2);
        v5 = _stricmp(v4, "weapon_bugbait");
        v6 = *v1;
        if ( v5 )
          return (*(int (__thiscall **)(int *, const char *, _DWORD))(v6 + 1432))(v1, "weapon_bugbait", 0);
        else
          return (*(int (__thiscall **)(int *))(v6 + 1428))(v1);
      }
    }
  }
  return result;
}
