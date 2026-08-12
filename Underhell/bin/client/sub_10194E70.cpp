void __thiscall sub_10194E70(_DWORD *this, int *a2, int a3, int a4, int a5, int a6, _DWORD *a7)
{
  unsigned int v8; // eax
  _DWORD *v9; // ecx
  unsigned int v10; // eax
  int v11; // ecx
  int v12; // eax
  _BYTE v13[48]; // [esp+8h] [ebp-30h] BYREF

  v8 = this[846];
  if ( v8 != -1 )
  {
    v9 = (_DWORD *)((char *)off_103DCD74 + 16 * (this[846] & 0xFFF) + 4);
    v10 = v8 >> 12;
    if ( v9[1] == v10 && *v9 && this[847] != -1 )
    {
      v11 = v9[1] == v10 ? *v9 : 0;
      v12 = (*(int (__thiscall **)(int))(*(_DWORD *)v11 + 164))(v11);
      if ( v12 )
      {
        (*(void (__thiscall **)(int, _DWORD, _BYTE *))(*(_DWORD *)(v12 + 4) + 144))(v12 + 4, this[847], v13);
        sub_101ED9E0(v13, this[321]);
        if ( a7 )
        {
          *a7 = 0;
          a7[1] = 0;
          a7[2] = 0;
          a7[3] = 0;
        }
        *a7 |= 1u;
      }
    }
  }
  sub_1002F4E0(this, a2, a3, a4, a5, a6, (int)a7);
}
