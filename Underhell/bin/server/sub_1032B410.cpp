int __thiscall sub_1032B410(int *this, int a2)
{
  int *v3; // esi
  int v4; // edi

  v3 = this + 55;
  v4 = this[55] - (int)*(float *)(a2 + 52);
  if ( this[55] != v4 )
  {
    (*(void (__thiscall **)(int *, int *))(*this + 464))(this, this + 55);
    *v3 = v4;
  }
  if ( *v3 >= -40 )
    return (*(int (__thiscall **)(int *, int))(*this + 600))(this, a2);
  sub_1032A9D0((int)this, (int)this);
  return 1;
}
