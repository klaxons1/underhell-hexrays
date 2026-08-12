int __thiscall sub_1042AE10(_DWORD *this, char *Str, int a3)
{
  float *v3; // eax
  int result; // eax

  v3 = (float *)sub_1042ACB0(this, Str, 0);
  if ( !v3 )
    return a3;
  switch ( *((_BYTE *)v3 + 16) )
  {
    case 1:
      result = atoi(*((const char **)v3 + 1));
      break;
    case 3:
      result = (int)v3[3];
      break;
    case 5:
      result = _wtoi(*((const wchar_t **)v3 + 2));
      break;
    case 7:
      result = 0;
      break;
    default:
      result = *((_DWORD *)v3 + 3);
      break;
  }
  return result;
}
