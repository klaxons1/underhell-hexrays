void __cdecl sub_10406BE0(int a1)
{
  int v1; // edx
  _DWORD *i; // edi
  int v3; // ecx
  _DWORD *v4; // eax
  _DWORD *v5; // ecx

  v1 = 0;
  if ( dword_106F06B0 > 0 )
  {
    for ( i = (_DWORD *)dword_106F06A4; ; i += 3 )
    {
      v3 = *i == -1 || off_1061BE18[4 * (*i & 0xFFF) + 2] != *i >> 12 ? 0 : off_1061BE18[4 * (*i & 0xFFF) + 1];
      if ( v3 == a1 )
        break;
      if ( ++v1 >= dword_106F06B0 )
        return;
    }
    if ( dword_106F06B0 > 0 )
    {
      v4 = (_DWORD *)(dword_106F06A4 + 12 * dword_106F06B0 - 12);
      v5 = (_DWORD *)(dword_106F06A4 + 12 * v1);
      *v5 = *v4;
      v5[1] = v4[1];
      v5[2] = v4[2];
      --dword_106F06B0;
    }
  }
}
