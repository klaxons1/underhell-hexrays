int __thiscall sub_1011A880(_DWORD *this, int a2)
{
  int v2; // ebx
  unsigned int v4; // eax
  int v6; // edi
  int v7; // edx
  _DWORD *i; // esi
  unsigned int v9; // eax
  int v10; // ecx
  int v11; // [esp+Ch] [ebp-Ch] BYREF
  int v12; // [esp+14h] [ebp-4h] BYREF

  v2 = a2;
  if ( !a2 )
    return -1;
  if ( sub_1011A1C0(this + 346) )
  {
    v11 = v2;
    if ( sub_1011A210(this + 346, &v11, &a2, &v12) )
    {
      v4 = v12 | (a2 << 16);
      if ( v4 != -1 )
        return *(_DWORD *)(*(_DWORD *)(this[346] + 20 * HIWORD(v4)) + 8 * (unsigned __int16)v12 + 4);
    }
    return -1;
  }
  v6 = this[343];
  v7 = 0;
  if ( v6 <= 0 )
    return -1;
  for ( i = (_DWORD *)this[344]; ; i += 14 )
  {
    v9 = i[4];
    if ( v9 == -1 || *((_DWORD *)off_103DCD74 + 4 * (i[4] & 0xFFF) + 2) != v9 >> 12 )
      v10 = 0;
    else
      v10 = *((_DWORD *)off_103DCD74 + 4 * (i[4] & 0xFFF) + 1);
    if ( v10 == a2 )
      break;
    if ( ++v7 >= v6 )
      return -1;
  }
  return *i;
}
