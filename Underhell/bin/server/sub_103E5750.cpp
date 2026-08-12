void __userpurge sub_103E5750(int a1@<ecx>, int a2@<esi>, _DWORD *a3, int a4, int a5)
{
  unsigned int v5; // ecx
  int *v6; // eax
  unsigned int v7; // ecx

  if ( *(_DWORD *)(a5 + 80) == 1 )
  {
    v5 = *(_DWORD *)(a1 + 1564);
    if ( v5 != -1 )
    {
      v6 = &off_1061BE18[4 * (v5 & 0xFFF) + 1];
      v7 = v5 >> 12;
      if ( v6[1] == v7 )
      {
        if ( *v6 )
        {
          if ( v6[1] == v7 )
            sub_100D9E70((int *)*v6, a2, a3);
          else
            sub_100D9E70(0, a2, a3);
        }
      }
    }
  }
}
