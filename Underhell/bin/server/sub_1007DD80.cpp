int __thiscall sub_1007DD80(int *this)
{
  int v2; // ecx
  int result; // eax
  int v4; // ebx
  int v5; // eax
  int v6; // edi
  int v7; // eax
  int v8; // eax
  _DWORD *v9; // [esp+4h] [ebp-4h]

  v2 = this[9];
  result = *(_DWORD *)(v2 + 12);
  if ( result == -1 )
  {
    v4 = *(_DWORD *)(v2 + 8);
    v5 = sub_10039AE0((_DWORD *)this[1], v4, 0);
    result = sub_100BDCE0(v5);
    if ( result == -1 )
    {
      v6 = this[9];
      v9 = (_DWORD *)this[1];
      sub_100A5FB0(v6);
      v7 = sub_100A5FB0(v6);
      sub_10008F90(v7);
      sub_10029660(v9, (int)"No appropriate sequence for movement activity %s (%d)\n");
      if ( v4 == 16 )
      {
        result = sub_10044D40(this[1]);
        *(_DWORD *)(this[9] + 12) = result;
        return result;
      }
      v8 = sub_10039AE0((_DWORD *)this[1], 6, 0);
      result = sub_100BDCE0(v8);
    }
    *(_DWORD *)(this[9] + 12) = result;
  }
  return result;
}
