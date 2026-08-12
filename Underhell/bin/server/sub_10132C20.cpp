int __thiscall sub_10132C20(int this, int a2)
{
  int result; // eax
  int v4; // esi
  int *v5; // ecx
  int *v6; // ecx
  int v7; // [esp+Ch] [ebp-8h]

  sub_1042CBA0("r_flashlightscissor");
  (*(void (__thiscall **)(int, const char *))(*(_DWORD *)v7 + 8))(v7, "0");
  result = *(_DWORD *)(this + 248);
  v4 = result | 1;
  if ( result != (result | 1) )
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
        result = sub_100194B0(v5, 248);
    }
    *(_DWORD *)(this + 248) = v4;
  }
  if ( *(_BYTE *)(this + 817) != 1 )
  {
    result = this;
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
      *(_BYTE *)(this + 817) = 1;
    }
    else
    {
      v6 = *(int **)(this + 24);
      if ( v6 )
        result = sub_100194B0(v6, 817);
      *(_BYTE *)(this + 817) = 1;
    }
  }
  return result;
}
