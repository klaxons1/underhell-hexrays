int __thiscall sub_100E0B40(int this, int a2)
{
  int result; // eax
  int v3; // ebx
  int v4; // esi
  int *v5; // ecx

  result = a2;
  if ( *(_DWORD *)(a2 + 24) != 5 )
    goto LABEL_6;
  if ( *(int *)(a2 + 8) > 255 )
  {
    LOBYTE(v3) = -1;
    goto LABEL_7;
  }
  if ( *(int *)(a2 + 8) >= 0 )
    v3 = *(_DWORD *)(a2 + 8);
  else
LABEL_6:
    LOBYTE(v3) = 0;
LABEL_7:
  v4 = this + 116;
  if ( *(_BYTE *)(this + 119) != (_BYTE)v3 )
  {
    result = this;
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
      *(_BYTE *)(this + 119) = v3;
    }
    else
    {
      v5 = *(int **)(this + 24);
      if ( v5 )
        result = sub_100194B0(v5, 116);
      *(_BYTE *)(v4 + 3) = v3;
    }
  }
  return result;
}
