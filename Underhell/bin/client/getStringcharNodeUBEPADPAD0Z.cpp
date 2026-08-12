char *__thiscall charNode::getString(charNode *this, char *a2, char *a3)
{
  char *result; // eax

  result = a2;
  if ( a2 < a3 )
  {
    *a2 = *((_BYTE *)this + 4);
    return a2 + 1;
  }
  return result;
}
