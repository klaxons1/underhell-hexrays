int *__thiscall sub_1021B210(_DWORD *this, _DWORD *a2, _WORD *a3, int a4, __int16 a5)
{
  int *v6; // ecx
  int v7; // ecx
  int v8; // eax

  if ( *a2 != -1 )
  {
    v6 = &dword_1069E3E4[4 * (*a2 & 0xFFF)];
    if ( v6[1] == *a2 >> 12 )
    {
      v7 = *v6;
      if ( v7 )
      {
        v8 = (*(int (__thiscall **)(int))(*(_DWORD *)v7 + 20))(v7);
        if ( v8 )
        {
          if ( *(_DWORD *)(v8 + 24) )
          {
            --*(_BYTE *)(v8 + 304);
            sub_100D8500((_DWORD *)v8);
          }
        }
      }
    }
  }
  if ( a4 )
    *a2 = *(_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)a4 + 8))(a4);
  else
    *a2 = -1;
  *a3 = a5;
  if ( a4 )
  {
    sub_100D83F0((_DWORD *)a4, 8);
    ++*(_BYTE *)(a4 + 304);
  }
  return sub_1021AD10(this);
}
