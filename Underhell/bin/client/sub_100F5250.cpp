int sub_100F5250()
{
  int result; // eax

  if ( dword_10436254 )
    (*(void (__thiscall **)(int, int))(*(_DWORD *)dword_10436248 + 24))(dword_10436248, dword_10436254);
  (*(void (__thiscall **)(int, int))(*(_DWORD *)dword_10436248 + 36))(dword_10436248, dword_1043625C);
  dword_1043625C = 0;
  result = (*(int (__thiscall **)(int))(*(_DWORD *)dword_10436248 + 48))(dword_10436248);
  dword_10436254 = 0;
  dword_1043624C = 0;
  return result;
}
