_DWORD *__cdecl sub_100D0BE0(int a1)
{
  unsigned __int16 v1; // ax
  int v2; // esi
  _DWORD *result; // eax

  v1 = sub_10147EA0(0);
  v2 = v1;
  sub_100D09C0((unsigned __int16 *)&dword_10696C04, 0xFFFFu, v1);
  result = (_DWORD *)(dword_10696C04 + 8 * v2);
  if ( result )
    *result = a1;
  return result;
}
