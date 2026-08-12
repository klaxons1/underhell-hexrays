int __thiscall sub_101B4F60(int this, int a2)
{
  int v3; // edi
  int v4; // esi
  int result; // eax
  _DWORD *v6; // edi
  int v7; // ecx
  int v8; // esi
  char v9; // [esp+Ch] [ebp-10h]
  int *v10; // [esp+10h] [ebp-Ch]
  int v11; // [esp+14h] [ebp-8h]
  _WORD v12[2]; // [esp+18h] [ebp-4h]

  ++*(_DWORD *)(this + 348);
  v11 = this + 132;
  v12[0] = 0;
  v3 = 0;
  v10 = (int *)(this + 180);
  do
  {
    v4 = *(_DWORD *)(a2 + 4 * v3);
    if ( v4 )
    {
      result = (*(int (__thiscall **)(_DWORD))(*(_DWORD *)v4 + 68))(*(_DWORD *)(a2 + 4 * v3));
      if ( !result )
        goto LABEL_22;
      *v10 = result;
      v9 = (*(int (__thiscall **)(int))(*(_DWORD *)v4 + 92))(v4);
      (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v4 + 204))(v4, v11, 0);
      if ( (v9 & 0x10) != 0 )
        *((_BYTE *)v12 + v3) = 1;
    }
    v11 += 12;
    ++v10;
    ++v3;
  }
  while ( v3 < 2 );
  result = a2;
  v6 = (_DWORD *)(this + 180);
  *(float *)(this + 100) = *(float *)(a2 + 24);
  *(_DWORD *)(this + 104) = *(_DWORD *)(a2 + 28);
  v7 = *(_DWORD *)(this + 180);
  if ( v7 == *(_DWORD *)(this + 184) )
  {
    if ( *(_BYTE *)(a2 + 16) && v7 )
    {
      result = (*(int (__thiscall **)(int, _DWORD, int))(*(_DWORD *)v7 + 612))(v7, 0, this + 76);
      --*(_DWORD *)(this + 348);
      return result;
    }
  }
  else
  {
    if ( LOBYTE(v12[0]) && HIBYTE(v12[0]) )
      *(_BYTE *)(a2 + 16) = 0;
    v8 = 0;
    while ( 1 )
    {
      if ( *(_BYTE *)(result + 16) )
        result = (*(int (__thiscall **)(_DWORD, int, int))(*(_DWORD *)*v6 + 612))(*v6, v8, this + 76);
      if ( *(_BYTE *)(a2 + 17) && *((_BYTE *)v12 + v8) )
        result = (*(int (__thiscall **)(_DWORD, int, int))(*(_DWORD *)*v6 + 604))(*v6, v8, this + 76);
      ++v8;
      ++v6;
      if ( v8 >= 2 )
        break;
      result = a2;
    }
  }
LABEL_22:
  --*(_DWORD *)(this + 348);
  return result;
}
