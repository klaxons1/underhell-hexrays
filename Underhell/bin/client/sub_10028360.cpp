void __thiscall sub_10028360(_DWORD *this, int a2)
{
  int i; // esi
  int v3; // ebx
  int v4; // eax
  int v5; // edi
  _DWORD *v6; // edi
  _BYTE v7[48]; // [esp+4h] [ebp-4Ch] BYREF
  _BYTE v8[12]; // [esp+34h] [ebp-1Ch] BYREF
  _BYTE v9[12]; // [esp+40h] [ebp-10h] BYREF
  _DWORD *v10; // [esp+4Ch] [ebp-4h]

  v10 = this;
  if ( a2 )
  {
    if ( sub_10126DB0(a2) )
    {
      for ( i = 0; i < sub_10126DB0(a2); sub_10028280(v6, i, v7) )
      {
        v3 = sub_10127BF0(i);
        v4 = sub_10127C50(i);
        v5 = v4;
        if ( (*(_DWORD *)(v3 + 4) & 0x10000) != 0 )
        {
          sub_101EDA00(v3 + 12, 3, v9);
          sub_101ED860(v9, v10[321] + 48 * v5, v8);
          sub_101EE350(v7);
          sub_101EDA20(v8, 3, v7);
          v6 = v10;
        }
        else
        {
          v6 = v10;
          sub_101EDC00(v10[321] + 48 * v4, v3 + 12, v7);
        }
        (*(void (__thiscall **)(_DWORD *, int, _BYTE *))(*v6 + 728))(v6, i++, v7);
      }
    }
  }
}
