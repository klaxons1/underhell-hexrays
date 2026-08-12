float *__cdecl sub_1035FD80(int a1, int a2)
{
  float *v2; // eax
  float *v3; // esi

  v2 = (float *)sub_100D6340(3712);
  v3 = v2;
  if ( v2 )
  {
    sub_10041230(v2);
    *(_DWORD *)v3 = &CNPC_Crow::`vftable';
    *((_DWORD *)v3 + 526) = &CNPC_Crow::`vftable';
    sub_10043190();
    if ( dword_1067222C != dword_10694898 )
    {
      sub_1035F1C0();
      dword_1067222C = dword_10694898;
      byte_10672228 = 1;
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
