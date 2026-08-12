_DWORD *__stdcall sub_103075E0(int a1)
{
  _DWORD *v1; // eax
  _DWORD *v2; // esi

  v1 = (_DWORD *)sub_100D6340(1220);
  if ( v1 )
    v2 = sub_10306ED0(v1);
  else
    v2 = 0;
  (*(void (__thiscall **)(_DWORD *, int))(*v2 + 108))(v2, a1);
  return v2 + 3;
}
