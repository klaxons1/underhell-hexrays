bool __userpurge sub_101481F0@<al>(int a1@<ecx>, double a2@<st0>, float *a3, int a4, _BYTE *a5)
{
  sub_10111AB0((_BYTE *)(a1 + 320), a3);
  if ( *(float *)(a1 + 816) + 10.0 >= a2 * *(float *)&a4 )
    return sub_10147E20(a1, a1, a3, a4, (int)a5);
  *a5 = 0;
  return 0;
}
