void sub_1024CD80()
{
  int v0; // esi
  _DWORD *v1; // edx
  int *v2; // edi
  unsigned int v3; // eax
  int v4; // eax

  v0 = 0;
  if ( dword_106C6E54 > 0 )
  {
    v1 = dword_106C6E48;
    v2 = off_1061BE18;
    do
    {
      v3 = v1[v0];
      if ( v3 != -1 && v2[4 * (v1[v0] & 0xFFF) + 2] == v3 >> 12 && v2[4 * (v1[v0] & 0xFFF) + 1] )
      {
        if ( v1[v0] == -1 || v2[4 * (v1[v0] & 0xFFF) + 2] != v1[v0] >> 12 )
          v4 = 0;
        else
          v4 = v2[4 * (v1[v0] & 0xFFF) + 1];
        sub_1025FAC0(v4);
        v1 = dword_106C6E48;
        v2 = off_1061BE18;
      }
      ++v0;
    }
    while ( v0 < dword_106C6E54 );
  }
}
