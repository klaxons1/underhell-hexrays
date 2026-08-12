int __thiscall sub_100F9760(int this)
{
  int result; // eax
  int v3; // edi
  int v4; // edi
  double ArgList; // [esp+0h] [ebp-220h]
  double ArgLista; // [esp+0h] [ebp-220h]
  char Buffer[512]; // [esp+20h] [ebp-200h] BYREF

  result = sub_100DF940(this);
  v3 = result;
  if ( (*(_BYTE *)(this + 236) & 1) != 0 )
  {
    if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
      sub_100DAE60(this);
    if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
      sub_100DAE60(this);
    if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
      sub_100DAE60(this);
    ArgList = *(float *)(this + 580);
    sub_10429A00(Buffer, 0x200u, "start: (%.2f,%.2f,%.2f)", SLOBYTE(ArgList));
    sub_100D5DE0((_DWORD *)this, v3, (int)Buffer, 0.0, 255, 255, 255, 255);
    v4 = v3 + 1;
    ArgLista = *(float *)(this + 948);
    sub_10429A00(Buffer, 0x200u, "end  : (%.2f,%.2f,%.2f)", SLOBYTE(ArgLista));
    sub_100D5DE0((_DWORD *)this, v4, (int)Buffer, 0.0, 255, 255, 255, 255);
    return v4 + 1;
  }
  return result;
}
