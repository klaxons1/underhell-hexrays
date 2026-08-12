int __thiscall sub_10183E60(int this, int a2)
{
  _DWORD *v3; // ecx
  int result; // eax
  int *v5; // ecx
  double ArgList; // [esp+0h] [ebp-30h]
  char Source[32]; // [esp+10h] [ebp-20h] BYREF

  ArgList = *(float *)(dword_106B31C8 + 12);
  sub_10429A00(Source, 0x20u, "%f", SLOBYTE(ArgList));
  if ( *(_BYTE *)(this + 84) )
  {
    *(_BYTE *)(this + 88) |= 1u;
  }
  else
  {
    v3 = *(_DWORD **)(this + 24);
    if ( v3 )
    {
      *v3 |= 0x101u;
      *(_WORD *)(sub_10153460(v3) + 2) = 0;
    }
  }
  result = sub_104299C0((char *)(this + 1310), Source, 0xFFu);
  if ( *(_DWORD *)(this + 1600) != 1 )
  {
    result = this;
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
      *(_DWORD *)(this + 1600) = 1;
    }
    else
    {
      v5 = *(int **)(this + 24);
      if ( v5 )
        result = sub_100194B0(v5, 1600);
      *(_DWORD *)(this + 1600) = 1;
    }
  }
  return result;
}
