int __thiscall sub_10254A00(int this)
{
  int result; // eax
  int v3; // edi
  int v4; // edi
  char Buffer[256]; // [esp+1Ch] [ebp-100h] BYREF

  result = sub_100DF940(this);
  v3 = result;
  if ( (*(_BYTE *)(this + 236) & 1) != 0 )
  {
    sub_10429A00(Buffer, 0xFFu, "Dir: %i (%i)", *(_DWORD *)(this + 836));
    sub_100D5DE0((_DWORD *)this, v3, (int)Buffer, 0.0, 255, 255, 255, 255);
    v4 = v3 + 1;
    sub_10429A00(Buffer, 0xFFu, "Speed: %i (%i)", *(_DWORD *)(this + 820));
    sub_100D5DE0((_DWORD *)this, v4, (int)Buffer, 0.0, 255, 255, 255, 255);
    return v4 + 1;
  }
  return result;
}
