DName *__thiscall DName::DName(DName *this, struct DName *a2)
{
  pDNameNode *Memory; // eax
  pDNameNode *v4; // eax

  if ( a2 )
  {
    Memory = (pDNameNode *)_HeapManager::getMemory((_HeapManager *)&dword_10482840, 8u, 0);
    if ( Memory )
      v4 = pDNameNode::pDNameNode(Memory, a2);
    else
      v4 = 0;
    *(_DWORD *)this = v4;
    *((_BYTE *)this + 4) = v4 != 0 ? 0 : 3;
  }
  else
  {
    *(_DWORD *)this = 0;
    *((_BYTE *)this + 4) = 0;
  }
  *((_DWORD *)this + 1) &= 0xFFFF00FF;
  return this;
}
