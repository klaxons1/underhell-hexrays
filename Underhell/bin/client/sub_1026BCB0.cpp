int __thiscall sub_1026BCB0(_DWORD *this)
{
  int result; // eax
  int i; // esi
  int v4; // esi
  int (__thiscall ***v5)(void *, _BYTE *, int *); // ecx
  int v6; // [esp+10h] [ebp-10h] BYREF
  int v7; // [esp+14h] [ebp-Ch] BYREF
  _BYTE v8[4]; // [esp+18h] [ebp-8h] BYREF
  _BYTE v9[4]; // [esp+1Ch] [ebp-4h] BYREF

  result = (*(int (__thiscall **)(_DWORD *, int *, int *, _BYTE *, _BYTE *))(*this + 24))(this, &v6, &v7, v9, v8);
  for ( i = this[61]; i != -1; i = *(_DWORD *)(result + v4 + 8) )
  {
    v4 = 12 * i;
    v5 = *(int (__thiscall ****)(void *, _BYTE *, int *))(v4 + this[58]);
    if ( v5 )
      sub_10239D70(v5, (_BYTE *)(this[88] - v6 - v7));
    result = this[58];
  }
  return result;
}
