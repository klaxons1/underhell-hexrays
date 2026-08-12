int __thiscall sub_102A5850(int *this, int a2)
{
  int v2; // eax
  int result; // eax
  float v4; // [esp+8h] [ebp-1Ch] BYREF
  int v5; // [esp+Ch] [ebp-18h] BYREF
  float v6; // [esp+10h] [ebp-14h]
  float v7; // [esp+14h] [ebp-10h]
  int v8[3]; // [esp+18h] [ebp-Ch] BYREF

  v2 = this[49];
  v7 = *(float *)(dword_106B31C8 + 12);
  v4 = *(float *)a2;
  v5 = *(int *)(a2 + 4);
  v6 = *(float *)(a2 + 8);
  result = sub_102A4E30(this + 46, v2, &v4);
  if ( *(_DWORD *)(dword_106DB69C + 48) )
  {
    *(float *)v8 = 8.0;
    *(float *)&v8[1] = 8.0;
    *(float *)&v8[2] = 8.0;
    *(float *)&v5 = -8.0;
    v6 = -8.0;
    v7 = -8.0;
    return sub_1011BB20(a2, (int)&v5, (int)v8, 255, 0, 0, 0, 2.0);
  }
  return result;
}
