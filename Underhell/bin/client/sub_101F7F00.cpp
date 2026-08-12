int __userpurge sub_101F7F00@<eax>(int result@<eax>, int a2@<ecx>, float a3)
{
  int v3; // edx
  bool v4; // sf

  v3 = 0;
  v4 = *(int *)(a2 + 6040) < 0;
  *(float *)(a2 + 48) = a3;
  if ( !v4 )
  {
    result = a2 + 104;
    do
    {
      ++v3;
      *(float *)(result - 4) = *(float *)(result - 16);
      result += 68;
      *(float *)(result - 68) = *(float *)(result - 80);
      *(float *)(result - 64) = *(float *)(result - 76);
    }
    while ( v3 <= *(_DWORD *)(a2 + 6040) );
  }
  *(_DWORD *)(a2 + 6592) |= 2u;
  return result;
}
