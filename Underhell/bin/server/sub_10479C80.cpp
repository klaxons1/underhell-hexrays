void __cdecl sub_10479C80()
{
  int v0; // eax

  v0 = unk_106F1024;
  *(_DWORD *)byte_106F1000 = &ConVar::`vftable';
  *(_DWORD *)&byte_106F1000[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106F1024 = 0;
  }
  *(_DWORD *)byte_106F1000 = &ConCommandBase::`vftable';
}
