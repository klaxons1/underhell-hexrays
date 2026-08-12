char __thiscall sub_1003D550(int this, float a2)
{
  int v3; // ebx
  unsigned __int16 v4; // ax
  int v5; // esi
  float v7[3]; // [esp+8h] [ebp-1Ch] BYREF
  float v8[3]; // [esp+14h] [ebp-10h] BYREF
  int v9; // [esp+20h] [ebp-4h] BYREF

  v3 = sub_10039720(this, &a2, v7, v8, &v9);
  if ( v9 )
  {
    v4 = *(_WORD *)(this + 1172);
    if ( v4 != 0xFFFF )
    {
      v5 = *(unsigned __int16 *)(this + 1172);
      sub_1003A300(&dword_103D8A7C, v4);
      *(_WORD *)(dword_103D8A7C + 8 * v5 + 6) = word_103D8A8C;
      word_103D8A8C = v5;
      *(_WORD *)(this + 1172) = -1;
    }
  }
  if ( v3 )
    sub_10034660((float *)this, v7, v8, 0);
  return 1;
}
