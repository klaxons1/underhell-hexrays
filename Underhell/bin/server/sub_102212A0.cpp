int __thiscall sub_102212A0(_DWORD **this, int a2, int a3, int a4)
{
  int v4; // esi
  int i; // eax
  _DWORD v8[1024]; // [esp+Ch] [ebp-1000h] BYREF

  v4 = 0;
  if ( a4 > 0 )
  {
    for ( i = a3 - (_DWORD)v8; v4 < 1024; i = a3 - (_DWORD)v8 )
    {
      v8[v4] = sub_10221050(this[7], *(_DWORD *)((char *)&v8[v4] + i));
      if ( ++v4 >= a4 )
        break;
    }
  }
  return ((int (__thiscall *)(_DWORD **, int, _DWORD *, int))(*this)[12])(this, a2, v8, a4);
}
