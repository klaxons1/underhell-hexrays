char *__thiscall DNameStatusNode::getString(DNameStatusNode *this, char *a2, char *a3)
{
  if ( *((_DWORD *)this + 1) == 1 )
    return getStringHelper(a2, a3, " ?? ", 4);
  else
    return a2;
}
