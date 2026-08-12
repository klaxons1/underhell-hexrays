signed int __thiscall sub_10219F10(_DWORD *this, _DWORD *a2)
{
  signed int result; // eax
  int i; // eax
  unsigned int v5; // ecx
  unsigned int v6; // edx
  int v7; // eax
  int v8; // eax
  int v9; // edx
  int v10; // ecx
  _DWORD *v11; // esi
  int v12; // edx
  int v13; // [esp+4h] [ebp-4h]

  if ( (dword_10645FE8[0] & *a2) != 0 )
  {
    _BitScanForward((unsigned int *)&result, dword_10645FE8[0] & *a2);
  }
  else
  {
    for ( i = 1; i < 7; ++i )
    {
      v5 = a2[i];
      if ( v5 )
      {
        _BitScanForward(&v5, v5);
        result = v5 + 32 * i;
        goto LABEL_8;
      }
    }
    result = a2[7] & 0x7FFFFFFF;
    if ( !result )
      return result;
    _BitScanForward(&v6, result);
    result = v6 + 224;
  }
LABEL_8:
  while ( result > -1 )
  {
    v13 = result + 1;
    v7 = sub_1025FB50(result + 1);
    if ( v7 )
    {
      v8 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106B31D0 + 72))(dword_106B31D0, *(_DWORD *)(v7 + 24));
      v9 = this[5];
      v10 = 0;
      if ( v9 > 0 )
      {
        v11 = (_DWORD *)this[2];
        while ( *v11 != v8 )
        {
          ++v10;
          ++v11;
          if ( v10 >= v9 )
            goto LABEL_20;
        }
        if ( v10 != -1 )
        {
          v12 = v9 - v10 - 1;
          if ( v12 > 0 )
            memcpy((void *)(this[2] + 4 * v10), (const void *)(this[2] + 4 * v10 + 4), 4 * v12);
          --this[5];
        }
      }
    }
LABEL_20:
    result = sub_10219AE0(a2, v13);
  }
  return result;
}
