void __cdecl sub_1046E780()
{
  int v0; // eax

  v0 = unk_10690354;
  *(_DWORD *)byte_10690330 = &ConVar::`vftable';
  *(_DWORD *)&byte_10690330[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_10690354 = 0;
  }
  *(_DWORD *)byte_10690330 = &ConCommandBase::`vftable';
}
