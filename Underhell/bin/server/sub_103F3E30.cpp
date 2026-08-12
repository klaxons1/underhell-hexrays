int __thiscall sub_103F3E30(int this)
{
  int *v2; // ecx
  int *v3; // ecx
  int result; // eax
  int v5; // eax
  int *v6; // ecx
  int *v7; // ecx
  float v8; // [esp+14h] [ebp-4h]

  sub_10267690(this);
  v8 = *(float *)(dword_106B31C8 + 12);
  if ( *(_DWORD *)(this + 128) != LODWORD(v8) )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
    }
    else
    {
      v2 = *(int **)(this + 24);
      if ( v2 )
        sub_100194B0(v2, 128);
    }
    *(float *)(this + 128) = v8;
  }
  sub_100EC4A0((int *)this, *(float *)(dword_106B31C8 + 12), 0);
  if ( *(_BYTE *)(this + 606) != 1 )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
    }
    else
    {
      v3 = *(int **)(this + 24);
      if ( v3 )
        sub_100194B0(v3, 606);
    }
    *(_BYTE *)(this + 606) = 1;
  }
  result = (*(int (__thiscall **)(int))(*(_DWORD *)this + 728))(this);
  if ( *(_BYTE *)(this + 896) && (*(_BYTE *)(this + 1713) || *(_BYTE *)(this + 1712)) )
  {
    v5 = (*(int (__thiscall **)(int))(*(_DWORD *)this + 340))(this);
    result = (*(int (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)v5 + 88))(v5, *(unsigned __int8 *)(this + 1713), 0);
    if ( *(_BYTE *)(this + 1713) )
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
          result = sub_100194B0(v6, 1713);
      }
      *(_BYTE *)(this + 1713) = 0;
    }
    if ( *(_BYTE *)(this + 1712) )
    {
      result = this;
      if ( *(_BYTE *)(this + 84) )
      {
        *(_BYTE *)(this + 88) |= 1u;
        *(_BYTE *)(this + 1712) = 0;
      }
      else
      {
        v7 = *(int **)(this + 24);
        if ( v7 )
          result = sub_100194B0(v7, 1712);
        *(_BYTE *)(this + 1712) = 0;
      }
    }
  }
  return result;
}
