int __thiscall sub_1017D2A0(int this, char a2, char a3)
{
  double v4; // st7
  int result; // eax
  _BYTE v6[4]; // [esp+4h] [ebp-Ch] BYREF
  int v7; // [esp+8h] [ebp-8h]
  int v8; // [esp+Ch] [ebp-4h] BYREF

  if ( *(_BYTE *)(this + 2870) && *(_BYTE *)(this + 2869) )
  {
    sub_101F5C50(&a2, &a3);
    (*(void (__thiscall **)(int, int *, _BYTE *))(*(_DWORD *)dword_1047CA68 + 28))(dword_1047CA68, &v8, v6);
    v7 = v8 - *(_DWORD *)(this + 260);
    v4 = (double)v7 + *(float *)(this + 2848);
    *(float *)(this + 2848) = v4;
    if ( v4 <= 360.0 )
    {
      if ( v4 < -360.0 )
        *(float *)(this + 2848) = v4 + 360.0;
    }
    else
    {
      *(float *)(this + 2848) = v4 - 360.0;
    }
    return sub_101F4560(this + 2844, this + 2856);
  }
  return result;
}
