int __thiscall sub_10328300(int this)
{
  int result; // eax
  int v3; // edi
  double ArgList; // [esp+Ch] [ebp-224h]
  float v5; // [esp+18h] [ebp-218h]
  char Buffer[512]; // [esp+24h] [ebp-20Ch] BYREF
  float v7; // [esp+224h] [ebp-Ch] BYREF
  float v8; // [esp+228h] [ebp-8h]
  float v9; // [esp+22Ch] [ebp-4h]

  result = sub_1003B900((int *)this);
  v3 = result;
  if ( (*(_BYTE *)(this + 236) & 1) != 0 )
  {
    (*(void (__thiscall **)(int, float *, _DWORD))(*(_DWORD *)this + 540))(this, &v7, 0);
    v5 = v8 * v8 + v7 * v7 + v9 * v9;
    ArgList = off_10689708(v5);
    sub_10429A00(Buffer, 0x200u, "speed (max): %.2f (%.2f)", SLOBYTE(ArgList));
    sub_100D5DE0((_DWORD *)this, v3, (int)Buffer, 0.0, 255, 255, 255, 255);
    return v3 + 1;
  }
  return result;
}
