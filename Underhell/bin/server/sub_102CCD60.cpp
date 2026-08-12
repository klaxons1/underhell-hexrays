_BYTE *__stdcall sub_102CCD60(int a1)
{
  int v1; // eax
  _BYTE *v2; // esi

  v1 = sub_100D6340(1428);
  v2 = (_BYTE *)v1;
  if ( v1 )
  {
    sub_102CA510(v1);
    *(_DWORD *)v2 = &CFuncTankMortar::`vftable';
    v2[1420] = 0;
  }
  else
  {
    v2 = 0;
  }
  (*(void (__thiscall **)(_BYTE *, int))(*(_DWORD *)v2 + 108))(v2, a1);
  return v2 + 12;
}
