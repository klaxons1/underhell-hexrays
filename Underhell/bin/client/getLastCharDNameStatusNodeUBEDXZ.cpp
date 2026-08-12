char __thiscall DNameStatusNode::getLastChar(DNameStatusNode *this)
{
  return *((_DWORD *)this + 1) != 1 ? 0 : 0x20;
}
