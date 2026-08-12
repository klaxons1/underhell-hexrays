_DWORD *__stdcall sub_102505A0(int a1)
{
  int v1; // eax
  _DWORD *v2; // esi

  v1 = sub_100D6340(964);
  v2 = (_DWORD *)v1;
  if ( v1 )
  {
    sub_10246870(v1);
    *v2 = &CFuncTrain::`vftable';
    v2[235] = -1;
    v2[237] = -1;
  }
  else
  {
    v2 = 0;
  }
  (*(void (__thiscall **)(_DWORD *, int))(*v2 + 108))(v2, a1);
  return v2 + 3;
}
