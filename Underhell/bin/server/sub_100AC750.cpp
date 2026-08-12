double __stdcall sub_100AC750(int a1)
{
  int v1; // esi
  int v2; // eax
  bool v3; // zf
  float *v4; // eax

  v1 = sub_100D7680(a1);
  if ( !sub_100D7680(v1) )
    return 0.0;
  v2 = sub_100D7680(v1);
  v3 = (*(unsigned __int8 (__thiscall **)(int, _DWORD))(*(_DWORD *)v2 + 1528))(v2, 0) == 0;
  v4 = &flt_1060B428;
  if ( v3 )
    v4 = &flt_1060B430;
  return *v4;
}
