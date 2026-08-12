char __thiscall sub_1007DAB0(_DWORD *this, int a2, int a3)
{
  if ( this[3] != -1 )
  {
    this[1] = a3 != 0 ? 0x270F : 0;
    this[2] = -1;
    this[3] = -1;
  }
  this[4] = a3;
  this[5] = a2;
  *this = *(_DWORD *)(a2 + 4);
  return 1;
}
