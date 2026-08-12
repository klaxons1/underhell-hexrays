int __thiscall sub_1019EAE0(int this)
{
  int v2[3]; // [esp+8h] [ebp-Ch] BYREF

  v2[0] = *(int *)(this + 4);
  v2[1] = *(int *)(this + 8);
  *(float *)&v2[2] = *(float *)(this + 12) + 36.0;
  *(_DWORD *)(this + 24) = sub_1019E380(dword_106B8370, (float *)v2, 120.0);
  return 0;
}
