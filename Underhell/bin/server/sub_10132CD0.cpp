int __thiscall sub_10132CD0(int this, int a2)
{
  int result; // eax
  int *v4; // ecx
  int *v5; // ecx
  int v6; // [esp+8h] [ebp-8h]

  sub_1042CBA0("r_flashlightscissor");
  result = (*(int (__thiscall **)(int, const char *))(*(_DWORD *)v6 + 8))(v6, "0");
  if ( *(_DWORD *)(this + 248) )
  {
    result = this;
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
    }
    else
    {
      v4 = *(int **)(this + 24);
      if ( v4 )
        result = sub_100194B0(v4, 248);
    }
    *(_DWORD *)(this + 248) = 0;
  }
  if ( *(_BYTE *)(this + 817) )
  {
    result = this;
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
      *(_BYTE *)(this + 817) = 0;
    }
    else
    {
      v5 = *(int **)(this + 24);
      if ( v5 )
        result = sub_100194B0(v5, 817);
      *(_BYTE *)(this + 817) = 0;
    }
  }
  return result;
}
