char __cdecl sub_1013ECF0(int a1, float *a2, float *a3)
{
  float *v3; // eax
  float *v4; // edx
  char result; // al

  v3 = (float *)__RTDynamicCast(
                  a1,
                  0,
                  (struct _s_RTTICompleteObjectLocator *)&CBaseEntity `RTTI Type Descriptor',
                  (int)&CFire `RTTI Type Descriptor',
                  0);
  v4 = a3;
  if ( v3 && sub_1013E990(v3, a2, a3) )
  {
    result = 1;
    *a2 = *a2 * 0.5;
    a2[1] = a2[1] * 0.5;
    a2[2] = a2[2] * 0.5;
    *v4 = *v4 * 0.5;
    v4[1] = v4[1] * 0.5;
    v4[2] = 0.5 * v4[2];
  }
  else
  {
    result = 0;
    *a2 = 0.0;
    a2[1] = 0.0;
    a2[2] = 0.0;
    *v4 = 0.0;
    v4[1] = 0.0;
    v4[2] = 0.0;
  }
  return result;
}
