float *__cdecl sub_1037FC90(int a1, int a2)
{
  float *v2; // eax
  float *v3; // esi

  v2 = (float *)sub_100D6340(3668);
  v3 = v2;
  if ( v2 )
  {
    sub_10041230(v2);
    *(_DWORD *)v3 = &CNPC_Ichthyosaur::`vftable';
    *((_DWORD *)v3 + 526) = &CNPC_Ichthyosaur::`vftable';
    sub_10043190();
    if ( dword_10675148 != dword_10694898 )
    {
      sub_1037E8C0();
      dword_10675148 = dword_10694898;
      byte_10675144 = 1;
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
