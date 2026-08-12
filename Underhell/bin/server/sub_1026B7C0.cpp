void __thiscall sub_1026B7C0(int *this)
{
  int v2; // edx
  int (*v3)(void); // eax
  _BYTE *v4; // edi
  float v5[3]; // [esp+14h] [ebp-14h] BYREF
  __int16 v6; // [esp+20h] [ebp-8h]
  char v7; // [esp+22h] [ebp-6h]
  char v8; // [esp+23h] [ebp-5h]
  char v9; // [esp+24h] [ebp-4h]

  v2 = *this;
  this[101] = 0;
  v3 = *(int (**)(void))(v2 + 236);
  v5[0] = *(float *)(dword_106B31C8 + 16);
  v6 = 0;
  v7 = 0;
  v5[1] = 0.0;
  v9 = 0;
  v5[2] = 0.0;
  v8 = v3();
  if ( sub_1026B410((int)this, v5) == 3 )
  {
    v4 = (_BYTE *)this[59];
    if ( v4 )
    {
      if ( *v4 )
      {
        if ( *(_DWORD *)(dword_106CEF04 + 48) )
          Msg("Playing non-looping vehicle sound: %s\n", (const char *)this[59]);
        sub_1023C380((_DWORD *)this[11], (int)v4, 0.0, 0);
      }
    }
  }
}
