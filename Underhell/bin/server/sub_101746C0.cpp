_DWORD *__stdcall sub_101746C0(int a1)
{
  int v1; // eax
  _DWORD *v2; // esi

  v1 = sub_100D6340(1232);
  v2 = (_DWORD *)v1;
  if ( v1 )
  {
    sub_10177830(v1);
    *v2 = &CItemHeadsetPMC::`vftable';
    v2[280] = &CItemHeadsetPMC::`vftable';
  }
  else
  {
    v2 = 0;
  }
  (*(void (__thiscall **)(_DWORD *, int))(*v2 + 108))(v2, a1);
  return v2 + 3;
}
