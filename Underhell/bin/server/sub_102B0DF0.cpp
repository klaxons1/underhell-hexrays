int __thiscall sub_102B0DF0(float *this, int a2)
{
  int v3; // ecx
  int v4; // edi
  double v5; // st7
  double v6; // st7
  int result; // eax
  float v8; // [esp+14h] [ebp-4h]

  v3 = dword_106B31C8;
  v4 = 0;
  if ( *(float *)(dword_106B31C8 + 12) > (double)this[349] )
  {
    this[349] = *(float *)(dword_106B31C8 + 12);
    v3 = dword_106B31C8;
  }
  v5 = this[31] - this[30];
  if ( v5 <= 0.2 )
  {
    if ( v5 < 0.0 )
      v5 = 0.0;
  }
  else
  {
    v5 = 0.2;
  }
  v8 = v5;
  if ( *(float *)(v3 + 12) + v5 > this[349] )
  {
    (*(void (__thiscall **)(float *, int, float))(*(_DWORD *)this + 1132))(this, 3, this[349]);
    v4 = 1;
    this[349] = ((double (__thiscall *)(float *))*(_DWORD *)(*(_DWORD *)this + 1108))(this) + this[349];
    v3 = dword_106B31C8;
    v5 = v8;
  }
  if ( v5 + *(float *)(v3 + 12) <= this[349] )
    return v4;
  (*(void (__thiscall **)(float *, int, float))(*(_DWORD *)this + 1132))(this, 3, this[349]);
  v6 = ((double (__thiscall *)(float *))*(_DWORD *)(*(_DWORD *)this + 1108))(this);
  result = v4 + 1;
  this[349] = v6 + this[349];
  return result;
}
