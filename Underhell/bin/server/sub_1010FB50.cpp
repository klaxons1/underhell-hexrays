int sub_1010FB50()
{
  int result; // eax
  _DWORD *v1; // edi
  int v2; // esi
  int v3; // eax
  const char *v4; // eax

  result = sub_10153490();
  v1 = (_DWORD *)result;
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
        if ( !_stricmp(v4, "weapon_physcannon") )
        {
          sub_10403410(v2, 0);
          return (*(int (__thiscall **)(_DWORD *))(*v1 + 1428))(v1);
        }
        else
        {
          return (*(int (__thiscall **)(_DWORD *, const char *, _DWORD))(*v1 + 1432))(v1, "weapon_physcannon", 0);
        }
      }
    }
  }
  return result;
}
