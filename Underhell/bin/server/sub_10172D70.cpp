_DWORD *__stdcall sub_10172D70(int a1)
{
  int v1; // eax
  _DWORD *v2; // esi

  v1 = sub_100D6340(1232);
  v2 = (_DWORD *)v1;
  if ( v1 )
  {
    sub_10177830(v1);
    *v2 = &CItemFlarePack::`vftable';
    v2[280] = &CItemFlarePack::`vftable';
  }
  else
  {
    v2 = 0;
  }
  (*(void (__thiscall **)(_DWORD *, int))(*v2 + 108))(v2, a1);
  return v2 + 3;
}
