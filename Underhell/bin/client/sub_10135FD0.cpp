int __cdecl sub_10135FD0(int a1)
{
  float v2[3]; // [esp+30h] [ebp-18h] BYREF
  float v3[3]; // [esp+3Ch] [ebp-Ch] BYREF

  sub_10135F40(a1, v3, v2);
  return Warning("spec_goto %.1f %.1f %.1f %.1f %.1f\n", v3[0], v3[1], v3[2], v2[0], v2[1]);
}
