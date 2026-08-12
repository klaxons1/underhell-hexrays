pcharNode *__thiscall pcharNode::pcharNode(pcharNode *this, const char *a2, unsigned int a3)
{
  unsigned int v3; // edi
  int Memory; // eax
  const char *v6; // ecx

  v3 = a3;
  *(_DWORD *)this = &off_103B693C;
  if ( a3 && a2 )
  {
    Memory = _HeapManager::getMemory((_HeapManager *)&dword_10482840, a3, 0);
    *((_DWORD *)this + 1) = Memory;
    *((_DWORD *)this + 2) = a3;
    if ( Memory )
    {
      v6 = &a2[-Memory];
      do
      {
        *(_BYTE *)Memory = v6[Memory];
        ++Memory;
        --v3;
      }
      while ( v3 );
    }
  }
  else
  {
    *((_DWORD *)this + 1) = 0;
    *((_DWORD *)this + 2) = 0;
  }
  return this;
}
