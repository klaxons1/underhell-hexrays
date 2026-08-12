float *__cdecl sub_102F28F0(int a1, int a2)
{
  float *v2; // eax
  float *v3; // esi

  v2 = (float *)sub_100D6340(3628);
  v3 = v2;
  if ( v2 )
  {
    sub_10041230(v2);
    *(_DWORD *)v3 = &CNewNPC::`vftable';
    *((_DWORD *)v3 + 526) = &CNewNPC::`vftable';
    sub_10043190();
    if ( dword_10669B70 != dword_10694898 )
    {
      sub_102F2730();
      dword_10669B70 = dword_10694898;
      byte_10669B6C = 1;
      (*(void (__thiscall **)(float *, int))(*(_DWORD *)v3 + 108))(v3, a2);
      return v3;
    }
  }
  else
  {
    v3 = 0;
  }
  (*(void (__thiscall **)(float *, int))(*(_DWORD *)v3 + 108))(v3, a2);
  return v3;
}
