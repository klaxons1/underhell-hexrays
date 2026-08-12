int __stdcall sub_10186E30(int a1)
{
  int v1; // eax
  int v2; // esi

  v1 = sub_100D6340(956);
  v2 = v1;
  if ( v1 )
  {
    sub_10186A30(v1);
    *(_DWORD *)v2 = &CNPCMaker::`vftable';
    *(_DWORD *)(v2 + 944) = 0;
    *(_WORD *)(v2 + 921) = 0;
  }
  else
  {
    v2 = 0;
  }
  (*(void (__thiscall **)(int, int))(*(_DWORD *)v2 + 108))(v2, a1);
  return v2 + 12;
}
