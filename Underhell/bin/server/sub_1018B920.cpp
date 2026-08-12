char __thiscall sub_1018B920(int this)
{
  int v2; // eax
  int v3; // ecx
  float v4; // edx
  char result; // al
  _DWORD v6[2]; // [esp+4h] [ebp-Ch] BYREF
  float v7; // [esp+Ch] [ebp-4h] BYREF

  v2 = *(_DWORD *)(this + 28);
  v3 = *(_DWORD *)(this + 32);
  v4 = *(float *)(this + 36);
  v6[0] = v2;
  v6[1] = v3;
  v7 = v4;
  result = sub_1019DEA0(v6, &v7, 0);
  if ( result )
  {
    v7 = v7 + 1.0;
    result = ((**(int (__thiscall ***)(int, _DWORD *, _DWORD))dword_106B31F4)(dword_106B31F4, v6, 0) & 0x4030) != 0;
    *(_BYTE *)(this + 49) = result;
  }
  else
  {
    *(_BYTE *)(this + 49) = 0;
  }
  return result;
}
