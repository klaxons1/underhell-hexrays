float *__thiscall sub_100709B0(int *this, int a2, float *a3, float *a4)
{
  int v4; // ebx
  int v6; // edi
  void (__thiscall *v7)(int, int, float *, float *); // eax
  int v8; // ecx
  float *v9; // edi
  float *result; // eax

  v4 = a2;
  v6 = (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 28))(a2);
  if ( !v6 || this[309] <= 0 )
    return sub_10034760(v4, a3, a4);
  sub_1002E560((char *)&a2 + 3, 1, 1);
  v7 = *(void (__thiscall **)(int, int, float *, float *))(*(_DWORD *)(v6 + 4) + 148);
  v8 = v6 + 4;
  v9 = a3;
  v7(v8, this[309], a3, a4);
  result = (float *)sub_1002B550();
  if ( (this[311] & 4) != 0 )
    return sub_100478B0(v9, 1);
  return result;
}
