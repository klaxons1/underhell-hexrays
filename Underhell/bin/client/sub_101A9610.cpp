void __usercall sub_101A9610(int a1@<edi>, int a2)
{
  _DWORD *v2; // eax
  int v3; // esi
  float v4[21]; // [esp+4h] [ebp-88h] BYREF
  float v5[3]; // [esp+58h] [ebp-34h] BYREF
  float v6[3]; // [esp+64h] [ebp-28h] BYREF
  float v7[3]; // [esp+70h] [ebp-1Ch] BYREF
  float v8; // [esp+7Ch] [ebp-10h] BYREF
  float v9; // [esp+80h] [ebp-Ch] BYREF
  float *v10; // [esp+84h] [ebp-8h] BYREF
  __int16 v11; // [esp+88h] [ebp-4h] BYREF
  int savedregs; // [esp+8Ch] [ebp+0h] BYREF

  v2 = (_DWORD *)sub_100A4440(a2, v7, v6, v5, &v11, &v10, &v9, &v8);
  v3 = (int)v2;
  if ( v2 )
  {
    if ( sub_100A47D0((int)&savedregs, a1, (int)v2, (int *)v7, (int *)v6, v10, v9, v8, v2, v4, 0, (float *)0xFFFFFFFF) )
      sub_100A4B90(v7, (int)v4, (int)v5, (int)v10, 2, 0);
    sub_100A4600(v3, (int)v4, (int)v7, v11);
  }
  else
  {
    v4[11] = 1.0;
    sub_100A4600(0, (int)v4, (int)v7, v11);
  }
}
