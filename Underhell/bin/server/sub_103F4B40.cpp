int __thiscall sub_103F4B40(int *this, int a2, char a3)
{
  int v4; // ebx
  int *v5; // ecx

  v4 = this[300] + 1;
  if ( *((_BYTE *)this + 84) )
  {
    *((_BYTE *)this + 88) |= 1u;
  }
  else
  {
    v5 = (int *)this[6];
    if ( v5 )
      sub_100194B0(v5, 1200);
  }
  this[300] = v4;
  if ( !a3 )
    (*(void (__thiscall **)(int *, int, _DWORD))(*this + 1164))(this, 274, 0.0);
  return sub_103F4920(this, a2, 1);
}
