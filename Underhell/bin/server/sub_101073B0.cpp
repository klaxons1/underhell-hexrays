int __thiscall sub_101073B0(_DWORD *this, int a2, int a3, int a4, float a5, int a6, int a7)
{
  int v8; // ebx
  int v9; // eax
  _DWORD *v10; // ecx
  int result; // eax

  this[1022] = a2;
  sub_101C8220(this + 1023);
  v8 = *(_DWORD *)(*(_DWORD *)a2 + 284);
  if ( v8 )
  {
    sub_101C8220(this + 1023);
    sub_10107230(this + 1023, this[1026], v8, 0);
    if ( !this[1020] )
    {
      this[1020] = 12;
      this[1021] = this;
      memset(this, 0, 0xFF0u);
      v9 = 0;
      if ( (int)this[1020] > 0 )
      {
        v10 = this + 52;
        do
        {
          *v10 = -9999;
          ++v9;
          v10 += 85;
        }
        while ( v9 < this[1020] );
      }
    }
  }
  else
  {
    this[1020] = 0;
  }
  sub_10425040(a3, a4, this + 1033);
  *((float *)this + 1046) = a5;
  result = a7;
  this[1045] = a6;
  this[1047] = a7;
  return result;
}
