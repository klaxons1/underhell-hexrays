void __thiscall DName::append(DName *this, struct DNameNode *a2)
{
  _DWORD *Memory; // eax
  int v4; // ecx

  if ( !a2
    || ((Memory = (_DWORD *)_HeapManager::getMemory((_HeapManager *)&dword_10482840, 0x10u, 0)) == 0
      ? (Memory = 0)
      : (_DWORD *)(v4 = *(_DWORD *)this, Memory[3] = -1, *Memory = &off_103B6930, Memory[1] = v4, Memory[2] = a2),
        (*(_DWORD *)this = Memory) == 0) )
  {
    *((_BYTE *)this + 4) = 3;
  }
}
