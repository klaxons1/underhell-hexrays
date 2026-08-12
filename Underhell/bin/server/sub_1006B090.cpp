int __stdcall sub_1006B090(int a1)
{
  int v1; // esi

  v1 = sub_100D6340(800);
  if ( v1 )
  {
    sub_100E33C0(0);
    *(_DWORD *)v1 = &CNPCEventResponseSystemEntity::`vftable';
  }
  else
  {
    v1 = 0;
  }
  (*(void (__thiscall **)(int, int))(*(_DWORD *)v1 + 108))(v1, a1);
  return v1 + 12;
}
