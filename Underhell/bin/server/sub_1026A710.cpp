void __thiscall sub_1026A710(int this, int a2)
{
  int v3; // eax
  int v4; // ecx
  int v5; // eax
  const char *v6; // eax
  const char *v7; // eax

  if ( *(_DWORD *)(dword_106CEF04 + 48) )
  {
    v3 = *(_DWORD *)(this + 404);
    if ( v3 <= 19 )
      v4 = v3 < 0 ? 0 : v3;
    else
      v4 = 19;
    Msg("Switched to state: %d (%s)\n", v3, (&off_106549B0)[v4]);
  }
  v5 = *(_DWORD *)(this + 404);
  switch ( v5 )
  {
    case 1:
    case 2:
    case 3:
      sub_1026A200((_DWORD *)this, 0.25);
      v6 = *(const char **)(this + 4 * *(_DWORD *)(this + 404) + 224);
      if ( !v6 )
        v6 = String;
      sub_1026A1B0((_DWORD **)this, v6);
      *(float *)(this + 408) = *(float *)(dword_106B31C8 + 12);
      return;
    case 4:
    case 6:
    case 7:
    case 8:
    case 9:
    case 10:
    case 13:
    case 14:
    case 15:
    case 16:
    case 17:
    case 18:
    case 19:
      goto LABEL_11;
    case 5:
      *(float *)(this + 412) = -1.0;
LABEL_11:
      v7 = *(const char **)(this + 4 * v5 + 224);
      goto LABEL_15;
    case 11:
    case 12:
      if ( *(int *)(this + 388) >= 2 )
        v7 = *(const char **)(this + 272);
      else
        v7 = *(const char **)(this + 268);
LABEL_15:
      if ( !v7 )
        v7 = String;
      sub_1026A4D0((_DWORD *)this, v7);
      break;
    default:
      break;
  }
  *(float *)(this + 408) = *(float *)(dword_106B31C8 + 12);
}
