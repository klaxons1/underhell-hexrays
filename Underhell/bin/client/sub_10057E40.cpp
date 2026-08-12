float *__thiscall sub_10057E40(float *this)
{
  float *result; // eax

  sub_100347C0(this);
  result = (float *)(*(int (__thiscall **)(float *))(*(_DWORD *)this + 36))(this);
  this[305] = *result;
  this[306] = result[1];
  this[307] = result[2];
  return result;
}
