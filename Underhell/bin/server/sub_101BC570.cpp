int *__thiscall sub_101BC570(int *this)
{
  int v2; // ecx
  int v3; // edx

  *this = 0;
  this[1] = 0;
  this[2] = 0;
  this[3] = 0;
  v2 = this[1];
  this[4] = 0xFFFF;
  this[5] = -1;
  this[6] = v2;
  this[7] = 0;
  this[8] = 0;
  this[9] = 0;
  this[10] = 0;
  this[11] = 0;
  if ( !*this )
    *this = (int)sub_1005D140;
  if ( this[2] < 64 && this[3] >= 0 )
  {
    v3 = this[1];
    this[2] = 64;
    if ( v3 )
    {
      this[1] = (*(int (__thiscall **)(_DWORD, int, int))(*g_pMemAlloc + 12))(g_pMemAlloc, v3, 1024);
      sub_1007CF10(this + 7, 64);
      return this;
    }
    this[1] = (*(int (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 4))(g_pMemAlloc, 1024);
  }
  sub_1007CF10(this + 7, 64);
  return this;
}
