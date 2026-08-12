void __cdecl sub_10478F30()
{
  int v0; // eax

  v0 = unk_106EC8CC;
  *(_DWORD *)byte_106EC8A8 = &ConVar::`vftable';
  *(_DWORD *)&byte_106EC8A8[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106EC8CC = 0;
  }
  *(_DWORD *)byte_106EC8A8 = &ConCommandBase::`vftable';
}
