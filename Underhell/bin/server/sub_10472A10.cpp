void __cdecl sub_10472A10()
{
  int v0; // eax

  v0 = unk_106B8FC4;
  *(_DWORD *)byte_106B8FA0 = &ConVar::`vftable';
  *(_DWORD *)&byte_106B8FA0[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106B8FC4 = 0;
  }
  *(_DWORD *)byte_106B8FA0 = &ConCommandBase::`vftable';
}
