_DWORD *__stdcall sub_102ED770(int a1)
{
  _DWORD *v1; // eax
  _DWORD *v2; // esi

  v1 = (_DWORD *)sub_100D6340(1232);
  v2 = v1;
  if ( v1 )
  {
    sub_10177830(v1);
    *v2 = &CItem_LargeBox357Rounds::`vftable';
    v2[280] = &CItem_LargeBox357Rounds::`vftable';
  }
  else
  {
    v2 = 0;
  }
  (*(void (__thiscall **)(_DWORD *, int))(*v2 + 108))(v2, a1);
  return v2 + 3;
}
