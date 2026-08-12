int __thiscall sub_10058A90(int this, int a2)
{
  int result; // eax
  int v4; // edi
  char v5; // [esp+18h] [ebp-308h]
  char v6[256]; // [esp+20h] [ebp-300h] BYREF
  char Buffer[512]; // [esp+120h] [ebp-200h] BYREF

  result = sub_1004B3A0((_DWORD *)this, a2);
  v4 = result;
  if ( (*(_BYTE *)(*(_DWORD *)(this + 4) + 236) & 1) != 0 )
  {
    if ( *(float *)(this + 72) == flt_106F1CA8
      && *(float *)(this + 76) == flt_106F1CAC
      && *(float *)(this + 80) == flt_106F1CB0 )
    {
      sub_10429A00(Buffer, 0x200u, "Goal: None", v5);
      sub_100D5DE0(v4, (int)Buffer, 0.0, 255, 255, 255, 255);
      return v4 + 1;
    }
    else
    {
      sub_1001E280(v6, "(%f, %f, %f)", *(float *)(this + 72), *(float *)(this + 76), *(float *)(this + 80));
      sub_10429A00(Buffer, 0x200u, "Goal: %s %s", *(_DWORD *)(this + 16));
      sub_100D5DE0(v4, (int)Buffer, 0.0, 255, 255, 255, 255);
      return v4 + 1;
    }
  }
  return result;
}
