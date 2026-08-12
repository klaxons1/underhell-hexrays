int __thiscall sub_102BA680(int this, float a2)
{
  int *v3; // ecx
  int result; // eax
  int *v5; // ecx
  int v6; // edi
  int *v7; // ecx
  float v8; // [esp+0h] [ebp-10h]

  sub_1023C380((_DWORD *)this, (int)"AlyxEmp.Charge", 0.0, 0);
  if ( *(_DWORD *)(this + 824) != 1 )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
    }
    else
    {
      v3 = *(int **)(this + 24);
      if ( v3 )
        sub_100194B0(v3, 824);
    }
    *(_DWORD *)(this + 824) = 1;
  }
  result = *(_DWORD *)(this + 828);
  if ( result != LODWORD(a2) )
  {
    result = this;
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
    }
    else
    {
      v5 = *(int **)(this + 24);
      if ( v5 )
        result = sub_100194B0(v5, 828);
    }
    *(float *)(this + 828) = a2;
  }
  v6 = dword_106B31C8;
  if ( *(_DWORD *)(this + 832) != *(_DWORD *)(dword_106B31C8 + 12) )
  {
    result = this;
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
    }
    else
    {
      v7 = *(int **)(this + 24);
      if ( v7 )
        result = sub_100194B0(v7, 832);
    }
    *(float *)(this + 832) = *(float *)(v6 + 12);
  }
  if ( *(_BYTE *)(this + 820) )
  {
    v8 = *(float *)(dword_106B31C8 + 12) + *(float *)(this + 828);
    return sub_100EC4A0((int *)this, v8, 0);
  }
  return result;
}
