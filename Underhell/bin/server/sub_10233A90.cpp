int __thiscall sub_10233A90(int this)
{
  char v2; // cl
  int result; // eax
  float v4; // [esp+0h] [ebp-Ch]

  sub_10112C00(this + 320, 0);
  if ( !*(_DWORD *)(this + 260) || (*(_BYTE *)(this + 248) & 0x10) != 0 )
  {
    *(_BYTE *)(this + 877) = 0;
    *(_BYTE *)(this + 888) = 1;
    sub_100EC3F0((_DWORD *)this, (int)sub_102326C0, 0.0, 0);
    v4 = *(float *)(dword_106B31C8 + 12) + 1.0;
    sub_100EC4A0((int *)this, v4, 0);
    if ( *(_DWORD *)(this + 260) )
      *(_BYTE *)(this + 860) = 1;
  }
  v2 = *(_BYTE *)(this + 248) >> 5;
  *(float *)(this + 856) = 0.0;
  *(_BYTE *)(this + 876) = (v2 & 1) == 0;
  *(_BYTE *)(this + 877) = 0;
  result = -1;
  *(_DWORD *)(this + 884) = -1;
  *(_DWORD *)(this + 892) = -1;
  return result;
}
