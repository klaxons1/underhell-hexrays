int __stdcall sub_10097D60(int a1)
{
  int v1; // eax
  int v2; // esi

  v1 = sub_100D6340(836);
  if ( v1 )
    v2 = sub_10097790(v1);
  else
    v2 = 0;
  (*(void (__thiscall **)(int, int))(*(_DWORD *)v2 + 108))(v2, a1);
  return v2 + 12;
}
