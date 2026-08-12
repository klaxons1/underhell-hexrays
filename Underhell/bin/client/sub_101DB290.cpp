void __usercall sub_101DB290(
        char a1@<al>,
        char a2@<cl>,
        int a3,
        int a4,
        int a5,
        int a6,
        char a7,
        float *a8,
        char a9,
        char a10)
{
  _BYTE *v10; // edi
  _BYTE *v11; // esi
  int v12; // ebx
  int v13; // [esp+10h] [ebp-124h] BYREF
  _BYTE v14[32]; // [esp+14h] [ebp-120h] BYREF
  _BYTE v15[256]; // [esp+34h] [ebp-100h] BYREF

  LOBYTE(v13) = 1;
  sub_101E1780(&v13, v14, a5, a10, a2, a1);
  v10 = v15;
  v11 = v14;
  v12 = 3;
  do
  {
    sub_101E18E0(v10, v11, a7);
    v11 += 8;
    v10 += 64;
    --v12;
  }
  while ( v12 );
  sub_101D9960(a4, a8, a3, (int)v15, a6, a7, v13, a9);
}
