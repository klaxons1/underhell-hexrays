int __thiscall sub_1008F010(int this, float *a2, float *a3, int a4, int a5, int a6, int a7, float a8, float a9)
{
  unsigned __int8 v10; // al

  v10 = sub_10023500();
  if ( v10 )
    v10 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 4) + 220))(*(_DWORD *)(this + 4)) != 3;
  return sub_1008ED60((_DWORD *)this, 2, a2, a3, a4, a5, a6, a7, a8, a9, flt_104A329C[v10]);
}
