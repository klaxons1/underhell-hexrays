void __cdecl sub_10471740()
{
  int v0; // eax

  v0 = unk_106B317C;
  *(_DWORD *)byte_106B3158 = &ConVar::`vftable';
  *(_DWORD *)&byte_106B3158[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106B317C = 0;
  }
  *(_DWORD *)byte_106B3158 = &ConCommandBase::`vftable';
}
