int __stdcall sub_100491E0(char a1)
{
  unsigned int i; // edi
  int result; // eax
  int *v3; // esi
  int v4; // edx

  for ( i = 0; i < 3; ++i )
  {
    result = (*(int (__thiscall **)(int, char *, const char *, int, _DWORD))(*(_DWORD *)dword_1047C96C + 280))(
               dword_1047C96C,
               off_103DA934[i],
               "ClientEffect textures",
               1,
               0);
    v3 = (int *)result;
    if ( result )
    {
      result = (*(int (__thiscall **)(int))(*(_DWORD *)result + 168))(result);
      if ( !(_BYTE)result )
      {
        v4 = *v3;
        if ( a1 )
          result = (*(int (__fastcall **)(int *))(v4 + 48))(v3);
        else
          result = (*(int (__fastcall **)(int *))(v4 + 52))(v3);
      }
    }
  }
  return result;
}
