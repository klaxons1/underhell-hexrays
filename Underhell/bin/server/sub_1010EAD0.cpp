int __cdecl sub_1010EAD0(int *a1)
{
  int result; // eax
  int v2; // esi

  result = sub_10153490();
  v2 = result;
  if ( result )
  {
    result = (*(int (__thiscall **)(int))(*(_DWORD *)result + 320))(result);
    if ( (_BYTE)result )
    {
      if ( *a1 > 1 )
        return (*(int (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v2 + 1432))(v2, a1[259], 0);
      else
        return (*(int (__thiscall **)(int, const char *, _DWORD))(*(_DWORD *)v2 + 1432))(v2, String, 0);
    }
  }
  return result;
}
