char __cdecl sub_10020210(_DWORD *a1, int a2, int a3)
{
  int v3; // eax
  char result; // al

  v3 = *a1 + *(_DWORD *)(*a1 + 160);
  if ( (*(_BYTE *)(a1[11] + 4 * a2) & 4) == 0 )
    return 0;
  switch ( *(_DWORD *)(216 * a2 + v3 + 164) )
  {
    case 1:
      sub_1001CE10(v3, a2, a3);
      result = 1;
      break;
    case 2:
      sub_1001D080(v3, a2, a3);
      result = 1;
      break;
    case 3:
      sub_1001D350(v3, a2, a3, 0);
      result = 1;
      break;
    case 4:
      sub_1001D350(v3, a2, a3, (int)a1);
      result = 1;
      break;
    default:
      return 0;
  }
  return result;
}
