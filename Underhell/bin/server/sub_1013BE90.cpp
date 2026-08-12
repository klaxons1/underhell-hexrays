char __cdecl sub_1013BE90(int a1, int a2, int a3)
{
  int v3; // eax
  int v4; // eax
  _DWORD *v5; // ecx

  v3 = sub_10244B60(a1);
  if ( v3 >= 0 && dword_106B00A4 + 12 * v3 )
    return 0;
  v4 = 0;
  if ( dword_106B00B0 > 0 )
  {
    v5 = (_DWORD *)dword_106B00A4;
    while ( *v5 != a2 )
    {
      ++v4;
      v5 += 3;
      if ( v4 >= dword_106B00B0 )
        goto LABEL_7;
    }
    if ( dword_106B00A4 + 12 * v4 )
      return 0;
  }
LABEL_7:
  sub_1013BDE0(a1, a2, 0, a3);
  return 1;
}
