int __thiscall sub_10027920(_DWORD *this, void *a2)
{
  unsigned int v3; // ecx
  int *v4; // eax
  unsigned int v5; // ecx
  int v6; // esi
  _BYTE v8[48]; // [esp+4h] [ebp-30h] BYREF

  v3 = this[298];
  if ( v3 == -1 )
    return sub_101EE350(a2);
  v4 = (int *)((char *)off_103DCD74 + 16 * (v3 & 0xFFF) + 4);
  v5 = v3 >> 12;
  if ( v4[1] != v5 || !*v4 )
    return sub_101EE350(a2);
  if ( v4[1] == v5 )
    v6 = *v4;
  else
    v6 = 0;
  sub_10037F50(v6);
  sub_101F0AB0(v6 + 660, v8);
  sub_10037F50(this);
  return sub_101EDC00(this + 165, v8, a2);
}
