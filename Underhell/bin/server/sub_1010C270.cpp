_DWORD *__thiscall sub_1010C270(float *this, int a2, __int16 *a3)
{
  _DWORD *result; // eax

  *((_DWORD *)this + 4) = a2;
  result = (_DWORD *)(a2 - 1);
  switch ( a2 )
  {
    case 1:
      result = a3;
      *this = *(float *)a3;
      break;
    case 2:
    case 5:
      result = a3;
      *this = *(float *)a3;
      break;
    case 3:
    case 15:
      result = a3;
      *this = *(float *)a3;
      this[1] = *((float *)a3 + 1);
      this[2] = *((float *)a3 + 2);
      break;
    case 6:
      result = a3;
      *(_BYTE *)this = *(_BYTE *)a3;
      break;
    case 7:
      result = a3;
      *(_DWORD *)this = *a3;
      break;
    case 8:
      result = a3;
      *(_DWORD *)this = *(char *)a3;
      break;
    case 9:
      result = *(_DWORD **)a3;
      *this = *(float *)a3;
      break;
    case 12:
      result = sub_10019680((_DWORD *)this + 3, *(_DWORD *)a3);
      break;
    case 13:
      result = *(_DWORD **)a3;
      this[3] = *(float *)a3;
      break;
    default:
      *this = 0.0;
      this[4] = 0.0;
      break;
  }
  return result;
}
