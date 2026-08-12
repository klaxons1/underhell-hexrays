int **__thiscall DName::DName(int **this, int a2)
{
  char v3; // al
  int *v4; // eax

  this[1] = (int *)((unsigned int)this[1] & 0xFFFF00FF);
  if ( a2 == 2 || a2 == 3 )
    v3 = a2;
  else
    v3 = 0;
  *this = 0;
  *((_BYTE *)this + 4) = v3;
  if ( a2 == 1 )
  {
    v4 = DNameStatusNode::make(1u);
    *this = v4;
    if ( !v4 )
      *((_BYTE *)this + 4) = 3;
  }
  return this;
}
