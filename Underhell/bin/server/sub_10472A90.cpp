void __cdecl sub_10472A90()
{
  int v0; // eax

  v0 = unk_106B9254;
  *(_DWORD *)byte_106B9230 = &ConVar::`vftable';
  *(_DWORD *)&byte_106B9230[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106B9254 = 0;
  }
  *(_DWORD *)byte_106B9230 = &ConCommandBase::`vftable';
}
