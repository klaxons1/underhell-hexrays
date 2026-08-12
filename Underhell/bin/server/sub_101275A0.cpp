int __thiscall sub_101275A0(int this)
{
  double v2; // st7
  int result; // eax
  double v4; // st7

  (*(void (__thiscall **)(int))(*(_DWORD *)this + 100))(this);
  v2 = 1.0 / *(float *)(this + 816);
  result = *(_DWORD *)(this + 836) - 1;
  *(_DWORD *)(this + 832) = 0;
  *(float *)(this + 816) = v2;
  switch ( result )
  {
    case 0:
      v4 = 0.0087299999;
      *(float *)(this + 840) = 0.0087299999;
      *(float *)(this + 844) = 0.0087299999;
      break;
    case 4:
      v4 = 0.043620002;
      *(float *)(this + 840) = 0.043620002;
      *(float *)(this + 844) = 0.043620002;
      break;
    case 9:
      v4 = 0.087159999;
      *(float *)(this + 840) = 0.087159999;
      *(float *)(this + 844) = 0.087159999;
      break;
    case 14:
      v4 = 0.13053;
      *(float *)(this + 840) = 0.13053;
      *(float *)(this + 844) = 0.13053;
      break;
    default:
      *(float *)(this + 840) = flt_106F1CA8;
      *(float *)(this + 844) = flt_106F1CAC;
      v4 = flt_106F1CB0;
      break;
  }
  *(float *)(this + 848) = v4;
  if ( !*(_BYTE *)(this + 828) )
    return sub_101272D0((int *)this);
  return result;
}
