char __thiscall sub_101F1CD0(unsigned int *this, int *a2)
{
  unsigned int v3; // eax
  int v4; // eax

  if ( (int *)sub_100CF460(this) == a2 )
  {
    sub_101EDFB0((int)this);
    (*(void (__thiscall **)(int *, _DWORD))(*a2 + 996))(a2, 0);
    sub_100EC4A0(a2, -1.0, 0);
    sub_100EC3F0(a2, 0, 0.0, 0);
  }
  v3 = this[1057];
  if ( v3 == -1 || off_1061BE18[4 * (this[1057] & 0xFFF) + 2] != v3 >> 12 )
    v4 = 0;
  else
    v4 = off_1061BE18[4 * (this[1057] & 0xFFF) + 1];
  if ( (int *)v4 == a2 )
    (*(void (__thiscall **)(unsigned int *, _DWORD))(*this + 1236))(this, 0);
  return sub_100CD650(this, (int)a2);
}
