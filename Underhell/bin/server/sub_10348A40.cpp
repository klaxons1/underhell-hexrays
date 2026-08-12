int __thiscall sub_10348A40(int this)
{
  float v3; // [esp+0h] [ebp-Ch]
  float v4; // [esp+0h] [ebp-Ch]

  if ( *(_BYTE *)(this + 3639) )
  {
    *(_BYTE *)(this + 3639) = 0;
    *(_DWORD *)(this + 3644) = -1;
    v3 = *(float *)(dword_106B31C8 + 12) + 0.1;
    return sub_100EC4A0((int *)this, v3, 0);
  }
  else
  {
    *(_BYTE *)(this + 3639) = 1;
    sub_100EC3F0((_DWORD *)this, (int)sub_10348190, 0.0, 0);
    v4 = *(float *)(dword_106B31C8 + 12) + 0.050000001;
    return sub_100EC4A0((int *)this, v4, 0);
  }
}
