int __userpurge sub_1034DA50@<eax>(int a1@<ecx>, int a2@<ebx>, int a3)
{
  unsigned int v4; // ecx
  int *v5; // eax
  unsigned int v6; // ecx

  v4 = *(_DWORD *)(a1 + 412);
  if ( v4 != -1 )
  {
    v5 = &off_1061BE18[4 * (v4 & 0xFFF) + 1];
    v6 = v4 >> 12;
    if ( v5[1] == v6 )
    {
      if ( *v5 )
      {
        if ( v5[1] == v6 )
        {
          sub_1034B5D0(*v5);
          return sub_1034D830(a1, a2);
        }
        sub_1034B5D0(0);
      }
    }
  }
  return sub_1034D830(a1, a2);
}
