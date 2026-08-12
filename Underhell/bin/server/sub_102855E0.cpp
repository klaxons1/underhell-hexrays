char __thiscall sub_102855E0(int this, char *String1, char *String)
{
  int *v4; // ecx
  double v5; // st6
  char result; // al
  double v7; // [esp+8h] [ebp-8h] BYREF
  char *String1a; // [esp+18h] [ebp+8h]

  if ( String1 == "color" || !_stricmp(String1, "color") )
  {
    sub_10264FB0(&String, String);
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
    }
    else
    {
      v4 = *(int **)(this + 24);
      if ( v4 )
        sub_100194B0(v4, 800);
    }
    v5 = (double)(unsigned __int8)String * 0.0039215689;
    String1a = (char *)BYTE1(String);
    String = (char *)BYTE2(String);
    *(float *)(this + 800) = v5;
    result = 1;
    *(float *)(this + 804) = (double)(int)String1a * 0.0039215689;
    *(float *)(this + 808) = 0.0039215689 * (double)(int)String;
  }
  else if ( String1 == "emittime" || !_stricmp(String1, "emittime") )
  {
    v7 = atof(String) + *(float *)(dword_106B31C8 + 12);
    sub_1031B680(&v7);
    return 1;
  }
  else
  {
    return sub_100EBE90(this, String1, String);
  }
  return result;
}
