int __cdecl sub_100D08E0(int a1, int a2, int a3, int a4)
{
  int v4; // eax
  int v5; // ebx
  int v6; // ecx
  int v7; // edi
  int v8; // esi

  LOWORD(v4) = dword_10696C10;
  v5 = 0;
  if ( (unsigned __int16)dword_10696C10 != 0xFFFF )
  {
    v6 = dword_10696C04;
    do
    {
      v7 = 8 * (unsigned __int16)v4;
      v8 = *(_DWORD *)(v7 + v6);
      if ( !sub_100D1940(v8) )
      {
        if ( (*(_DWORD *)(v8 + 252) & 0x800) != 0 )
          sub_100DAE60(v8);
        if ( (unsigned __int8)sub_10113380(v8 + 580, a3, a4) && v5 < a2 )
          *(_DWORD *)(a1 + 4 * v5++) = v8;
      }
      v6 = dword_10696C04;
      v4 = *(unsigned __int16 *)(v7 + dword_10696C04 + 6);
    }
    while ( v4 != 0xFFFF );
  }
  return v5;
}
