int __thiscall sub_102B6E00(int this)
{
  int result; // eax
  int v3; // edi
  char v4; // [esp+14h] [ebp-208h]
  char Buffer[512]; // [esp+1Ch] [ebp-200h] BYREF

  result = sub_100C0140(this);
  v3 = result;
  if ( (*(_BYTE *)(this + 236) & 1) != 0 )
  {
    sub_10429A00(Buffer, 0x200u, (&off_106610D0)[*(_DWORD *)(this + 1204)], v4);
    sub_100D5DE0((_DWORD *)this, v3, (int)Buffer, 0.0, 255, 255, 255, 255);
    return v3 + 1;
  }
  return result;
}
