float *__stdcall sub_10411E70(int a1)
{
  float *v1; // eax
  float *v2; // esi

  v1 = (float *)sub_100D6340(3640);
  v2 = v1;
  if ( v1 )
  {
    sub_10041230(v1);
    *(_DWORD *)v2 = &CNPC_MissileDefense::`vftable';
    *((_DWORD *)v2 + 526) = &CNPC_MissileDefense::`vftable';
  }
  else
  {
    v2 = 0;
  }
  (*(void (__thiscall **)(float *, int))(*(_DWORD *)v2 + 108))(v2, a1);
  return v2 + 3;
}
