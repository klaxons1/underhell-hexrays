int __thiscall sub_101A8A60(int this, int a2)
{
  int result; // eax
  unsigned __int16 v3; // bx
  int v4; // edi
  int v5; // ecx
  int v6; // esi
  unsigned int v7; // eax
  int *v8; // ecx
  int v9; // ecx

  result = *(unsigned __int16 *)(this + 30);
  if ( result >= *(_DWORD *)(dword_1044CB04 + 48) )
  {
    v3 = *(_WORD *)(this + 24);
    v4 = this + 12;
    v5 = *(_DWORD *)(this + 12);
    v6 = 8 * v3;
    if ( *(_DWORD *)(v5 + v6) != -1
      && *((_DWORD *)off_103DCD74 + 4 * (*(_DWORD *)(v5 + 8 * v3) & 0xFFF) + 2) == *(_DWORD *)(v5 + 8 * v3) >> 12
      && *((_DWORD *)off_103DCD74 + 4 * (*(_DWORD *)(v5 + 8 * v3) & 0xFFF) + 1) )
    {
      v7 = *(_DWORD *)(v5 + 8 * v3);
      if ( v7 == -1
        || (v8 = (int *)((char *)off_103DCD74 + 16 * (*(_DWORD *)(v5 + 8 * v3) & 0xFFF) + 4), v8[1] != v7 >> 12) )
      {
        v9 = 0;
      }
      else
      {
        v9 = *v8;
      }
      (*(void (__stdcall **)(_DWORD))(*(_DWORD *)v9 + 408))(*((float *)off_103DC81C + 3));
    }
    sub_1003A300((int *)v4, v3);
    result = *(_DWORD *)v4;
    *(_WORD *)(*(_DWORD *)v4 + v6 + 6) = *(_WORD *)(v4 + 16);
    *(_WORD *)(v4 + 16) = v3;
  }
  return result;
}
