int __thiscall sub_101271C0(int this, int a2, int a3, int a4, float a5)
{
  int result; // eax
  char v7; // bl
  int *v8; // ecx
  int *v9; // ecx
  int *v10; // ecx

  if ( (*(_DWORD *)(this + 248) & 2) == 0 )
    *(_DWORD *)(this + 200) = 0;
  result = a4;
  if ( a4 )
  {
    result = a4 - 1;
    if ( a4 == 1 )
    {
      if ( *(_BYTE *)(this + 812) != 1 )
      {
        result = this;
        if ( *(_BYTE *)(this + 84) )
        {
          *(_BYTE *)(this + 88) |= 1u;
          *(_BYTE *)(this + 812) = 1;
        }
        else
        {
          v9 = *(int **)(this + 24);
          if ( v9 )
            result = sub_100194B0(v9, 812);
          *(_BYTE *)(this + 812) = 1;
        }
      }
    }
    else
    {
      result = a4 - 2;
      if ( a4 == 2 )
      {
        result = (int)a5;
        v7 = result != 0;
      }
      else
      {
        v7 = *(_BYTE *)(this + 812) == 0;
      }
      if ( v7 != *(_BYTE *)(this + 812) )
      {
        result = this;
        if ( *(_BYTE *)(this + 84) )
        {
          *(_BYTE *)(this + 88) |= 1u;
          *(_BYTE *)(this + 812) = v7;
        }
        else
        {
          v8 = *(int **)(this + 24);
          if ( v8 )
            result = sub_100194B0(v8, 812);
          *(_BYTE *)(this + 812) = v7;
        }
      }
    }
  }
  else if ( *(_BYTE *)(this + 812) )
  {
    result = this;
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
      *(_BYTE *)(this + 812) = 0;
    }
    else
    {
      v10 = *(int **)(this + 24);
      if ( v10 )
        result = sub_100194B0(v10, 812);
      *(_BYTE *)(this + 812) = 0;
    }
  }
  return result;
}
