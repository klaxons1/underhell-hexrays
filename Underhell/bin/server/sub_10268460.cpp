void __thiscall sub_10268460(float *this, float a2, float a3, float a4)
{
  float *v5; // eax
  int *v6; // ecx
  float *v7; // eax
  int *v8; // ecx
  float *v9; // eax
  int *v10; // ecx

  if ( a2 != *this )
  {
    v5 = this - 419;
    if ( *((_BYTE *)this - 1592) )
    {
      *((_BYTE *)v5 + 88) |= 1u;
    }
    else
    {
      v6 = (int *)*((_DWORD *)v5 + 6);
      if ( v6 )
        sub_100194B0(v6, 1676);
    }
    *this = a2;
  }
  if ( a3 != this[1] )
  {
    v7 = this - 419;
    if ( *((_BYTE *)this - 1592) )
    {
      *((_BYTE *)v7 + 88) |= 1u;
    }
    else
    {
      v8 = (int *)*((_DWORD *)v7 + 6);
      if ( v8 )
        sub_100194B0(v8, 1676);
    }
    this[1] = a3;
  }
  if ( a4 != this[2] )
  {
    v9 = this - 419;
    if ( *((_BYTE *)this - 1592) )
    {
      *((_BYTE *)v9 + 88) |= 1u;
      this[2] = a4;
    }
    else
    {
      v10 = (int *)*((_DWORD *)v9 + 6);
      if ( v10 )
        sub_100194B0(v10, 1676);
      this[2] = a4;
    }
  }
}
