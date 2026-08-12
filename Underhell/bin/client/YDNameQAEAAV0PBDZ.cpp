DName *__thiscall DName::operator+=(DName *this, char *a2)
{
  pcharNode *Memory; // eax
  unsigned int v4; // edx
  struct DNameNode *v5; // eax

  if ( *((char *)this + 4) <= 1 && a2 && *a2 )
  {
    if ( *(_DWORD *)this )
    {
      Memory = (pcharNode *)_HeapManager::getMemory((_HeapManager *)&dword_10482840, 0xCu, 0);
      if ( Memory )
      {
        v4 = 0;
        if ( *a2 )
        {
          do
            ++v4;
          while ( a2[v4] );
        }
        v5 = pcharNode::pcharNode(Memory, a2, v4);
      }
      else
      {
        v5 = 0;
      }
      DName::append(this, v5);
    }
    else
    {
      DName::operator=(this, a2);
    }
  }
  return this;
}
