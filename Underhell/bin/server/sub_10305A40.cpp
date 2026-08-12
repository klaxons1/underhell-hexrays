int __stdcall sub_10305A40(int a1)
{
  int v1; // eax
  int v2; // esi

  v1 = sub_100D6340(4160);
  if ( v1 )
    v2 = sub_103057E0(v1);
  else
    v2 = 0;
  (*(void (__thiscall **)(int, int))(*(_DWORD *)v2 + 108))(v2, a1);
  return v2 + 12;
}
