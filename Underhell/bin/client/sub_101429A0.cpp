int __stdcall sub_101429A0(char a1)
{
  int result; // eax
  int *v2; // esi
  int v3; // edx

  result = (*(int (__thiscall **)(int, char *, const char *, int, _DWORD))(*(_DWORD *)dword_1047C96C + 280))(
             dword_1047C96C,
             off_103E7E98[0],
             "ClientEffect textures",
             1,
             0);
  v2 = (int *)result;
  if ( result )
  {
    result = (*(int (__thiscall **)(int))(*(_DWORD *)result + 168))(result);
    if ( !(_BYTE)result )
    {
      v3 = *v2;
      if ( a1 )
        return (*(int (__thiscall **)(int *))(v3 + 48))(v2);
      else
        return (*(int (__thiscall **)(int *))(v3 + 52))(v2);
    }
  }
  return result;
}
