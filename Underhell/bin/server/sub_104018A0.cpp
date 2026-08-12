char __userpurge sub_104018A0@<al>(_DWORD *a1@<ecx>, float a2@<ebx>, int a3)
{
  int v4; // ecx

  if ( !a3 )
    return 0;
  if ( a1[2443] == -1 )
    return 0;
  if ( off_1061BE18[4 * (a1[2443] & 0xFFF) + 2] != a1[2443] >> 12 )
    return 0;
  v4 = off_1061BE18[4 * (a1[2443] & 0xFFF) + 1];
  if ( !v4 || v4 != a3 )
    return 0;
  sub_10401510((int)a1, a2);
  sub_103FEC80(*(float *)&a1, 1, 0);
  sub_10401640(a1, a2, 1);
  return 1;
}
