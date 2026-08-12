char *__thiscall DName::getString(DName *this, char *a2, unsigned int a3)
{
  int (__thiscall ***v4)(_DWORD); // ecx
  char *Memory; // esi
  unsigned int v6; // edi
  char *v7; // eax

  v4 = *(int (__thiscall ****)(_DWORD))this;
  Memory = a2;
  if ( v4 )
  {
    if ( a2 )
    {
      v6 = a3;
    }
    else
    {
      v6 = (**v4)(v4) + 1;
      Memory = (char *)_HeapManager::getMemory((_HeapManager *)&dword_10482840, v6, 0);
      if ( !Memory )
        return Memory;
    }
    if ( *(_DWORD *)this )
      v7 = (char *)(*(int (__thiscall **)(_DWORD, char *, char *))(**(_DWORD **)this + 8))(
                     *(_DWORD *)this,
                     Memory,
                     &Memory[v6 - 1]);
    else
      v7 = Memory;
    *v7 = 0;
  }
  else if ( a2 )
  {
    *a2 = 0;
  }
  return Memory;
}
