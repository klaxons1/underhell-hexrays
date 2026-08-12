int __thiscall sub_103816A0(float *this)
{
  __int64 v1; // rdi
  int v2; // eax
  int v3; // eax
  __int64 v5; // [esp-4h] [ebp-18h]
  float v6; // [esp+0h] [ebp-14h]
  float v7; // [esp+10h] [ebp-4h] BYREF

  HIDWORD(v1) = this;
  if ( this[418] < (double)*(float *)(dword_106B31C8 + 12) )
  {
    if ( (*(int (__thiscall **)(float *))(*(_DWORD *)this + 368))(this) )
    {
      v2 = (*(int (__thiscall **)(_DWORD))(*(_DWORD *)HIDWORD(v1) + 368))(HIDWORD(v1));
      sub_10381320((char *)HIDWORD(v1), v2);
      v5 = __PAIR64__(HIDWORD(v1), (*(int (__thiscall **)(_DWORD))(*(_DWORD *)HIDWORD(v1) + 368))(HIDWORD(v1)));
      sub_1010DD80((_DWORD *)(HIDWORD(v1) + 3708), v5, 0.0);
      v7 = (double)*(int *)(HIDWORD(v1) + 3644) + *(float *)(dword_106B31C8 + 12);
      sub_1002ABA0((float *)(HIDWORD(v1) + 1672), &v7);
    }
    else
    {
      sub_100AC080(*(_DWORD *)(HIDWORD(v1) + 2404), (int)*(float *)(HIDWORD(v1) + 3688));
      v3 = (*(int (__thiscall **)(_DWORD))(*(_DWORD *)HIDWORD(v1) + 1480))(HIDWORD(v1));
      LODWORD(v1) = v3;
      if ( v3 )
      {
        sub_10381320((char *)HIDWORD(v1), v3);
        sub_1010DD80((_DWORD *)(HIDWORD(v1) + 3708), v1, 0.0);
        v7 = (double)*(int *)(HIDWORD(v1) + 3644) + *(float *)(dword_106B31C8 + 12);
        sub_1002ABA0((float *)(HIDWORD(v1) + 1672), &v7);
      }
    }
  }
  v6 = *(float *)(dword_106B31C8 + 12) + 0.1;
  return sub_100EC4A0((int *)HIDWORD(v1), v6, 0);
}
