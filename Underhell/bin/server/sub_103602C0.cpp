void __thiscall sub_103602C0(int this, int a2)
{
  int *v2; // edi
  int v3; // eax
  unsigned int v4; // ecx
  int *v5; // eax
  unsigned int v6; // ecx
  int v7; // eax
  int i; // esi
  int v9; // eax
  unsigned int *v10; // ecx
  unsigned int v11; // eax
  int v12; // eax

  if ( *(_BYTE *)(this + 4604) )
  {
    v2 = (int *)(this + 4312);
    v3 = sub_101BCB30((int *)(this + 4312), 0);
    if ( v3 )
    {
      v4 = *(_DWORD *)(v3 + 4);
      if ( v4 != -1 )
      {
        v5 = &off_1061BE18[4 * (*(_DWORD *)(v3 + 4) & 0xFFF) + 1];
        v6 = v4 >> 12;
        if ( v5[1] == v6 )
        {
          if ( *v5 )
          {
            v7 = v5[1] == v6 ? *v5 : 0;
            if ( *(_DWORD *)(v7 + 420) != a2 )
            {
              for ( i = 0; i < *v2; ++i )
              {
                v9 = sub_101BCB30(v2, i);
                if ( v9 )
                {
                  v10 = (unsigned int *)(v9 + 4);
                  v11 = *(_DWORD *)(v9 + 4);
                  if ( v11 != -1 && off_1061BE18[4 * (v11 & 0xFFF) + 2] == v11 >> 12 )
                  {
                    if ( off_1061BE18[4 * (v11 & 0xFFF) + 1] )
                    {
                      v12 = sub_1026A890(v10);
                      sub_100EBE30(v12, a2);
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
}
