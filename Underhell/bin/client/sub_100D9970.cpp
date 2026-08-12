double __thiscall sub_100D9970(_DWORD *this)
{
  int v1; // eax
  double result; // st7

  v1 = dword_1043A340;
  if ( !dword_1043A340 )
  {
    v1 = (*(int (__thiscall **)(int, const char *))(*(_DWORD *)cvar + 52))(cvar, "sv_cheats");
    dword_1043A340 = v1;
  }
  result = *(float *)(this[7] + 44);
  if ( v1 && !*(_DWORD *)(*(_DWORD *)(v1 + 28) + 48) )
  {
    if ( result <= 0.0 )
      return -0.022;
    else
      return 0.022;
  }
  return result;
}
