int __thiscall sub_10227F40(int this, float a2, char a3)
{
  int result; // eax
  float *v4; // esi
  int *v5; // ecx

  *(float *)(this + 892) = a2;
  result = dword_106B31C8;
  if ( *(_DWORD *)(dword_106B31C8 + 20) == 1 || a3 )
  {
    v4 = (float *)(this + 888);
    if ( *(_DWORD *)(this + 888) != LODWORD(a2) )
    {
      result = this;
      if ( *(_BYTE *)(this + 84) )
      {
        *(_BYTE *)(this + 88) |= 1u;
        *v4 = a2;
      }
      else
      {
        v5 = *(int **)(this + 24);
        if ( v5 )
          result = sub_100194B0(v5, 888);
        *v4 = a2;
      }
    }
  }
  return result;
}
