int __stdcall sub_100D4BD0(const char *a1, int a2)
{
  int v2; // eax
  const char *v4; // ecx
  const char *v5; // eax

  v2 = *(_DWORD *)(a2 + 4);
  if ( !v2 )
    return Msg("%s:  unmapped\n", a1);
  v4 = "relative";
  if ( !*(_DWORD *)(a2 + 8) )
    v4 = "absolute";
  switch ( v2 )
  {
    case 1:
      v5 = "Forward";
      break;
    case 2:
      v5 = "Look";
      break;
    case 3:
      v5 = "Side";
      break;
    case 4:
      v5 = "Turn";
      break;
    default:
      v5 = "Unknown";
      break;
  }
  return Msg("%s:  mapped to %s (%s)\n", a1, v5, v4);
}
