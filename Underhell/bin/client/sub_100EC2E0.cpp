bool sub_100EC2E0()
{
  int v0; // eax
  bool result; // al

  v0 = dword_1043A340;
  result = (dword_1043A340
         || (v0 = (*(int (__thiscall **)(int, const char *))(*(_DWORD *)cvar + 52))(cvar, "sv_cheats"),
             (dword_1043A340 = v0) != 0))
        && *(_DWORD *)(*(_DWORD *)(v0 + 28) + 48)
        && *(_DWORD *)(dword_1043A72C + 48) != 0;
  return result;
}
