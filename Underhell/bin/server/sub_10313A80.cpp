double __thiscall sub_10313A80(int this, float a2, float a3, char a4)
{
  double result; // st7

  switch ( *(_DWORD *)(this + 4212) )
  {
    case 1:
      if ( !*(_BYTE *)(this + 4220) )
        goto LABEL_4;
      result = -*(float *)(dword_106E38E4 + 44);
      break;
    case 2:
      result = (double)(*(_BYTE *)(this + 4220) != 0 ? 7000 : -7000);
      break;
    case 3:
      result = a2;
      sub_103139F0((float *)this, a2, a3, a4);
      break;
    case 4:
      result = 1000.0 - *(float *)(dword_106E392C + 44);
      if ( !*(_BYTE *)(this + 4220) )
        result = -result;
      break;
    case 5:
      if ( *(_BYTE *)(this + 4220) )
LABEL_4:
        result = *(float *)(dword_106E38E4 + 44);
      else
        result = -*(float *)(dword_106E38E4 + 44);
      break;
    default:
      result = 0.0;
      break;
  }
  return result;
}
