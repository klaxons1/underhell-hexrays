int __stdcall sub_100C1030(int **a1, int a2)
{
  int *v2; // esi
  int v3; // eax
  int result; // eax

  v2 = *a1;
  (*(void (__thiscall **)(int, char *, int, _DWORD))(*(_DWORD *)a2 + 64))(a2, (char *)&a1 + 3, 1, 0);
  if ( HIBYTE(a1) && (v3 = sub_10184390(4192)) != 0 )
  {
    result = sub_10106F20(v3);
    *v2 = result;
  }
  else
  {
    result = 0;
    *v2 = 0;
  }
  return result;
}
