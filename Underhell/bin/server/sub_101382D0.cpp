int __userpurge sub_101382D0@<eax>(int *a1@<ecx>, int a2@<ebp>, int a3)
{
  if ( (a1[48] & 0x20) != 0 )
    return sub_10138220((int)a1, a2);
  sub_100EAB80(a1, 32);
  if ( a1[243] )
    sub_10242060();
  sub_100EC4A0(a1, -1.0, 0);
  return sub_100EC3F0(a1, 0, 0.0, 0);
}
