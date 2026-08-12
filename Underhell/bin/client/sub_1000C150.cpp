char __thiscall sub_1000C150(int this)
{
  unsigned int v2; // eax
  _DWORD *v3; // ecx
  int v4; // esi

  v2 = *(_DWORD *)(this + 1960);
  if ( v2 != -1 )
  {
    v3 = (_DWORD *)((char *)off_103DCD74 + 16 * (*(_DWORD *)(this + 1960) & 0xFFF) + 4);
    if ( v3[1] == v2 >> 12 )
    {
      v4 = *v3;
      if ( *v3 )
      {
        if ( (*(unsigned __int8 (__thiscall **)(_DWORD))(*(_DWORD *)v4 + 512))(*v3) )
          (*(void (__thiscall **)(int))(*(_DWORD *)v4 + 504))(v4);
      }
    }
  }
  *(_BYTE *)(this + 1986) = 0;
  return 0;
}
