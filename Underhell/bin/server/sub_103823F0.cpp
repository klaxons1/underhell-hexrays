int __thiscall sub_103823F0(_DWORD *this, float a2)
{
  int v3; // esi
  int result; // eax
  int v5; // esi

  v3 = this[965];
  if ( v3 )
  {
    sub_10242820(v3, 0, a2);
    sub_100EC3F0((_DWORD *)v3, (int)sub_102429D0, 0.0, 0);
    *(float *)(v3 + 816) = *(float *)(dword_106B31C8 + 12) + a2;
    result = sub_100EC4A0((int *)v3, *(float *)(dword_106B31C8 + 12), 0);
    this[965] = 0;
  }
  v5 = this[966];
  if ( v5 )
  {
    sub_10242820(v5, 0, a2);
    sub_100EC3F0((_DWORD *)v5, (int)sub_102429D0, 0.0, 0);
    *(float *)(v5 + 816) = *(float *)(dword_106B31C8 + 12) + a2;
    result = sub_100EC4A0((int *)v5, *(float *)(dword_106B31C8 + 12), 0);
    this[966] = 0;
  }
  return result;
}
