int __thiscall sub_10099D50(int this, int a2)
{
  int result; // eax

  if ( *(_BYTE *)(this + 817) )
  {
    result = sub_10099500(this, *(_DWORD *)(this + 820), 1, *(_DWORD *)a2, *(float *)(a2 + 4));
    if ( *(_BYTE *)(this + 817) )
      result = sub_1012CED0(this + 32);
    *(_BYTE *)(this + 817) = 0;
  }
  return result;
}
