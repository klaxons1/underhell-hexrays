int __thiscall sub_101A5170(_DWORD *this, int a2)
{
  int v3; // eax
  int v4; // eax
  int v6[3]; // [esp+4h] [ebp-18h] BYREF
  int v7[3]; // [esp+10h] [ebp-Ch] BYREF

  if ( this[973] == 1 )
  {
    v3 = sub_100BF520((int)this, "helmet");
    if ( sub_100BF4B0((int)this, v3) )
    {
      sub_100BEFA0(this, "Eyes", (int)v6, (int)v7);
      sub_10021920(this, (int)"item_helmet_worker", v6[0], v6[1], v6[2], v7[0], v7[1], v7[2]);
      v4 = sub_100BF520((int)this, "helmet");
      sub_100C1600((int)this, v4, 0);
    }
  }
  return sub_1032F780(a2);
}
