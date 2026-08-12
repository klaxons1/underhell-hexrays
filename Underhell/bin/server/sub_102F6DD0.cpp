bool __userpurge sub_102F6DD0@<al>(int a1@<ecx>, double a2@<st0>, int a3)
{
  if ( (*(_BYTE *)(a3 + 256) & 1) == 0 )
    return 0;
  if ( !sub_10029FD0((char *)a1, a3) )
    return 0;
  sub_100271C0((float *)a1, (float *)a3);
  if ( a2 <= 360.0 )
    return 0;
  if ( (*(_DWORD *)(a3 + 252) & 0x800) != 0 )
    sub_100DAE60(a3);
  if ( (*(_DWORD *)(a1 + 252) & 0x800) != 0 )
    sub_100DAE60(a1);
  return fabs(*(float *)(a3 + 588) - *(float *)(a1 + 588)) <= 64.0;
}
