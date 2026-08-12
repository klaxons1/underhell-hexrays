bool __thiscall sub_101ADFF0(float *this)
{
  int v2; // edx
  bool result; // al

  this[204] = 0.0;
  this[205] = 0.0;
  this[206] = 1.0;
  (*(void (__thiscall **)(float *, _DWORD, _DWORD, float *))(*(_DWORD *)this + 528))(this, 0, 0, this + 201);
  sub_100E0970((int)this, v2, 0, 0);
  result = ((_BYTE)this[62] & 1) == 0;
  *((_BYTE *)this + 844) = result;
  return result;
}
