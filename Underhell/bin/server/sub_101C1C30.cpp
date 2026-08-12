unsigned int __thiscall sub_101C1C30(int this, int a2)
{
  int v2; // esi
  unsigned int result; // eax
  int v4; // edi
  int v5; // ebx
  int v6; // ecx
  int v7; // edi
  float *v8; // esi
  double v9; // st6
  double v10; // st7
  int v12; // [esp+10h] [ebp-Ch]
  int v13; // [esp+14h] [ebp-8h]
  _DWORD *v14; // [esp+18h] [ebp-4h]

  v2 = this;
  *(float *)a2 = *(float *)(this + 76);
  *(float *)(a2 + 4) = *(float *)(this + 52);
  *(float *)(a2 + 8) = *(float *)(this + 56);
  *(float *)(a2 + 12) = *(float *)(this + 60);
  *(float *)(a2 + 16) = *(float *)(this + 64);
  *(float *)(a2 + 20) = *(float *)(this + 68);
  *(float *)(a2 + 24) = *(float *)(this + 72);
  result = *(_DWORD *)(this + 36);
  *(_DWORD *)(a2 + 28) = result;
  if ( result > 0x20 )
    *(_DWORD *)(a2 + 28) = 32;
  v4 = 0;
  v12 = 0;
  if ( *(int *)(a2 + 28) > 0 )
  {
    v13 = 0;
    v14 = (_DWORD *)(a2 + 32);
    v5 = a2 + 168;
    while ( 1 )
    {
      v6 = *(_DWORD *)(v4 + *(_DWORD *)(v2 + 24));
      *v14 = v6 ? *(_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)v6 + 8))(v6) : -1;
      v7 = *(_DWORD *)(v2 + 24) + v4;
      v8 = *(float **)v7;
      if ( (*(_DWORD *)(*(_DWORD *)v7 + 252) & 0x800) != 0 )
        sub_100DAE60(*(_DWORD *)v7);
      ++v14;
      v9 = v8[146] - *(float *)(v7 + 8);
      v13 += 104;
      v5 += 12;
      v10 = v8[147] - *(float *)(v7 + 12);
      result = ++v12;
      *(float *)(v5 - 20) = v8[145] - *(float *)(v7 + 4);
      *(float *)(v5 - 16) = v9;
      *(float *)(v5 - 12) = v10;
      if ( v12 >= *(_DWORD *)(a2 + 28) )
        break;
      v4 = v13;
      v2 = this;
    }
  }
  return result;
}
