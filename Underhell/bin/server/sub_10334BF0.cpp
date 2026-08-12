int __thiscall sub_10334BF0(int this)
{
  int result; // eax
  int v3; // edi
  char Buffer[512]; // [esp+1Ch] [ebp-200h] BYREF

  result = sub_1003B900((int *)this);
  v3 = result;
  if ( (*(_BYTE *)(this + 236) & 1) != 0 )
  {
    sub_10429A00(Buffer, 0x200u, "Expression type: %s", *(_DWORD *)&off_1066E8B8[4 * *(_DWORD *)(this + 5772)]);
    sub_100D5DE0((_DWORD *)this, v3, (int)Buffer, 0.0, 255, 255, 255, 255);
    return v3 + 1;
  }
  return result;
}
