_DWORD *__stdcall sub_101099C0(int a1)
{
  _DWORD *v1; // eax
  _DWORD *v2; // esi

  v1 = (_DWORD *)sub_100D6340(1120);
  v2 = v1;
  if ( v1 )
  {
    sub_10108C00(v1);
    *v2 = &CRotButton::`vftable';
  }
  else
  {
    v2 = 0;
  }
  (*(void (__thiscall **)(_DWORD *, int))(*v2 + 108))(v2, a1);
  return v2 + 3;
}
