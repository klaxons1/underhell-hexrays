int __thiscall sub_1012B210(int this, float a2)
{
  int result; // eax
  float *v3; // esi
  int *v4; // ecx
  float v5; // [esp+Ch] [ebp+8h]

  result = dword_106B31C8;
  v3 = (float *)(this + 820);
  v5 = *(float *)(dword_106B31C8 + 12) + a2;
  if ( *(_DWORD *)(this + 820) != LODWORD(v5) )
  {
    result = this;
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
      *v3 = v5;
    }
    else
    {
      v4 = *(int **)(this + 24);
      if ( v4 )
        result = sub_100194B0(v4, 820);
      *v3 = v5;
    }
  }
  return result;
}
