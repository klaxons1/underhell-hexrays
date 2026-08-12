int __thiscall sub_1008F080(int this, float *a2, float *a3, int a4, int a5, int a6, int a7, float a8)
{
  int v10; // eax
  double v11; // st7
  int v12; // eax
  int result; // eax
  float v14; // [esp+0h] [ebp-14h]
  float v15; // [esp+0h] [ebp-14h]
  int v16; // [esp+2Ch] [ebp+18h]

  if ( a6 == -1 )
  {
    v11 = 0.0;
  }
  else
  {
    v10 = *(_DWORD *)(this + 20);
    if ( a6 < 0 || a6 >= *(_DWORD *)(v10 + 4) )
    {
      ++dword_10691DE0;
      v11 = MEMORY[0x38];
    }
    else
    {
      v11 = *(float *)(*(_DWORD *)(*(_DWORD *)(v10 + 8) + 4 * a6) + 56);
    }
  }
  v12 = a7;
  *(float *)&v16 = v11;
  if ( (a7 & 1) != 0 )
  {
    v14 = v11;
    result = sub_1008EFA0(this, a2, a3, a4, a5, a6, a7, v14, a8);
    if ( result )
      return result;
    v11 = *(float *)&v16;
    v12 = a7;
  }
  if ( (v12 & 4) != 0 )
  {
    v15 = v11;
    result = sub_1008F010(this, a2, a3, a4, a5, a6, v12, v15, a8);
    if ( result )
      return result;
    LOBYTE(v12) = a7;
  }
  if ( (v12 & 2) != 0 )
  {
    if ( ((*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 4) + 1672))(*(_DWORD *)(this + 4)) & 2) != 0 )
    {
      result = sub_1008DE30((_DWORD *)this, 1, a2, a3, a4, a5, a6, 2, *(float *)&v16);
      if ( result )
        return result;
    }
    LOBYTE(v12) = a7;
  }
  if ( (v12 & 8) == 0 )
    return 0;
  if ( ((*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 4) + 1672))(*(_DWORD *)(this + 4)) & 8) == 0 )
    return 0;
  result = sub_1008DE30((_DWORD *)this, 3, a2, a3, a4, a5, a6, 4, *(float *)&v16);
  if ( !result )
    return 0;
  return result;
}
