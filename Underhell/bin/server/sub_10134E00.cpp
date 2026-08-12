int __thiscall sub_10134E00(int this, float *a2)
{
  int result; // eax
  double v4; // st7
  int *v5; // ecx
  int *v6; // ecx
  int *v7; // ecx
  float v8; // [esp+14h] [ebp+8h]

  if ( *(int *)(dword_106B31C8 + 20) > 1
    && *(_DWORD *)a2
    && (*(unsigned __int8 (__thiscall **)(_DWORD))(**(_DWORD **)a2 + 320))(*(_DWORD *)a2)
    && *(_DWORD *)a2
    && (*(unsigned __int8 (__thiscall **)(_DWORD))(**(_DWORD **)a2 + 320))(*(_DWORD *)a2) )
  {
    return sub_101EB760(a2);
  }
  if ( *((_DWORD *)a2 + 6) == 1 )
    v4 = a2[2];
  else
    v4 = 0.0;
  v8 = v4;
  if ( *(_DWORD *)(this + 828) != LODWORD(v8) )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
    }
    else
    {
      v5 = *(int **)(this + 24);
      if ( v5 )
        sub_100194B0(v5, 828);
    }
    *(float *)(this + 828) = v8;
  }
  result = *(_DWORD *)(this + 832);
  if ( result != *(_DWORD *)(this + 828) )
  {
    result = this;
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
    }
    else
    {
      v6 = *(int **)(this + 24);
      if ( v6 )
        result = sub_100194B0(v6, 832);
    }
    *(float *)(this + 832) = *(float *)(this + 828);
  }
  if ( *(_BYTE *)(this + 818) != 1 )
  {
    result = this;
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
      *(_BYTE *)(this + 818) = 1;
    }
    else
    {
      v7 = *(int **)(this + 24);
      if ( v7 )
        result = sub_100194B0(v7, 818);
      *(_BYTE *)(this + 818) = 1;
    }
  }
  return result;
}
