int __thiscall sub_102218D0(_DWORD **this, int a2, int a3, int a4)
{
  int v4; // esi
  int v6; // ecx
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // eax
  _DWORD v12[1024]; // [esp+Ch] [ebp-1000h] BYREF

  v4 = 0;
  if ( a4 > 0 )
  {
    v6 = a3 - (_DWORD)v12;
    do
    {
      if ( v4 >= 1024 )
        break;
      v7 = *(_DWORD *)((char *)&v12[v4] + v6);
      if ( v7 )
      {
        v9 = *(_DWORD *)(v7 + 12);
        v10 = v9 ? (*(int (__thiscall **)(int))(*(_DWORD *)v9 + 20))(v9) : 0;
        v8 = sub_10221050(this[7], v10);
        v6 = a3 - (_DWORD)v12;
      }
      else
      {
        v8 = -1;
      }
      v12[v4++] = v8;
    }
    while ( v4 < a4 );
  }
  return ((int (__thiscall *)(_DWORD **, int, _DWORD *, int))(*this)[12])(this, a2, v12, a4);
}
