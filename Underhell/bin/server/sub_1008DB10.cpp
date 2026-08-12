void __thiscall sub_1008DB10(_DWORD *this, int a2)
{
  int v2; // esi
  int v3; // edi
  int v4; // eax
  int v5; // edx
  int v6; // edx

  v2 = a2;
  if ( a2 )
  {
    v3 = dword_106B31C8;
    do
    {
      v4 = *(_DWORD *)(v2 + 16);
      if ( v4 != -1 )
      {
        v5 = this[5];
        if ( v4 < 0 || v4 >= *(_DWORD *)(v5 + 4) )
        {
          ++dword_10691DE0;
        }
        else
        {
          v6 = *(_DWORD *)(*(_DWORD *)(v5 + 8) + 4 * v4);
          if ( v6 )
          {
            if ( *(float *)(v3 + 12) < (double)*(float *)(v6 + 92) )
            {
              *(float *)(v6 + 92) = *(float *)(v3 + 12);
              v3 = dword_106B31C8;
            }
          }
        }
      }
      v2 = *(_DWORD *)(v2 + 40);
    }
    while ( v2 );
  }
}
