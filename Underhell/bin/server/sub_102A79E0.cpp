int __thiscall sub_102A79E0(_DWORD *this, float a2)
{
  int result; // eax
  int v3; // esi
  int *v4; // ecx
  float v5; // [esp+Ch] [ebp+8h]

  result = dword_106B31C8;
  v3 = this[1];
  v5 = *(float *)(dword_106B31C8 + 12) + a2;
  if ( *(_DWORD *)(v3 + 1672) != LODWORD(v5) )
  {
    result = this[1];
    if ( *(_BYTE *)(v3 + 84) )
    {
      *(_BYTE *)(v3 + 88) |= 1u;
      *(float *)(v3 + 1672) = v5;
    }
    else
    {
      v4 = *(int **)(v3 + 24);
      if ( v4 )
        result = sub_100194B0(v4, 1672);
      *(float *)(v3 + 1672) = v5;
    }
  }
  return result;
}
