int __stdcall sub_1037AE90(int a1)
{
  int v1; // eax
  int v2; // esi

  v1 = sub_100D6340(960);
  v2 = v1;
  if ( v1 )
  {
    sub_10186A30(v1);
    *(_DWORD *)(v2 + 948) = 0;
    *(_WORD *)(v2 + 921) = 0;
    *(_DWORD *)v2 = &CHunterMaker::`vftable';
  }
  else
  {
    v2 = 0;
  }
  (*(void (__thiscall **)(int, int))(*(_DWORD *)v2 + 108))(v2, a1);
  return v2 + 12;
}
