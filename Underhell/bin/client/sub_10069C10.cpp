void sub_10069C10()
{
  if ( !dword_1041110C )
    dword_1041110C = (*(int (__thiscall **)(int, const char *))(*(_DWORD *)cvar + 52))(cvar, "snd_soundmixer");
  if ( !dword_10411108 )
    dword_10411108 = (*(int (__thiscall **)(int, const char *))(*(_DWORD *)cvar + 52))(cvar, "dsp_volume");
}
