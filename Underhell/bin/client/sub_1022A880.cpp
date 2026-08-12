__int64 __thiscall sub_1022A880(_DWORD *this, char *Str, __int64 a3)
{
  float *v3; // eax
  __int64 result; // rax

  v3 = (float *)sub_1022A6A0(this, Str, 0);
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
      result = *(_QWORD *)*((_DWORD *)v3 + 1);
      break;
    default:
      result = *((int *)v3 + 3);
      break;
  }
  return result;
}
