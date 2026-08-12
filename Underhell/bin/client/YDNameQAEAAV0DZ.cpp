DName *__thiscall DName::operator+=(DName *this, char a2)
{
  struct DNameNode *Memory; // eax

  if ( *((char *)this + 4) <= 1 && a2 )
  {
    if ( *(_DWORD *)this )
    {
      Memory = (struct DNameNode *)_HeapManager::getMemory((_HeapManager *)&dword_10482840, 8u, 0);
      if ( Memory )
      {
        *(_DWORD *)Memory = off_103B690C;
        *((_BYTE *)Memory + 4) = a2;
      }
      else
      {
        Memory = 0;
      }
      DName::append(this, Memory);
    }
    else
    {
      DName::operator=(this, a2);
    }
  }
  return this;
}
