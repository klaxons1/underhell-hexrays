double __thiscall sub_1022A940(_DWORD *this, char *Str, float a3)
{
  float *v3; // eax
  double result; // st7

  v3 = (float *)sub_1022A6A0(this, Str, 0);
  if ( !v3 )
    return a3;
  switch ( *((_BYTE *)v3 + 16) )
  {
    case 1:
      result = atof((const char *)*((_DWORD *)v3 + 1));
      break;
    case 2:
      result = (double)*((int *)v3 + 3);
      break;
    case 3:
      result = v3[3];
      break;
    case 5:
      result = _wtof((const wchar_t *)*((_DWORD *)v3 + 2));
      break;
    case 7:
      result = (double)*(unsigned __int64 *)*((_DWORD *)v3 + 1);
      break;
    default:
      result = 0.0;
      break;
  }
  return result;
}
