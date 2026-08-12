void __stdcall sub_101D15A0(float *a1, int a2, int a3)
{
  float *v3; // esi
  int v4; // ebp

  v3 = a1;
  v4 = 16;
  do
  {
    *(float *)((char *)v3 + a3 - (_DWORD)a1) = sub_101C6890(*v3, *(float *)((char *)v3 + a2 - (_DWORD)a1));
    ++v3;
    --v4;
  }
  while ( v4 );
}
