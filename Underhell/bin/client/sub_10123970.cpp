float *__thiscall sub_10123970(_BYTE *this, float *a2, float *a3)
{
  double v4; // st7
  int v5; // edi
  int v6; // eax
  int v7; // eax
  float *result; // eax
  float v9; // [esp+4h] [ebp-8h]
  int v10; // [esp+8h] [ebp-4h]

  v4 = ((double (__thiscall *)(_BYTE *))*(_DWORD *)(*((_DWORD *)this - 1) + 596))(this - 4) * 0.5;
  v9 = v4;
  if ( !this[1240] )
  {
    v5 = *(_DWORD *)dword_10413178;
    v6 = (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)this + 36))(this);
    v7 = (*(int (__thiscall **)(int, int))(v5 + 40))(dword_10413178, v6);
    if ( v7 )
    {
      v10 = *(_DWORD *)(v7 + 4);
      if ( v10 <= *(_DWORD *)(v7 + 8) )
        v10 = *(_DWORD *)(v7 + 8);
      v4 = (double)v10 * v9;
    }
    else
    {
      v4 = v9;
    }
  }
  *a2 = -v4;
  a2[1] = -v4;
  a2[2] = -v4;
  result = a3;
  *a3 = v4;
  a3[1] = v4;
  a3[2] = v4;
  return result;
}
