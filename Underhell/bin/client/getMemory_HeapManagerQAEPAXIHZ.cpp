int __thiscall _HeapManager::getMemory(_HeapManager *this, unsigned int a2, int a3)
{
  unsigned int v3; // edi
  unsigned int v6; // eax
  _DWORD *Memory; // eax
  _DWORD *v8; // ecx

  v3 = (a2 + 7) & 0xFFFFFFF8;
  if ( a3 )
    return (*(int (__cdecl **)(unsigned int))this)((a2 + 7) & 0xFFFFFFF8);
  if ( !v3 )
    v3 = 8;
  v6 = *((_DWORD *)this + 4);
  if ( v6 >= v3 )
  {
    *((_DWORD *)this + 4) = v6 - v3;
  }
  else
  {
    if ( v3 > 0x1000 )
      return 0;
    Memory = _HeapManager::getMemory((_HeapManager *)&dword_10482840, 0x1004u, 1);
    if ( Memory )
      *Memory = 0;
    else
      Memory = 0;
    if ( !Memory )
      return 0;
    v8 = (_DWORD *)*((_DWORD *)this + 3);
    if ( v8 )
      *v8 = Memory;
    else
      *((_DWORD *)this + 2) = Memory;
    *((_DWORD *)this + 3) = Memory;
    *((_DWORD *)this + 4) = 4096 - v3;
  }
  return *((_DWORD *)this + 3) + *((_DWORD *)this + 4) + 4;
}
