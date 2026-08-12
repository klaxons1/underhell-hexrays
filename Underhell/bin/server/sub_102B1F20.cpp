_BYTE *__stdcall sub_102B1F20(int a1)
{
  _DWORD *v1; // eax
  _BYTE *v2; // esi

  v1 = (_DWORD *)sub_100D6340(1392);
  v2 = v1;
  if ( v1 )
  {
    sub_100D4A70(v1);
    *(_DWORD *)v2 = &CBaseHLCombatWeapon::`vftable';
    v2[1388] = 1;
    v2[1127] = 0;
  }
  else
  {
    v2 = 0;
  }
  (*(void (__thiscall **)(_BYTE *, int))(*(_DWORD *)v2 + 108))(v2, a1);
  return v2 + 12;
}
