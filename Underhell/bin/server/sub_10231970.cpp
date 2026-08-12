int __thiscall sub_10231970(int this, _DWORD *a2)
{
  int result; // eax

  if ( *(_BYTE *)(this + 832) )
  {
    *(_DWORD *)(this + 840) = *a2;
    sub_100EC3F0((_DWORD *)this, (int)sub_10231550, 0.0, 0);
    return sub_100EC4A0((int *)this, *(float *)(dword_106B31C8 + 12), 0);
  }
  return result;
}
