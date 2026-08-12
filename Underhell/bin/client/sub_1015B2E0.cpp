unsigned int __thiscall sub_1015B2E0(int this, int a2)
{
  unsigned int v3; // eax
  unsigned int v4; // edi
  int *v5; // edx
  unsigned int v6; // ecx
  int v7; // edx
  unsigned int result; // eax
  int (__stdcall *v9)(_DWORD); // edx

  sub_1002B830(this, a2);
  v3 = *(_DWORD *)(this + 1960);
  if ( v3 != -1 )
  {
    v4 = v3 >> 12;
    v5 = (int *)((char *)off_103DCD74 + 16 * (*(_DWORD *)(this + 1960) & 0xFFF) + 4);
    if ( *((_DWORD *)off_103DCD74 + 4 * (*(_DWORD *)(this + 1960) & 0xFFF) + 2) == *(_DWORD *)(this + 1960) >> 12 && *v5 )
    {
      v6 = *(_DWORD *)(this + 2100);
      if ( v6 == -1 )
      {
LABEL_8:
        if ( *((_DWORD *)off_103DCD74 + 4 * (*(_DWORD *)(this + 1960) & 0xFFF) + 2) == v4 )
          v7 = *v5;
        else
          v7 = 0;
        (*(void (__thiscall **)(int, int))(*(_DWORD *)(this - 8) + 748))(this - 8, v7);
        return (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)(this - 8) + 408))(this - 8, -1293.0);
      }
      if ( *((_DWORD *)off_103DCD74 + 4 * (*(_DWORD *)(this + 2100) & 0xFFF) + 2) != v6 >> 12
        || !*((_DWORD *)off_103DCD74 + 4 * (*(_DWORD *)(this + 2100) & 0xFFF) + 1) )
      {
        v4 = v3 >> 12;
        goto LABEL_8;
      }
    }
    result = v3 >> 12;
    if ( *((_DWORD *)off_103DCD74 + 4 * (*(_DWORD *)(this + 1960) & 0xFFF) + 2) == result
      && *((_DWORD *)off_103DCD74 + 4 * (*(_DWORD *)(this + 1960) & 0xFFF) + 1) )
    {
      return result;
    }
  }
  result = *(_DWORD *)(this + 2100);
  if ( result != -1 )
  {
    result >>= 12;
    if ( *((_DWORD *)off_103DCD74 + 4 * (*(_DWORD *)(this + 2100) & 0xFFF) + 2) == result )
    {
      if ( *((_DWORD *)off_103DCD74 + 4 * (*(_DWORD *)(this + 2100) & 0xFFF) + 1) )
      {
        v9 = *(int (__stdcall **)(_DWORD))(*(_DWORD *)(this - 8) + 408);
        *(_BYTE *)(this + 2166) = 0;
        return v9(-1.0);
      }
    }
  }
  return result;
}
