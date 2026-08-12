int __thiscall sub_103C9840(int this, int a2)
{
  int result; // eax
  char v4; // bl
  int *v5; // ecx
  int *v6; // ecx
  float v7; // [esp+14h] [ebp+8h]

  result = a2;
  if ( *(_DWORD *)(a2 + 24) == 6 )
    v4 = *(_BYTE *)(a2 + 8);
  else
    v4 = 0;
  if ( v4 != *(_BYTE *)(this + 5852) )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
    }
    else
    {
      v5 = *(int **)(this + 24);
      if ( v5 )
        sub_100194B0(v5, 5852);
    }
    *(_BYTE *)(this + 5852) = v4;
    result = dword_106B31C8;
    v7 = *(float *)(dword_106B31C8 + 12) + 2.25;
    if ( *(_DWORD *)(this + 5856) != LODWORD(v7) )
    {
      result = this;
      if ( *(_BYTE *)(this + 84) )
      {
        *(_BYTE *)(this + 88) |= 1u;
        *(float *)(this + 5856) = v7;
      }
      else
      {
        v6 = *(int **)(this + 24);
        if ( v6 )
          result = sub_100194B0(v6, 5856);
        *(float *)(this + 5856) = v7;
      }
    }
  }
  return result;
}
