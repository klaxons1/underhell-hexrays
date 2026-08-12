int __userpurge sub_10136E50@<eax>(int a1@<esi>, int a2, int a3, int a4, float *a5, int a6, float a7)
{
  float v8; // [esp+0h] [ebp-38h]

  v8 = (float)a3;
  return sub_10017D90(
           a1,
           128,
           a2 + 352,
           a6,
           v8,
           a4,
           (float *)(a2 + 60),
           (float *)(a2 + 180),
           *(float *)(a2 + 204),
           *(float *)(a2 + 208),
           *(float *)(a2 + 216),
           *(float *)(a2 + 196),
           *(float *)(a2 + 240),
           *(_DWORD *)(a2 + 252),
           *(_DWORD *)(a2 + 52),
           a5,
           *(float *)(a2 + 212),
           a7);
}
