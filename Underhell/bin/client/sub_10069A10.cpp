unsigned int __thiscall sub_10069A10(int this)
{
  int v2; // edi
  int v3; // ebx
  int v4; // eax
  bool v5; // zf
  int v6; // eax
  unsigned int result; // eax
  int v8; // edi
  int v9; // eax

  v2 = *(_DWORD *)(this + 172) - 1;
  if ( v2 >= 0 )
  {
    v3 = 40 * v2;
    do
    {
      v4 = *(_DWORD *)(this + 160);
      v5 = *(_BYTE *)(v4 + v3 + 36) == 0;
      v6 = *(_DWORD *)(v4 + v3 + 12);
      if ( v5 )
        sub_101209D0(0, 6, v6);
      else
        (*(void (__stdcall **)(int, _DWORD, _DWORD, int, _DWORD))(*(_DWORD *)dword_10413194 + 44))(v6, 0.0, 0, 4, 0.0);
      v3 -= 40;
      --v2;
    }
    while ( v2 >= 0 );
  }
  *(_DWORD *)(this + 172) = 0;
  *(_DWORD *)(this + 192) = 0;
  *(_DWORD *)(this + 40) = 0;
  result = *(_DWORD *)(this + 156);
  if ( result != -1 )
  {
    result >>= 12;
    if ( *((_DWORD *)off_103DCD74 + 4 * (*(_DWORD *)(this + 156) & 0xFFF) + 2) == result )
    {
      if ( *((_DWORD *)off_103DCD74 + 4 * (*(_DWORD *)(this + 156) & 0xFFF) + 1) )
      {
        result = (**(int (__thiscall ***)(int, int))(this + 48))(this + 48, this + 156);
        *(_DWORD *)(this + 156) = -1;
      }
    }
  }
  if ( *(_DWORD *)(this + 148) != -1 )
  {
    result = (**(int (__thiscall ***)(int, int))(this + 48))(this + 48, this + 148);
    *(_DWORD *)(this + 148) = -1;
  }
  for ( ; *(int *)(this + 20) > 0; result = sub_1022AF00(v8) )
  {
    v8 = **(_DWORD **)(this + 8);
    v9 = *(_DWORD *)(this + 20) - 1;
    if ( v9 > 0 )
      memcpy(*(void **)(this + 8), (const void *)(*(_DWORD *)(this + 8) + 4), 4 * v9);
    --*(_DWORD *)(this + 20);
  }
  return result;
}
