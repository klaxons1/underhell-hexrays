int __usercall sub_10030570@<eax>(int a1@<esi>, float *a2, float *a3, int a4, int a5, char *a6)
{
  char *v7; // eax
  char v8; // [esp+0h] [ebp-10h] BYREF
  int savedregs; // [esp+10h] [ebp+0h] BYREF

  if ( *(_DWORD *)(dword_1069109C + 48) )
    return sub_1002A5F0((int)&savedregs, a1, a2, a3, 16449, a4, 0, a5);
  sub_10265790(a4, 0, 0);
  v7 = a6;
  if ( !a6 )
    v7 = &v8;
  return sub_10023120(COERCE_FLOAT(&savedregs), a1, a2, a3, 33570881, (int)v7, a5);
}
