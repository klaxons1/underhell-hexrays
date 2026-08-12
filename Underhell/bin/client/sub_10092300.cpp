char __thiscall sub_10092300(_DWORD **this, int a2)
{
  char result; // al
  float *v4; // eax
  float *v5; // eax
  _DWORD *v6; // ecx

  switch ( a2 )
  {
    case 64:
      ((void (__thiscall *)(_DWORD **))(*this)[220])(this);
      return (*(int (__thiscall **)(_DWORD *, _DWORD))(*this[109] + 12))(this[109], 0);
    case 65:
      result = *((_BYTE *)this + 468) == 0;
      *((_BYTE *)this + 468) = result;
      break;
    case 28:
      v4 = (float *)this[110][70];
      v4[7] = *((float *)this + 111);
      v4[8] = *((float *)this + 112);
      v4[9] = *((float *)this + 113);
      v5 = (float *)this[110][70];
      v5[4] = *((float *)this + 114);
      v5[5] = *((float *)this + 115);
      v5[6] = *((float *)this + 116);
      v6 = this[110];
      *((float *)this + 118) = 0.0;
      *((float *)this + 119) = 0.0;
      return sub_1017F6B0(v6);
    default:
      return sub_10236C80(a2);
  }
  return result;
}
