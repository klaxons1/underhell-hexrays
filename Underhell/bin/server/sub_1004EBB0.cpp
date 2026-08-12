int __usercall sub_1004EBB0@<eax>(int a1@<ecx>, int a2@<ebp>, float *a3@<edi>)
{
  unsigned int v4; // ecx
  int *v5; // eax
  unsigned int v6; // ecx
  int v7; // eax

  if ( (unsigned __int8)sub_1004B510((void *)a1, 100007, 0) )
  {
    v4 = *(_DWORD *)(a1 + 20);
    if ( v4 != -1 )
    {
      v5 = &off_1061BE18[4 * (*(_DWORD *)(a1 + 20) & 0xFFF) + 1];
      v6 = v4 >> 12;
      if ( off_1061BE18[4 * (*(_DWORD *)(a1 + 20) & 0xFFF) + 2] == v6 )
      {
        if ( *v5 )
        {
          if ( off_1061BE18[4 * (*(_DWORD *)(a1 + 20) & 0xFFF) + 2] == v6 )
            v7 = *v5;
          else
            v7 = 0;
          if ( *(_BYTE *)(v7 + 836) && sub_10023D10(*(_DWORD **)(a1 + 4), 10) )
            sub_1004DD00(a1, a2, a3);
        }
      }
    }
  }
  return nullsub_4(a1);
}
