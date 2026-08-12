void __cdecl sub_10473D20()
{
  int v0; // eax

  v0 = unk_106C4234;
  *(_DWORD *)byte_106C4210 = &ConVar::`vftable';
  *(_DWORD *)&byte_106C4210[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106C4234 = 0;
  }
  *(_DWORD *)byte_106C4210 = &ConCommandBase::`vftable';
}
