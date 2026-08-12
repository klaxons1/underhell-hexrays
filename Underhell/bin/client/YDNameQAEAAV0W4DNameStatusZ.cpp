int **__thiscall DName::operator+=(int **this, int a2)
{
  int *v3; // eax

  if ( *((char *)this + 4) <= 1 )
  {
    if ( !*this || a2 == 2 || a2 == 3 )
    {
      DName::operator=(this, a2);
    }
    else if ( a2 )
    {
      v3 = DNameStatusNode::make(a2);
      DName::append((DName *)this, (struct DNameNode *)v3);
    }
  }
  return this;
}
