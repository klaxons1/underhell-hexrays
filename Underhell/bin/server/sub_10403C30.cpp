int *__cdecl sub_10403C30(float *a1, float *a2, float *a3, int a4)
{
  int *v4; // esi

  v4 = (int *)sub_100E3960((int)"apc_missile", a1, a2, a4);
  (*(void (__thiscall **)(int *, int))(*v4 + 76))(v4, a4);
  (*(void (__thiscall **)(int *))(*v4 + 96))(v4);
  sub_100DD660((int)v4, a3);
  sub_100EA940(v4, 0x8000);
  sub_100EAB80(v4, 16);
  return v4;
}
