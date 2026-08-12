unsigned int sub_1006B600()
{
  void **v1; // [esp+0h] [ebp-70h] BYREF
  float v2[26]; // [esp+4h] [ebp-6Ch] BYREF
  int v3; // [esp+6Ch] [ebp-4h] BYREF

  v1 = &audioparams_t::`vftable';
  v3 = -1;
  sub_10069330(v2, flt_1041118C);
  LODWORD(v2[24]) = dword_104111EC;
  LODWORD(v2[25]) = dword_104111F0;
  if ( v3 != dword_104111F4 )
  {
    ((void (__thiscall *)(void ***, int *))*v1)(&v1, &v3);
    v3 = dword_104111F4;
  }
  sub_10069A10((int)&dword_10411158);
  sub_10069E30(&dword_10411158);
  return sub_1006B490((int)&dword_10411158, (int)&v1);
}
