int __thiscall sub_1011ABC0(_DWORD **this, int a2, _DWORD *a3, int a4)
{
  int v4; // edi
  _DWORD *v6; // esi
  int v7; // eax
  _BYTE v9[4096]; // [esp+8h] [ebp-1000h] BYREF
  _BYTE *v10; // [esp+1014h] [ebp+Ch]

  v4 = 0;
  if ( a4 > 0 )
  {
    v6 = a3;
    v10 = (_BYTE *)(v9 - (_BYTE *)a3);
    do
    {
      if ( v4 >= 1024 )
        break;
      v7 = *v6 == -1 || *((_DWORD *)off_103DCD74 + 4 * (*v6 & 0xFFF) + 2) != *v6 >> 12
         ? 0
         : *((_DWORD *)off_103DCD74 + 4 * (*v6 & 0xFFF) + 1);
      *(_DWORD *)((char *)v6 + (_DWORD)v10) = sub_1011A880(this[7], v7);
      ++v4;
      ++v6;
    }
    while ( v4 < a4 );
  }
  return ((int (__thiscall *)(_DWORD **, int, _BYTE *, int))(*this)[12])(this, a2, v9, a4);
}
