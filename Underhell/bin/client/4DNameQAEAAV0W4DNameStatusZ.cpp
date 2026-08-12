int **__thiscall DName::operator=(int **this, int a2)
{
  int *v3; // eax

  this[1] = (int *)((unsigned int)this[1] & 0xFFFF00FF);
  *((_BYTE *)this + 4) = a2;
  if ( a2 == 1 )
  {
    v3 = DNameStatusNode::make(1u);
    *this = v3;
    if ( !v3 )
      *((_BYTE *)this + 4) = 3;
  }
  else
  {
    *this = 0;
  }
  return this;
}
