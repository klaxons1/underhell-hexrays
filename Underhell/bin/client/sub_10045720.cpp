void __thiscall sub_10045720(_DWORD *this)
{
  _DWORD *v2; // esi
  int v3; // edi
  int *v4; // eax
  int v5; // ecx
  int v6; // eax

  v2 = this + 788;
  v3 = 48;
  do
  {
    if ( *v2 != -1 )
    {
      v4 = (int *)((char *)off_103DCD74 + 16 * (*v2 & 0xFFF) + 4);
      v5 = *v2 >> 12;
      if ( *((_DWORD *)off_103DCD74 + 4 * (*v2 & 0xFFF) + 2) == v5 )
      {
        if ( *v4 )
        {
          if ( *((_DWORD *)off_103DCD74 + 4 * (*v2 & 0xFFF) + 2) == v5 )
            v6 = *v4;
          else
            v6 = 0;
          (*(void (__thiscall **)(int, _DWORD *))(*(_DWORD *)v6 + 796))(v6, this);
        }
      }
    }
    ++v2;
    --v3;
  }
  while ( v3 );
}
