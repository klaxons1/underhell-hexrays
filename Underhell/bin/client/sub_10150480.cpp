void sub_10150480()
{
  int v0; // eax
  _DWORD *v1; // esi
  int v2; // edi
  int *v3; // eax
  int v4; // ecx
  int v5; // eax

  v0 = sub_100422D0();
  if ( v0 )
  {
    v1 = (_DWORD *)(v0 + 3152);
    v2 = 48;
    do
    {
      if ( *v1 != -1 )
      {
        v3 = (int *)((char *)off_103DCD74 + 16 * (*v1 & 0xFFF) + 4);
        v4 = *v1 >> 12;
        if ( *((_DWORD *)off_103DCD74 + 4 * (*v1 & 0xFFF) + 2) == v4 )
        {
          if ( *v3 )
          {
            if ( *((_DWORD *)off_103DCD74 + 4 * (*v1 & 0xFFF) + 2) == v4 )
              v5 = *v3;
            else
              v5 = 0;
            sub_10150110(*(_WORD *)(v5 + 2088));
          }
        }
      }
      ++v1;
      --v2;
    }
    while ( v2 );
  }
}
