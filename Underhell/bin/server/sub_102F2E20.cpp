unsigned int __thiscall sub_102F2E20(_DWORD *this)
{
  unsigned int result; // eax
  signed int v3; // ebx
  int v4; // ecx
  int *v5; // ecx
  int v6; // ecx
  int v7; // esi
  signed int i; // [esp+8h] [ebp-4h]

  if ( !this[916] )
    this[916] = (*(int (__thiscall **)(int, _DWORD *))(*(_DWORD *)dword_106BAFF4 + 116))(dword_106BAFF4, this + 917);
  (*(void (__thiscall **)(_DWORD))(*(_DWORD *)this[916] + 24))(this[916]);
  result = this[914];
  v3 = 0;
  for ( i = result; v3 < i; ++v3 )
  {
    v4 = this[911];
    result = *(_DWORD *)(v4 + 4 * v3);
    if ( result != -1 )
    {
      v5 = &off_1061BE18[4 * (*(_DWORD *)(v4 + 4 * v3) & 0xFFF) + 1];
      result >>= 12;
      if ( v5[1] == result )
      {
        v6 = *v5;
        if ( v6 )
        {
          v7 = *(_DWORD *)(v6 + 424);
          if ( v7 )
          {
            result = (*(int (__thiscall **)(_DWORD))(*(_DWORD *)v7 + 40))(*(_DWORD *)(v6 + 424));
            if ( (_BYTE)result )
            {
              (*(void (__thiscall **)(_DWORD, int, _DWORD))(*(_DWORD *)this[916] + 8))(this[916], v7, 0);
              result = (*(int (__thiscall **)(int))(*(_DWORD *)v7 + 96))(v7);
            }
          }
        }
      }
    }
  }
  return result;
}
