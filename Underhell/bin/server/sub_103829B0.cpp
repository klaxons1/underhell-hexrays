int __thiscall sub_103829B0(_DWORD *this, int a2)
{
  int result; // eax

  if ( (this[62] & 0x10000) != 0 && a2 != 55 )
    return 89;
  switch ( a2 )
  {
    case 1:
    case 5:
    case 9:
      if ( !this[699] || !*((_BYTE *)this + 3892) )
        goto LABEL_18;
      result = 91;
      break;
    case 4:
      if ( (this[62] & 0x10000) == 0 )
        goto LABEL_12;
      result = 89;
      break;
    case 12:
    case 18:
LABEL_12:
      result = (*(int (__thiscall **)(_DWORD *, int))(*this + 1248))(this, 17);
      break;
    case 17:
      if ( *(float *)(dword_106B31C8 + 12) < (double)*((float *)this + 952)
        || *((_BYTE *)this + 3892) && !sub_1004AE20(this, 0, 1) )
      {
        result = 92;
      }
      else
      {
        result = 17;
      }
      break;
    case 24:
      result = 90;
      break;
    case 41:
      result = 88;
      break;
    default:
LABEL_18:
      result = sub_10069910(this, a2);
      break;
  }
  return result;
}
