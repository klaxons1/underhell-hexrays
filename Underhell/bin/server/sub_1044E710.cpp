char __thiscall sub_1044E710(int *this, int a2, int a3, int *a4)
{
  int *v4; // ebp
  char v6; // bl
  int v7; // eax
  int v8; // eax

  v4 = a4;
  *a4 = 0;
  v6 = 1;
  dword_10701AB0 = a2;
  dword_10701ABC = 0;
  dword_10701AB4 = 1;
  this[15] = -1;
  sub_1044DC10(this);
  while ( !*(_BYTE *)(a3 + 20) )
  {
    v6 = sub_1044E5F0(this, a3, &a4);
    if ( !v6 || a4 == (int *)-1 )
      break;
    if ( this[15] == -1 )
      this[15] = (int)a4;
  }
  sub_1044DCF0(this);
  sub_1044D790(this);
  v7 = this[15];
  if ( v7 == -1 )
    v8 = 0;
  else
    v8 = *(_DWORD *)(*this + 20 * v7);
  *v4 = v8;
  sub_1044DC10(this);
  if ( !v6 )
  {
    sub_10449890(*v4);
    *v4 = 0;
  }
  return v6;
}
