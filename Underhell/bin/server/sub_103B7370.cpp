void __thiscall sub_103B7370(int *this)
{
  int v2; // ebx
  float v3; // [esp+0h] [ebp-Ch]

  v3 = *(float *)(dword_106B31C8 + 12) + 0.05;
  sub_100EC4A0(this, v3, 0);
  if ( (this[63] & 0x800) != 0 )
    sub_100DAE60((int)this);
  ((void (__thiscall *)(int (__stdcall ***)(char), int *, int, int, _DWORD))(*off_1061B7A0)[3])(
    off_1061B7A0,
    this + 145,
    1,
    1,
    0);
  v2 = this[55];
  (*(void (__thiscall **)(int *, int *))(*this + 464))(this, this + 55);
  this[55] = v2 - 1;
  if ( v2 < 1 )
    sub_1025FAC0((int)this);
}
