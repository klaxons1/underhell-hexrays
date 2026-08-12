int __thiscall sub_10371370(int this, int a2)
{
  int *v2; // eax
  int v3; // eax
  int result; // eax

  v2 = (int *)(a2 + 8);
  if ( *(_DWORD *)(a2 + 24) != 2 )
  {
    a2 = 0;
    v2 = &a2;
  }
  v3 = *v2;
  *(_DWORD *)(this + 4172) = v3;
  if ( v3 == dword_106E8518 )
  {
    *(_BYTE *)(this + 4536) = 1;
    *(_DWORD *)(this + 4172) = 0;
  }
  *(_BYTE *)(this + 4180) = 1;
  result = dword_106B31C8;
  *(float *)(this + 4176) = *(float *)(dword_106B31C8 + 12) + 0.1;
  return result;
}
