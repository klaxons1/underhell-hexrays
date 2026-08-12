char __cdecl sub_10175F70(int a1, int a2, void *a3)
{
  float v4[3]; // [esp+0h] [ebp-18h] BYREF
  _BYTE v5[12]; // [esp+Ch] [ebp-Ch] BYREF

  if ( sub_10175EC0(a1, a2, (int)v5, v4) )
  {
    sub_101F0B70(v4, v5, a3);
    return 1;
  }
  else
  {
    sub_101EE350(a3);
    return 0;
  }
}
