void __userpurge sub_101BEC90(int a1@<ecx>, int a2@<ebx>, int *a3)
{
  int v3; // eax
  int v4[3]; // [esp+0h] [ebp-Ch] BYREF

  *(float *)v4 = 0.0;
  v3 = *a3;
  *(float *)&v4[1] = 0.1;
  *(float *)&v4[2] = -0.25;
  sub_101BE8E0(a1, a2, v3, (int)v4);
}
