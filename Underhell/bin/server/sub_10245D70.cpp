int __thiscall sub_10245D70(_DWORD *this, int a2)
{
  int result; // eax
  _DWORD *v3; // esi
  unsigned int v4; // ecx
  unsigned int v5; // eax
  _DWORD v6[4]; // [esp+0h] [ebp-14h] BYREF
  int v7; // [esp+10h] [ebp-4h] BYREF

  result = 0;
  if ( *this )
  {
    memset(&v6[1], 0, 12);
    v3 = this + 3;
    v6[0] = a2;
    if ( sub_100BAE70(this + 3, v6, &a2, &v7) )
      v4 = v7 | (a2 << 16);
    else
      v4 = -1;
    v5 = HIWORD(v4);
    if ( (signed int)HIWORD(v4) >= v3[3] || (unsigned __int16)v4 >= *(int *)(*v3 + 20 * v5 + 12) )
      return 0;
    else
      return *(_DWORD *)(*(_DWORD *)(*v3 + 20 * v5) + 16 * (unsigned __int16)v4 + 8);
  }
  return result;
}
