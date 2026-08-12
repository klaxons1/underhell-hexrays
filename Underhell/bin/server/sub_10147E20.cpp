bool __userpurge sub_10147E20@<al>(int a1@<ecx>, int a2@<esi>, float *a3, int a4, int a5)
{
  int v5; // eax
  float v7[4]; // [esp+0h] [ebp-10h] BYREF

  v5 = *(_DWORD *)(a1 + 800);
  if ( v5 == -1 )
    return 0;
  if ( (*(unsigned __int8 (__thiscall **)(int, float *, int, float *, int))(*(_DWORD *)dword_106B31D0 + 264))(
         dword_106B31D0,
         a3,
         v5,
         v7,
         a2) )
  {
    return a3[1] * v7[1] + *a3 * v7[0] + a3[2] * v7[2] - v7[3] + 80.0 > 0.0;
  }
  return 1;
}
