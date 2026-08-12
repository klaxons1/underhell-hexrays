int __thiscall sub_1017C070(int this)
{
  int result; // eax
  int v3; // edi
  int v4; // edi
  int v5; // edi
  double ArgList; // [esp+Ch] [ebp-210h]
  double ArgLista; // [esp+Ch] [ebp-210h]
  double ArgListb; // [esp+Ch] [ebp-210h]
  char v9; // [esp+14h] [ebp-208h]
  char Buffer[512]; // [esp+1Ch] [ebp-200h] BYREF

  result = sub_100DF940(this);
  v3 = result;
  if ( (*(_BYTE *)(this + 236) & 1) != 0 )
  {
    ArgList = *(float *)(this + 800);
    sub_10429A00(Buffer, 0x200u, "    min value: %f", SLOBYTE(ArgList));
    sub_100D5DE0((_DWORD *)this, v3, (int)Buffer, 0.0, 255, 255, 255, 255);
    ArgLista = *(float *)(this + 804);
    v4 = v3 + 1;
    sub_10429A00(Buffer, 0x200u, "    max value: %f", SLOBYTE(ArgLista));
    sub_100D5DE0((_DWORD *)this, v4, (int)Buffer, 0.0, 255, 255, 255, 255);
    ArgListb = *(float *)(this + 812);
    ++v4;
    sub_10429A00(Buffer, 0x200u, "current value: %f", SLOBYTE(ArgListb));
    sub_100D5DE0((_DWORD *)this, v4, (int)Buffer, 0.0, 255, 255, 255, 255);
    v5 = v4 + 1;
    if ( *(_BYTE *)(this + 810) )
      sub_10429A00(Buffer, 0x200u, "*DISABLED*", v9);
    else
      sub_10429A00(Buffer, 0x200u, "Enabled.", v9);
    sub_100D5DE0((_DWORD *)this, v5, (int)Buffer, 0.0, 255, 255, 255, 255);
    return v5 + 1;
  }
  return result;
}
