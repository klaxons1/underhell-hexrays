void __thiscall sub_101710E0(int this)
{
  char *v2; // eax
  float *v3; // eax
  float v4[3]; // [esp+4h] [ebp-18h] BYREF
  float v5[3]; // [esp+10h] [ebp-Ch] BYREF

  v2 = *(char **)(this + 212);
  if ( !v2 )
    v2 = (char *)String;
  v3 = (float *)sub_1012BF20(&dword_1069E3E0, 0, v2, 0, 0, 0, 0);
  if ( v3 )
  {
    v5[0] = v3[179] - *(float *)(this + 716);
    v5[1] = v3[180] - *(float *)(this + 720);
    v5[2] = v3[181] - *(float *)(this + 724);
    off_10689714();
    sub_10422540(v5, v4);
    sub_100E11A0(this, v4);
  }
}
