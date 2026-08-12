double sub_10142DE0()
{
  int v0; // esi

  v0 = sub_100422D0();
  if ( !v0
    || *(float *)(dword_10439DC4 + 44) > 0.0
    || !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)dword_1044CC48 + 60))(dword_1044CC48) )
  {
    return 1.0;
  }
  if ( !*(_DWORD *)(dword_1043C1A4 + 48) || -1.0 == *(float *)(dword_1043C39C + 44) )
    return *(float *)(v0 + 3760);
  return *(float *)(dword_1043C39C + 44);
}
