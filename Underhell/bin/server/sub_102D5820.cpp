_DWORD *__stdcall sub_102D5820(int a1)
{
  int v1; // eax
  _DWORD *v2; // esi

  v1 = sub_100D6340(2152);
  v2 = (_DWORD *)v1;
  if ( v1 )
  {
    sub_100F4EC0(v1);
    *v2 = &CGrenadeFrag::`vftable';
    v2[526] = &CGrenadeFrag::`vftable';
  }
  else
  {
    v2 = 0;
  }
  (*(void (__thiscall **)(_DWORD *, int))(*v2 + 108))(v2, a1);
  return v2 + 3;
}
