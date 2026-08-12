int __thiscall sub_1002A7F0(int *this, int a2)
{
  int *v3; // esi
  int v4; // edi

  if ( (*(_DWORD *)(a2 + 64) & 0x1000000) != 0 && *((_BYTE *)this + 225) != 1 )
  {
    v3 = this + 55;
    v4 = this[55] - (int)*(float *)(a2 + 52);
    if ( this[55] != v4 )
    {
      (*(void (__thiscall **)(int *, int *))(*this + 464))(this, this + 55);
      *v3 = v4;
    }
    if ( *v3 < -500 )
      sub_1025FAC0(this);
  }
  return sub_1024B1A0(a2);
}
