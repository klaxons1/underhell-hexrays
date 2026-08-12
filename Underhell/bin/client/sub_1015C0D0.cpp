float *__thiscall sub_1015C0D0(_DWORD *this, int a2, float *a3, float *a4)
{
  int v5; // eax
  int v6; // edx

  v5 = (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 28))(a2);
  if ( v5 && (v6 = this[376], v6 > 0) )
    return (float *)(*(int (__thiscall **)(int, int, float *, float *))(*(_DWORD *)(v5 + 4) + 148))(v5 + 4, v6, a3, a4);
  else
    return sub_10034760(a2, a3, a4);
}
