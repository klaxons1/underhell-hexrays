int sub_10313E40()
{
  int result; // eax

  result = (*(int (__thiscall **)(int, const char *, _DWORD))(*(_DWORD *)dword_106B31F8 + 24))(
             dword_106B31F8,
             "helicopter_grenade_punt_miss",
             0);
  if ( result )
    return (*(int (__thiscall **)(int, int, _DWORD))(*(_DWORD *)dword_106B31F8 + 28))(dword_106B31F8, result, 0);
  return result;
}
