int __thiscall sub_100A3C60(float *this, float *a2, float a3, float a4, int a5)
{
  this[1] = *a2;
  this[2] = a2[1];
  this[3] = a2[2];
  *((_DWORD *)this + 8) = a5;
  sub_100A2A20((int)this, (int)(this + 7), this + 1, a3, this + 4, this + 7);
  (*(void (__thiscall **)(float *))(*(_DWORD *)this + 4))(this);
  if ( 0.0 != a4 )
    (*(void (__thiscall **)(float *))(*(_DWORD *)this + 8))(this);
  (*(void (__thiscall **)(float *))(*(_DWORD *)this + 12))(this);
  return (*(int (__thiscall **)(float *))(*(_DWORD *)this + 16))(this);
}
