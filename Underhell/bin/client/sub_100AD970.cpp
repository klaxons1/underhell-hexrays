void __thiscall sub_100AD970(float *this, float a2, float a3, float a4)
{
  if ( a2 != *this )
  {
    (*(void (__thiscall **)(float *, float *))(*((_DWORD *)this - 27) + 4))(this - 27, this);
    *this = a2;
  }
  if ( a3 != this[1] )
  {
    (*(void (__thiscall **)(float *, float *))(*((_DWORD *)this - 27) + 4))(this - 27, this);
    this[1] = a3;
  }
  if ( a4 != this[2] )
  {
    (*(void (__thiscall **)(float *, float *))(*((_DWORD *)this - 27) + 4))(this - 27, this);
    this[2] = a4;
  }
}
