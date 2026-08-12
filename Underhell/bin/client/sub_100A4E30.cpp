_DWORD *__thiscall sub_100A4E30(_DWORD *this)
{
  _DWORD *result; // eax

  result = this;
  *(float *)this = 0.0;
  this[4] = 0;
  *((float *)this + 1) = 0.0;
  *((float *)this + 2) = 0.0;
  *((float *)this + 3) = 0.0;
  return result;
}
