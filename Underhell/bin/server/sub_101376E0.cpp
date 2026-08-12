int __thiscall sub_101376E0(int this)
{
  int result; // eax
  int v3; // esi
  int v4; // esi
  double ArgList; // [esp+Ch] [ebp-210h]
  double ArgLista; // [esp+Ch] [ebp-210h]
  char Buffer[512]; // [esp+1Ch] [ebp-200h] BYREF

  result = sub_100DF940(this);
  v3 = result;
  if ( (*(_BYTE *)(this + 236) & 1) != 0 )
  {
    ArgList = *(float *)(this + 800);
    sub_10429A00(Buffer, 0x200u, "    duration: %f", SLOBYTE(ArgList));
    sub_100D5DE0((_DWORD *)this, v3, (int)Buffer, 0.0, 255, 255, 255, 255);
    ArgLista = *(float *)(this + 804);
    v4 = v3 + 1;
    sub_10429A00(Buffer, 0x200u, "    hold time: %f", SLOBYTE(ArgLista));
    sub_100D5DE0((_DWORD *)this, v4, (int)Buffer, 0.0, 255, 255, 255, 255);
    return v4 + 1;
  }
  return result;
}
