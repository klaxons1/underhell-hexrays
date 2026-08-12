int __thiscall sub_10266D80(_DWORD *this, int a2)
{
  int v2; // esi
  int result; // eax
  int v5; // edi
  int v6; // ebp
  unsigned __int8 v7; // al
  int v8; // edx
  int v9; // edi
  int v10; // ecx
  int v11; // eax
  _DWORD *v12; // esi
  int v13; // eax
  _DWORD *v14; // eax
  _DWORD *v15; // eax
  void *v16; // ecx
  int v17; // [esp+Ch] [ebp-8h]
  int v18; // [esp+10h] [ebp-4h]

  v2 = a2;
  result = 12 * a2;
  v5 = *(_DWORD *)(12 * a2 + this[72]);
  v18 = 12 * a2;
  v17 = v5;
  if ( v5 )
  {
    v6 = 0;
    if ( (int)this[63] > 0 )
    {
      do
      {
        v7 = *(_BYTE *)(this[60] + v6);
        if ( v7 != 0xFF )
        {
          v8 = *(_DWORD *)(v5 + 28);
          v9 = *(_DWORD *)(v8 + 4 * v6);
          v10 = this[54];
          v11 = 9 * v7;
          v12 = (_DWORD *)(v10 + 8 * v11 + 28);
          if ( v9 != -1 )
          {
            sub_102662D0((_DWORD *)(v10 + 8 * v11 + 28), *(_DWORD *)(v8 + 4 * v6));
            v13 = 24 * v9;
            *(_DWORD *)(v13 + v12[1]) = v9;
            *(_DWORD *)(v12[1] + v13 + 4) = v12[6];
            --v12[5];
            v12[6] = v9;
          }
          v5 = v17;
        }
        ++v6;
      }
      while ( v6 < this[63] );
      v2 = a2;
    }
    sub_1012D820(this + 97, &a2);
    v14 = (_DWORD *)sub_10229D00(32);
    if ( v14 )
      v15 = sub_10229D20(v14, (int)"ItemDeselected");
    else
      v15 = 0;
    (*(void (__thiscall **)(_DWORD *, _DWORD *))(*this + 180))(this, v15);
    sub_1012D820(this + 81, &a2);
    sub_10265FF0(this + 72, v2);
    *(_DWORD *)(this[72] + v18 + 8) = this[77];
    this[77] = a2;
    if ( *(_DWORD *)v5 )
      sub_1022AF00(*(void **)v5);
    v16 = *(void **)(v5 + 8);
    if ( v16 )
      sub_1022AF00(v16);
    sub_1011A810((int *)(v5 + 28));
    sub_10034930(v5);
    return (*(int (__thiscall **)(_DWORD *, _DWORD, _DWORD))(*this + 244))(this, 0, 0);
  }
  return result;
}
