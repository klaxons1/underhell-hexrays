int __thiscall sub_10134B70(int this, float *a2)
{
  int result; // eax
  double v4; // st7
  int *v5; // ecx
  int *v6; // ecx
  float v7; // [esp+14h] [ebp+8h]

  result = dword_106B31C8;
  if ( *(int *)(dword_106B31C8 + 20) > 1 )
  {
    if ( *(_DWORD *)a2 )
    {
      result = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)a2 + 320))(*(_DWORD *)a2);
      if ( (_BYTE)result )
      {
        if ( *(_DWORD *)a2 )
        {
          result = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)a2 + 320))(*(_DWORD *)a2);
          if ( (_BYTE)result )
            return sub_101EB6E0(a2);
        }
      }
    }
  }
  if ( *((_DWORD *)a2 + 6) == 1 )
    v4 = a2[2];
  else
    v4 = 0.0;
  v7 = v4;
  if ( *(_DWORD *)(this + 820) != LODWORD(v7) )
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
        result = sub_100194B0(v5, 820);
    }
    *(float *)(this + 820) = v7;
  }
  if ( *(_BYTE *)(this + 816) != 1 )
  {
    result = this;
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
      *(_BYTE *)(this + 816) = 1;
    }
    else
    {
      v6 = *(int **)(this + 24);
      if ( v6 )
        result = sub_100194B0(v6, 816);
      *(_BYTE *)(this + 816) = 1;
    }
  }
  return result;
}
