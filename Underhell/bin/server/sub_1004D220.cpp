float *__stdcall sub_1004D220(int a1)
{
  float *v1; // eax
  float *v2; // esi

  v1 = (float *)sub_100D6340(888);
  if ( v1 )
    v2 = sub_1004C3C0(v1);
  else
    v2 = 0;
  (*(void (__thiscall **)(float *, int))(*(_DWORD *)v2 + 108))(v2, a1);
  return v2 + 3;
}
