int __thiscall sub_100CED10(_DWORD *this, int a2)
{
  int result; // eax
  int v3; // ebx
  char *v4; // edi
  int v5; // eax
  _BYTE v6[512]; // [esp+Ch] [ebp-20Ch] BYREF
  int i; // [esp+20Ch] [ebp-Ch]
  _DWORD *v8; // [esp+210h] [ebp-8h]
  char v9; // [esp+217h] [ebp-1h]

  v8 = this;
  for ( i = 16; i >= 0; --i )
  {
    v9 = 0;
    result = sub_100CD120(v8 + 44);
    v3 = result;
    if ( result == -1 )
      break;
    do
    {
      v4 = (char *)sub_1022CF00(v8[45] + 36 * v3 + 20);
      v6[0] = 0;
      if ( *v4 == 35 )
      {
        v5 = (*(int (__thiscall **)(int, char *))(*(_DWORD *)dword_1047CA78 + 8))(dword_1047CA78, v4);
        if ( v5 )
        {
          v4 = v6;
          (*(void (__thiscall **)(int, int, _BYTE *, int))(*(_DWORD *)dword_1047CA78 + 16))(dword_1047CA78, v5, v6, 512);
        }
      }
      if ( sub_100CBDD0(a2, *(char **)(v8[45] + 36 * v3 + 16), v4) )
        v9 = 1;
      result = sub_100CD1C0(v8 + 44, v3);
      v3 = result;
    }
    while ( result != -1 );
    if ( !v9 )
      break;
  }
  return result;
}
