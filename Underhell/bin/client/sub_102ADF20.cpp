int __stdcall sub_102ADF20(int a1, int *a2)
{
  int v2; // eax
  int v3; // esi
  int v4; // ebp
  int *v5; // eax
  int v6; // ebx
  int i; // eax

  sub_102ADDF0((_DWORD *)a1);
  if ( *(_BYTE *)(a1 + 20) )
    return 7;
  v2 = *(_DWORD *)(a1 + 12);
  if ( v2 == *(_DWORD *)(a1 + 28) )
    return 7;
  v3 = 0;
  switch ( *(_BYTE *)(*(_DWORD *)a1 - *(_DWORD *)(a1 + 32) + v2) )
  {
    case '"':
      v5 = sub_1022E1D0();
      v3 = sub_1022EAF0(a1, (int)v5, 0) - 1;
      if ( v3 <= 1 || *(_BYTE *)(*(_DWORD *)a1 + *(_DWORD *)(a1 + 12) - *(_DWORD *)(a1 + 32) + v3 - 1) != 34 )
      {
        sub_102ADD10((int)word_10482A60, "Unexpected EOF in quoted string");
        goto LABEL_13;
      }
      v4 = 5;
      break;
    case ',':
      v3 = 1;
      v4 = 4;
      break;
    case '[':
      v3 = 1;
      v4 = 2;
      break;
    case ']':
      v3 = 1;
      v4 = 3;
      break;
    case '{':
      v3 = 1;
      v4 = 0;
      break;
    case '}':
      v3 = 1;
      v4 = 1;
      break;
    default:
LABEL_13:
      v4 = -1;
      break;
  }
  sub_1022EEF0(a2, *(_DWORD *)a1 + *(_DWORD *)(a1 + 12) - *(_DWORD *)(a1 + 32), v3, v3, 9);
  sub_1022E490(a1, 1, v3);
  v6 = *a2;
  for ( i = 0; i < v3; ++i )
  {
    if ( *(_BYTE *)(i + v6) == 10 )
      ++dword_10482AE4;
  }
  return v4;
}
