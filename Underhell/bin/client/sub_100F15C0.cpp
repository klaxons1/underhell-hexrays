int **__cdecl sub_100F15C0(int **a1, int a2, int a3, int a4, int a5)
{
  int *v5; // esi
  int v6; // edx

  v5 = (int *)sub_100DDA40(272);
  if ( v5 )
  {
    sub_100F2BA0(a2);
    *v5 = (int)&CLocalSpaceEmitter::`vftable';
    v5[65] = -1;
  }
  else
  {
    v5 = 0;
  }
  sub_100F2930(1);
  v5[66] = a4;
  v6 = *v5;
  v5[65] = a3;
  v5[67] = a5;
  (*(void (__thiscall **)(int *))(v6 + 72))(v5);
  *a1 = 0;
  sub_100F2950(v5);
  if ( *a1 )
    sub_100F2FF0(*a1);
  *a1 = v5;
  return a1;
}
