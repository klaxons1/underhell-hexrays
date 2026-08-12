void __userpurge sub_102F8840(int a1@<ecx>, int a2@<edi>, int a3)
{
  char v3; // al
  unsigned int v4; // ecx
  int *v5; // eax
  unsigned int v6; // ecx

  if ( *(_DWORD *)(a3 + 24) == 6 )
    v3 = *(_BYTE *)(a3 + 8);
  else
    v3 = 0;
  *(_BYTE *)(a1 + 5836) = v3;
  if ( v3 )
  {
    if ( *(_DWORD *)(a1 + 5688) == -1
      || off_1061BE18[4 * (*(_DWORD *)(a1 + 5688) & 0xFFF) + 2] != *(_DWORD *)(a1 + 5688) >> 12
      || !off_1061BE18[4 * (*(_DWORD *)(a1 + 5688) & 0xFFF) + 1] )
    {
      sub_102F8540(a1, a2);
    }
  }
  else
  {
    v4 = *(_DWORD *)(a1 + 5688);
    if ( v4 != -1 )
    {
      v5 = &off_1061BE18[4 * (v4 & 0xFFF) + 1];
      v6 = v4 >> 12;
      if ( v5[1] == v6 )
      {
        if ( *v5 )
        {
          if ( v5[1] == v6 )
            sub_1025FAC0(*v5);
          else
            sub_1025FAC0(0);
        }
      }
    }
  }
}
