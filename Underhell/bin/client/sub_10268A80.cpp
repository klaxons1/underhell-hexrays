int __thiscall sub_10268A80(_DWORD *this)
{
  int v2; // esi
  int i; // ebx
  int v4; // esi
  int v6; // [esp+Ch] [ebp-8h] BYREF
  _BYTE v7[4]; // [esp+10h] [ebp-4h] BYREF

  v2 = this[56];
  for ( i = 0; v2 != -1; v2 = *(_DWORD *)(v4 + this[53] + 8) )
  {
    v4 = 12 * v2;
    sub_102361D0(*(int (__thiscall ****)(void *, int, int))(v4 + this[53]), (int)&v6, (int)v7);
    if ( v6 > i )
      i = v6 + 25;
  }
  return i;
}
