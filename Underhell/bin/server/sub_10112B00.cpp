float *__thiscall sub_10112B00(_BYTE *this, int a2, float *a3, float *a4)
{
  _BYTE *v5; // edi
  float *result; // eax

  v5 = this + 40;
  if ( (_BYTE)a2 != this[40] )
  {
    (*(void (__thiscall **)(_BYTE *, _BYTE *))(*(_DWORD *)this + 72))(this, this + 40);
    *v5 = a2;
  }
  if ( a2 != 3 )
    return (float *)sub_101126F0((int *)this);
  sub_10111320((float *)this + 11, a3);
  result = sub_10111380((float *)this + 14, a4);
  *((float *)this + 17) = *a3;
  *((float *)this + 18) = a3[1];
  *((float *)this + 19) = a3[2];
  *((float *)this + 20) = *a4;
  *((float *)this + 21) = a4[1];
  *((float *)this + 22) = a4[2];
  return result;
}
