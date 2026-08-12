void __thiscall sub_10204340(_DWORD *this, int a2, unsigned int a3)
{
  __int64 v3; // rdi
  _DWORD *v4; // ecx
  __int64 v5; // [esp-8h] [ebp-14h]
  float v6; // [esp+0h] [ebp-Ch]

  v3 = __PAIR64__((unsigned int)this, a3);
  v6 = 0.0;
  v5 = __PAIR64__((unsigned int)this, a3);
  if ( a2 == -1 )
  {
    sub_1010DD80(this + 220, __SPAIR64__((unsigned int)this, a3), v6);
    sub_1010DD80((_DWORD *)(HIDWORD(v3) + 904), v3, 0.0);
  }
  else
  {
    if ( a2 == 1 )
    {
      v4 = this + 232;
    }
    else
    {
      sub_1010DD80(this + 244, __SPAIR64__((unsigned int)this, a3), v6);
      v6 = 0.0;
      v5 = __PAIR64__(HIDWORD(v3), a3);
      v4 = (_DWORD *)(HIDWORD(v3) + 904);
    }
    sub_1010DD80(v4, v5, v6);
    sub_1010DD80((_DWORD *)(HIDWORD(v3) + 952), v3, 0.0);
  }
}
