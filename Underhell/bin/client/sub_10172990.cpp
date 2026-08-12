int *__cdecl sub_10172990(int *a1, int a2, float *a3)
{
  int v3; // esi

  v3 = sub_100DDA40(264);
  if ( v3 )
  {
    sub_100F2A50((float *)v3, a2);
    *(float *)(v3 + 256) = 1.5;
    *(_DWORD *)v3 = &CTEParticleRenderer::`vftable';
    *(_DWORD *)(v3 + 260) = 0;
    sub_100F2930((_DWORD *)v3, 1);
    sub_100F3060(v3, a3);
  }
  else
  {
    v3 = 0;
  }
  *a1 = 0;
  if ( v3 )
  {
    sub_100F2950((_DWORD *)v3);
    if ( *a1 )
      sub_100F2FF0(*a1);
    *a1 = v3;
  }
  return a1;
}
