char *__cdecl sub_100E3960(int a1, float *a2, float *a3, int a4)
{
  int v4; // eax
  char *v5; // esi

  v4 = sub_101811E0(a1, -1);
  v5 = (char *)v4;
  if ( v4 )
  {
    sub_100E10C0(v4, a2);
    sub_100E11A0((int)v5, a3);
    (*(void (__thiscall **)(char *, int))(*(_DWORD *)v5 + 76))(v5, a4);
    sub_1012CA70(v5);
    sub_10260750(v5);
    return v5;
  }
  else
  {
    sub_10260750(0);
    return 0;
  }
}
