int __thiscall sub_10078210(float *this, float a2, float a3)
{
  int v5; // eax

  this[5] = a2;
  if ( -1.0 == a3 )
  {
    (*(void (__thiscall **)(float *))(*(_DWORD *)this + 80))(this);
    return (*(int (__thiscall **)(float *, int))(*(_DWORD *)this + 76))(this, -1);
  }
  else if ( -2.0 == a3 )
  {
    return (*(int (__thiscall **)(float *, int))(*(_DWORD *)this + 76))(this, -1);
  }
  else
  {
    v5 = *(_DWORD *)this;
    this[6] = a3;
    return (*(int (__thiscall **)(float *, int))(v5 + 76))(this, -1);
  }
}
