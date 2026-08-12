void __thiscall sub_103D5D90(_DWORD *this, _DWORD *a2)
{
  __int64 v2; // rdi

  v2 = __PAIR64__((unsigned int)this, (unsigned int)a2);
  sub_1010DD80(this + 215, __SPAIR64__((unsigned int)this, (unsigned int)a2), 0.0);
  if ( (*(_DWORD *)(HIDWORD(v2) + 844))-- == 1 )
    sub_1010DD80((_DWORD *)(HIDWORD(v2) + 956), v2, 0.0);
  if ( (*(_DWORD *)(HIDWORD(v2) + 248) & 0x2000) != 0 )
  {
    sub_101129A0((unsigned __int16 *)(HIDWORD(v2) + 320), *(_WORD *)(HIDWORD(v2) + 356) | 8);
    *(_DWORD *)(HIDWORD(v2) + 196) = sub_103D5390;
  }
  if ( a2 )
    sub_100EC3F0(a2, 0, *(float *)(dword_106B31C8 + 12), off_1067E564);
}
