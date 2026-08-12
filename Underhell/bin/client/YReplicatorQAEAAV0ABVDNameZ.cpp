_DWORD *__thiscall Replicator::operator+=(_DWORD *this, _DWORD *a2)
{
  _DWORD *Memory; // eax

  if ( *this != 9 && *a2 )
  {
    Memory = (_DWORD *)_HeapManager::getMemory((_HeapManager *)&dword_10482840, 8u, 0);
    if ( Memory )
    {
      *Memory = *a2;
      Memory[1] = a2[1];
    }
    else
    {
      Memory = 0;
    }
    if ( Memory )
      this[++*this + 1] = Memory;
  }
  return this;
}
