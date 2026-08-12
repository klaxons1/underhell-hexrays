int __thiscall sub_10203540(int this)
{
  int result; // eax
  int v3; // edi
  int v4; // edx
  unsigned int v5; // eax
  int v6; // eax
  bool v7; // bl
  int v8; // edi
  int v9; // edi
  const char *v10; // eax
  long double ArgList; // [esp+4h] [ebp-220h]
  long double ArgLista; // [esp+4h] [ebp-220h]
  char Buffer[512]; // [esp+20h] [ebp-204h] BYREF
  float v14; // [esp+220h] [ebp-4h] BYREF

  result = sub_100DF940(this);
  v3 = result;
  if ( (*(_BYTE *)(this + 236) & 1) != 0 )
  {
    if ( *(_DWORD *)(this + 812) == -1
      || off_1061BE18[4 * (*(_DWORD *)(this + 812) & 0xFFF) + 2] != *(_DWORD *)(this + 812) >> 12 )
    {
      v4 = 0;
    }
    else
    {
      v4 = off_1061BE18[4 * (*(_DWORD *)(this + 812) & 0xFFF) + 1];
    }
    v5 = *(_DWORD *)(this + 808);
    if ( v5 == -1 || off_1061BE18[4 * (*(_DWORD *)(this + 808) & 0xFFF) + 2] != v5 >> 12 )
      v6 = 0;
    else
      v6 = off_1061BE18[4 * (*(_DWORD *)(this + 808) & 0xFFF) + 1];
    v7 = sub_102032C0(this, v6, v4, COERCE_INT(*(float *)(this + 820)), &v14);
    ArgList = acos(v14) * 57.29578;
    sub_10429A00(Buffer, 0x200u, "delta ang (dot)    : %.2f (%f)", SLOBYTE(ArgList));
    sub_100D5DE0((_DWORD *)this, v3, (int)Buffer, 0.0, 255, 255, 255, 255);
    v8 = v3 + 1;
    ArgLista = acos(*(float *)(this + 820)) * 57.29578;
    sub_10429A00(Buffer, 0x200u, "tolerance ang (dot): %.2f (%f)", SLOBYTE(ArgLista));
    sub_100D5DE0((_DWORD *)this, v8, (int)Buffer, 0.0, 255, 255, 255, 255);
    v9 = v8 + 1;
    v10 = "yes";
    if ( !v7 )
      v10 = "no";
    sub_10429A00(Buffer, 0x200u, "facing: %s", (char)v10);
    sub_100D5DE0((_DWORD *)this, v9, (int)Buffer, 0.0, 255, 255, 255, 255);
    return v9 + 1;
  }
  return result;
}
