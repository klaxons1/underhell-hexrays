int __thiscall sub_10242A40(int this)
{
  double v2; // st7
  double v3; // st6
  double v4; // st7
  int *v5; // ecx
  int v6; // eax
  unsigned __int8 v7; // cl
  int result; // eax
  int *v9; // ecx
  char v10; // bl
  int *v11; // ecx
  float v12; // [esp+14h] [ebp-8h]
  float v13; // [esp+18h] [ebp-4h]

  v2 = *(float *)(dword_106B31C8 + 12) - *(float *)(this + 848);
  v12 = v2;
  v3 = *(float *)(this + 108) * v2 + *(float *)(this + 828);
  v13 = v3;
  if ( *(float *)(this + 828) != v3 )
  {
    v4 = v3;
    if ( *(_DWORD *)(this + 828) == LODWORD(v13) )
    {
      sub_101126F0((int *)(this + 320));
      v2 = v12;
    }
    else if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
      *(float *)(this + 828) = v3;
      sub_101126F0((int *)(this + 320));
      v2 = v12;
    }
    else
    {
      v5 = *(int **)(this + 24);
      if ( v5 )
      {
        sub_100194B0(v5, 828);
        v4 = v13;
      }
      *(float *)(this + 828) = v4;
      sub_101126F0((int *)(this + 320));
      v2 = v12;
    }
  }
  v6 = (int)(v2 * (double)*(int *)(this + 220));
  v7 = *(_BYTE *)(this + 119);
  if ( v6 <= v7 )
  {
    v10 = v7 - v6;
    if ( *(_BYTE *)(this + 119) != v7 - (_BYTE)v6 )
    {
      if ( *(_BYTE *)(this + 84) )
      {
        *(_BYTE *)(this + 88) |= 1u;
      }
      else
      {
        v11 = *(int **)(this + 24);
        if ( v11 )
          sub_100194B0(v11, 116);
      }
      *(_BYTE *)(this + 119) = v10;
    }
    result = sub_100EC4A0((int *)this, *(float *)(dword_106B31C8 + 12), 0);
    *(float *)(this + 848) = *(float *)(dword_106B31C8 + 12);
  }
  else
  {
    if ( v7 )
    {
      if ( *(_BYTE *)(this + 84) )
      {
        *(_BYTE *)(this + 88) |= 1u;
        *(_BYTE *)(this + 119) = 0;
        return sub_100D6A00((void *)this);
      }
      v9 = *(int **)(this + 24);
      if ( v9 )
        sub_100194B0(v9, 116);
      *(_BYTE *)(this + 119) = 0;
    }
    return sub_100D6A00((void *)this);
  }
  return result;
}
