float *__cdecl sub_10070120(int a1, int a2)
{
  float *v2; // eax
  float *v3; // eax
  float *v4; // esi

  v2 = (float *)sub_10034900(0x8F8u);
  if ( !v2 )
    return 0;
  v3 = sub_1006FA50(v2);
  v4 = v3;
  if ( !v3 )
    return 0;
  (*(void (__thiscall **)(float *, int, int))(*(_DWORD *)v3 + 160))(v3, a1, a2);
  return v4 + 2;
}
