int __thiscall sub_102806C0(int this)
{
  int *v2; // eax
  double v4; // st7
  __int64 v5; // [esp-4h] [ebp-1Ch]
  __int64 v6; // [esp-4h] [ebp-1Ch]
  float v7; // [esp+0h] [ebp-18h]
  _BYTE v8[12]; // [esp+Ch] [ebp-Ch] BYREF

  v2 = *(int **)(this + 424);
  if ( !v2 )
    return sub_100EC4A0((int *)this, -1.0, 0);
  v4 = sub_101C0960(v2, this, (int)v8);
  if ( v4 <= *(float *)(this + 848) || *(_BYTE *)(this + 852) )
  {
    if ( v4 < *(float *)(this + 848) )
    {
      if ( *(_BYTE *)(this + 852) )
      {
        HIDWORD(v6) = this;
        LODWORD(v6) = this;
        sub_1010DD80((_DWORD *)(this + 824), v6, 0.0);
        *(_BYTE *)(this + 852) = 0;
      }
    }
  }
  else
  {
    HIDWORD(v5) = this;
    LODWORD(v5) = this;
    sub_1010DD80((_DWORD *)(this + 800), v5, 0.0);
    *(_BYTE *)(this + 852) = 1;
  }
  v7 = *(float *)(dword_106B31C8 + 28) + *(float *)(dword_106B31C8 + 12);
  return sub_100EC4A0((int *)this, v7, 0);
}
