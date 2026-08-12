int __stdcall sub_1014EA70(int a1)
{
  int v1; // eax
  int v2; // esi

  v1 = sub_100D6340(844);
  v2 = v1;
  if ( v1 )
  {
    sub_1014E510(v1);
    *(_DWORD *)v2 = &CFunc_DustCloud::`vftable';
  }
  else
  {
    v2 = 0;
  }
  (*(void (__thiscall **)(int, int))(*(_DWORD *)v2 + 108))(v2, a1);
  return v2 + 12;
}
