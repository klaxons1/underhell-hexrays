int __thiscall sub_10221440(_DWORD **this, _DWORD *a2, int a3)
{
  int v3; // edi
  _DWORD *v5; // esi
  int v6; // eax
  _BYTE v8[4096]; // [esp+8h] [ebp-1000h] BYREF
  _BYTE *v9; // [esp+1010h] [ebp+8h]

  v3 = 0;
  if ( a3 > 0 )
  {
    v5 = a2;
    v9 = (_BYTE *)(v8 - (_BYTE *)a2);
    do
    {
      if ( v3 >= 1024 )
        break;
      v6 = *v5 == -1 || off_1061BE18[4 * (*v5 & 0xFFF) + 2] != *v5 >> 12 ? 0 : off_1061BE18[4 * (*v5 & 0xFFF) + 1];
      *(_DWORD *)((char *)v5 + (_DWORD)v9) = sub_10221050(this[7], v6);
      ++v3;
      ++v5;
    }
    while ( v3 < a3 );
  }
  return ((int (__thiscall *)(_DWORD **, _BYTE *, int))(*this)[13])(this, v8, a3);
}
