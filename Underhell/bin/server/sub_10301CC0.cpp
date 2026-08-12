int __thiscall sub_10301CC0(int this)
{
  int result; // eax
  int v3; // edi
  int *v4; // ecx

  if ( *(_BYTE *)(this + 4094) )
  {
    *(_BYTE *)(this + 4094) = 0;
    sub_1023B860((_DWORD *)this, (int)"NPC_Antlion.WingsOpen");
    sub_100C1600(this, 1, 0);
  }
  result = *(_DWORD *)(this + 248);
  v3 = result | 2;
  if ( result != (result | 2) )
  {
    result = this;
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
      *(_DWORD *)(this + 248) = v3;
    }
    else
    {
      v4 = *(int **)(this + 24);
      if ( v4 )
        result = sub_100194B0(v4, 248);
      *(_DWORD *)(this + 248) = v3;
    }
  }
  return result;
}
