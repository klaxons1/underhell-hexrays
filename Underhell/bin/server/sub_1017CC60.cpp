void __thiscall sub_1017CC60(float *this, float *a2, __int64 a3)
{
  *this = *a2;
  this[1] = a2[1];
  this[2] = a2[2];
  *((_DWORD *)this + 4) = 3;
  sub_1010DA50(
    this,
    *(_DWORD *)this,
    *((_DWORD *)this + 1),
    *((_DWORD *)this + 2),
    *((_DWORD *)this + 3),
    *((_DWORD *)this + 4),
    a3,
    0.0);
}
