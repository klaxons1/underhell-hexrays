void __cdecl sub_10471290()
{
  int v0; // eax

  v0 = unk_106B1394;
  *(_DWORD *)byte_106B1370 = &ConVar::`vftable';
  *(_DWORD *)&byte_106B1370[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106B1394 = 0;
  }
  *(_DWORD *)byte_106B1370 = &ConCommandBase::`vftable';
}
