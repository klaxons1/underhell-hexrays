int __thiscall sub_10148F20(int this)
{
  int result; // eax
  int v2; // edi
  int v3; // esi
  int v4[256]; // [esp+4h] [ebp-42Ch] BYREF
  char v5[20]; // [esp+404h] [ebp-2Ch] BYREF
  float v6[2]; // [esp+418h] [ebp-18h] BYREF
  float v7; // [esp+420h] [ebp-10h]
  float v8[2]; // [esp+424h] [ebp-Ch] BYREF
  float v9; // [esp+42Ch] [ebp-4h]

  sub_10111910((_BYTE *)(this + 320), (float *)(this + 328), (float *)(this + 340), v8, v6);
  v9 = v9 - 1.0;
  v7 = v7 + 8.0;
  sub_1025F990(v4, 256, 1);
  result = sub_1025F9C0(v8, v6, v5);
  v2 = result;
  if ( result )
  {
    v3 = 0;
    if ( result > 0 )
    {
      do
      {
        result = sub_101C73D0(0);
        ++v3;
      }
      while ( v3 < v2 );
    }
  }
  return result;
}
