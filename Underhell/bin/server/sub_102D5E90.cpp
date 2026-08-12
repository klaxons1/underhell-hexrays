int __thiscall sub_102D5E90(int this, int a2)
{
  int v3; // eax
  double v4; // st6
  double v5; // st5
  int v6; // eax

  v3 = *(_DWORD *)(a2 + 24);
  if ( v3 == 1 )
    v4 = *(float *)(a2 + 8);
  else
    v4 = 0.0;
  if ( v3 == 1 )
    v5 = *(float *)(a2 + 8);
  else
    v5 = 0.0;
  v6 = dword_106B31C8;
  *(float *)(this + 2120) = v5 + *(float *)(dword_106B31C8 + 12);
  *(float *)(this + 2124) = v4 - 1.5 + *(float *)(v6 + 12);
  sub_100EC3F0((_DWORD *)this, (int)sub_102D5AE0, 0.0, 0);
  return sub_100EC4A0((int *)this, *(float *)(dword_106B31C8 + 12), 0);
}
