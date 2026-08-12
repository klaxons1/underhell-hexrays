int __thiscall sub_102C6C50(int this, const char *a2)
{
  __int16 v3; // di
  unsigned __int16 v4; // ax
  const char *v6; // [esp+8h] [ebp-180h] BYREF
  int v7[94]; // [esp+10h] [ebp-178h] BYREF

  if ( a2 )
  {
    sub_102C5700((int)v7);
    v6 = a2;
    v3 = sub_102C2830((_WORD *)(this + 96), (int)&v6);
    sub_102C5840(v7);
    v4 = v3;
  }
  else
  {
    v4 = -1;
  }
  if ( v4 == 0xFFFF )
    v4 = sub_102C66B0((void *)(this + 96), a2);
  return 392 * v4 + *(_DWORD *)(this + 100) + 16;
}
