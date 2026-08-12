_DWORD *__stdcall sub_103F8A40(int a1)
{
  _DWORD *v1; // eax
  _DWORD *v2; // esi

  v1 = (_DWORD *)sub_100D6340(1372);
  v2 = v1;
  if ( v1 )
  {
    sub_100D4A70(v1);
    *v2 = &CWeaponCubemap::`vftable';
  }
  else
  {
    v2 = 0;
  }
  (*(void (__thiscall **)(_DWORD *, int))(*v2 + 108))(v2, a1);
  return v2 + 3;
}
