void __thiscall DName::doPchar(DName *this, char *a2, unsigned int a3)
{
  pcharNode *v4; // eax
  pcharNode *Memory; // eax
  char v6; // cl

  if ( *(_DWORD *)this )
  {
    *((_DWORD *)this + 1) &= 0xFFFF00FF;
    *((_BYTE *)this + 4) = 3;
    *(_DWORD *)this = 0;
    return;
  }
  if ( !a2 || !a3 )
  {
    *((_BYTE *)this + 4) = 2;
    return;
  }
  if ( a3 == 1 )
  {
    Memory = (pcharNode *)_HeapManager::getMemory((_HeapManager *)&dword_10482840, 8u, 0);
    if ( Memory )
    {
      v6 = *a2;
      *(_DWORD *)Memory = off_103B690C;
      *((_BYTE *)Memory + 4) = v6;
      goto LABEL_11;
    }
  }
  else
  {
    v4 = (pcharNode *)_HeapManager::getMemory((_HeapManager *)&dword_10482840, 0xCu, 0);
    if ( v4 )
    {
      Memory = pcharNode::pcharNode(v4, a2, a3);
      goto LABEL_11;
    }
  }
  Memory = 0;
LABEL_11:
  *(_DWORD *)this = Memory;
  if ( !Memory )
    *((_BYTE *)this + 4) = 3;
}
