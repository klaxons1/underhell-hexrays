int __thiscall sub_10221970(_DWORD **this, int a2, int a3)
{
  int v3; // esi
  int v5; // ecx
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // eax
  _DWORD v11[1024]; // [esp+Ch] [ebp-1000h] BYREF

  v3 = 0;
  if ( a3 > 0 )
  {
    v5 = a2 - (_DWORD)v11;
    do
    {
      if ( v3 >= 1024 )
        break;
      v6 = *(_DWORD *)((char *)&v11[v3] + v5);
      if ( v6 )
      {
        v8 = *(_DWORD *)(v6 + 12);
        v9 = v8 ? (*(int (__thiscall **)(int))(*(_DWORD *)v8 + 20))(v8) : 0;
        v7 = sub_10221050(this[7], v9);
        v5 = a2 - (_DWORD)v11;
      }
      else
      {
        v7 = -1;
      }
      v11[v3++] = v7;
    }
    while ( v3 < a3 );
  }
  return ((int (__thiscall *)(_DWORD **, _DWORD *, int))(*this)[13])(this, v11, a3);
}
