bool __userpurge sub_1034A070@<al>(int *a1@<ecx>, int a2@<edi>, int a3, int a4)
{
  int v5; // edi
  float v7; // [esp+0h] [ebp-4h]
  float v8; // [esp+0h] [ebp-4h]
  float v9; // [esp+10h] [ebp+Ch]

  v9 = (float)a4;
  v7 = (float)a3;
  v5 = (int)(v7 / (double)(*(int (__thiscall **)(int *, int))(*a1 + 448))(a1, a2) * v9);
  v8 = (float)a1[55];
  return (int)(v8 / (double)(*(int (__thiscall **)(int *))(*a1 + 448))(a1) * v9) != v5;
}
