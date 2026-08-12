int __cdecl sub_1010F9D0(int *a1)
{
  int result; // eax
  int v2; // esi
  bool v3; // cc
  char *v4; // eax
  const char *v5; // eax
  char String[256]; // [esp+0h] [ebp-104h] BYREF
  const char *v7; // [esp+100h] [ebp-4h] BYREF

  result = dword_1069ABE0;
  if ( *(_DWORD *)(*(_DWORD *)(dword_1069ABE0 + 28) + 48) )
  {
    result = sub_10153490();
    v2 = result;
    if ( result )
    {
      result = (*(int (__thiscall **)(int))(*(_DWORD *)result + 320))(result);
      if ( (_BYTE)result )
      {
        if ( *(_DWORD *)(dword_106B31C8 + 20) == 1
          || (result = *(_DWORD *)(dword_1069ABE0 + 28), *(_DWORD *)(result + 48)) )
        {
          result = *a1;
          if ( *a1 >= 2 )
          {
            v3 = result <= 1;
            v4 = (char *)::String;
            if ( !v3 )
              v4 = (char *)a1[259];
            sub_104299C0(String, v4, 0x100u);
            _strlwr(String);
            if ( !_stricmp(String, "item_suit") )
            {
              return (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)v2 + 1596))(v2, 0);
            }
            else
            {
              sub_10162BE0(&v7, String);
              v5 = v7;
              if ( !v7 )
                v5 = ::String;
              return (*(int (__thiscall **)(int, const char *, _DWORD))(*(_DWORD *)v2 + 1440))(v2, v5, 0);
            }
          }
        }
      }
    }
  }
  return result;
}
