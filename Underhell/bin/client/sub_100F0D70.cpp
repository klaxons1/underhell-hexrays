float *__cdecl sub_100F0D70(float *a1, int a2)
{
  float *v2; // esi
  float *result; // eax

  v2 = (float *)sub_100DDA40(272);
  if ( v2 )
  {
    sub_100F2BA0(a2);
    *(_DWORD *)v2 = &CParticleAttractor::`vftable';
    result = v2;
  }
  else
  {
    result = 0;
  }
  result[65] = *a1;
  result[66] = a1[1];
  result[67] = a1[2];
  return result;
}
