int __thiscall sub_1010A8A0(int this, int a2, _DWORD *a3, int a4)
{
  int v5; // edi
  int v6; // ecx
  _DWORD *v7; // edx
  unsigned int v8; // eax
  int *v9; // ecx
  int v10; // esi
  int v11; // ecx
  int i; // [esp+Ch] [ebp+Ch]

  if ( !*(_BYTE *)(this + 20) )
    return 0;
  if ( (*(_WORD *)(*(_DWORD *)(this + 24) + 18) & 0x400) != 0 )
    return 1;
  v5 = 0;
  if ( a4 <= 0 )
    return 1;
  v6 = a2 - (_DWORD)a3;
  v7 = a3;
  for ( i = a2 - (_DWORD)a3; ; v6 = i )
  {
    v8 = *(_DWORD *)((char *)v7 + v6);
    if ( v8 == -1
      || (v9 = (int *)((char *)off_103DCD74 + 16 * (*(_DWORD *)((char *)v7 + v6) & 0xFFF) + 4), v9[1] != v8 >> 12) )
    {
      v10 = 0;
    }
    else
    {
      v10 = *v9;
    }
    v11 = *v7 == -1 || *((_DWORD *)off_103DCD74 + 4 * (*v7 & 0xFFF) + 2) != *v7 >> 12
        ? 0
        : *((_DWORD *)off_103DCD74 + 4 * (*v7 & 0xFFF) + 1);
    if ( v10 != v11 )
      break;
    ++v5;
    ++v7;
    if ( v5 >= a4 )
      return 1;
  }
  return 0;
}
