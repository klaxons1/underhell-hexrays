char __thiscall sub_102AF090(int *this, int a2, int a3, int *a4)
{
  int *v4; // ebp
  char v6; // bl
  int v7; // eax
  int v8; // eax
  int v9; // edx

  v4 = a4;
  *a4 = 0;
  v6 = 1;
  dword_10482AE0 = a2;
  dword_10482AEC = 0;
  dword_10482AE4 = 1;
  this[15] = -1;
  sub_102AE580(this);
  while ( !*(_BYTE *)(a3 + 20) )
  {
    v6 = sub_102AEF70(this, a3, &a4);
    if ( !v6 || a4 == (int *)-1 )
      break;
    if ( this[15] == -1 )
      this[15] = (int)a4;
  }
  sub_102AE660(this);
  sub_102AE100(this);
  v7 = this[15];
  if ( v7 == -1 )
    v8 = 0;
  else
    v8 = *(_DWORD *)(*this + 20 * v7);
  *v4 = v8;
  sub_102AE580(this);
  if ( !v6 )
  {
    sub_102AAF20(v9, *v4);
    *v4 = 0;
  }
  return v6;
}
