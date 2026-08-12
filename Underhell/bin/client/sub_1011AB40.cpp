int __thiscall sub_1011AB40(_DWORD **this, int a2, int a3)
{
  int v3; // esi
  int i; // eax
  _DWORD v7[1024]; // [esp+Ch] [ebp-1000h] BYREF

  v3 = 0;
  if ( a3 > 0 )
  {
    for ( i = a2 - (_DWORD)v7; v3 < 1024; i = a2 - (_DWORD)v7 )
    {
      v7[v3] = sub_1011A880(this[7], *(_DWORD *)((char *)&v7[v3] + i));
      if ( ++v3 >= a3 )
        break;
    }
  }
  return ((int (__thiscall *)(_DWORD **, _DWORD *, int))(*this)[13])(this, v7, a3);
}
