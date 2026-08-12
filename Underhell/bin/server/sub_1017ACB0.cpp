int __thiscall sub_1017ACB0(int this)
{
  int result; // eax
  int v3; // edi
  int v4; // edi
  double ArgList; // [esp+Ch] [ebp-210h]
  double ArgLista; // [esp+Ch] [ebp-210h]
  char Buffer[512]; // [esp+1Ch] [ebp-200h] BYREF

  result = sub_100DF940(this);
  v3 = result;
  if ( (*(_BYTE *)(this + 236) & 1) != 0 )
  {
    ArgList = *(float *)(this + 876);
    sub_10429A00(Buffer, 0x200u, "refire interval: %.2f sec", SLOBYTE(ArgList));
    sub_100D5DE0((_DWORD *)this, v3, (int)Buffer, 0.0, 255, 255, 255, 255);
    v4 = v3 + 1;
    if ( *(_DWORD *)(this + 872) )
    {
      return v4;
    }
    else
    {
      ArgLista = sub_100E9200((_DWORD *)this, 0) - *(float *)(dword_106B31C8 + 12);
      sub_10429A00(Buffer, 0x200u, "      firing in: %.2f sec", SLOBYTE(ArgLista));
      sub_100D5DE0((_DWORD *)this, v4, (int)Buffer, 0.0, 255, 255, 255, 255);
      return v4 + 1;
    }
  }
  return result;
}
