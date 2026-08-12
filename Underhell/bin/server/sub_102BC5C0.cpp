int __thiscall sub_102BC5C0(int this, float a2)
{
  int result; // eax
  float v3; // [esp+0h] [ebp-8h]

  if ( *(_BYTE *)(this + 1120) && *(_BYTE *)(this + 1283) )
  {
    if ( *(_DWORD *)(this + 1256) )
    {
      v3 = *(float *)(dword_106B31C8 + 12) + a2;
      return sub_100EC3F0((_DWORD *)this, (int)sub_102BC470, v3, off_106614DC);
    }
  }
  return result;
}
