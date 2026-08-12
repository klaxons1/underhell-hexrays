char *__thiscall pcharNode::getString(pcharNode *this, char *a2, char *a3)
{
  return getStringHelper(a2, a3, *((char **)this + 1), *((_DWORD *)this + 2));
}
