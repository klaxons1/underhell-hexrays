int __thiscall sub_1008E190(_DWORD *this, float *a2, float *a3, int a4, int a5, int a6, char a7)
{
  int i; // edi
  int v9; // eax
  float *v10; // ecx
  int result; // eax
  float *v12; // ecx

  if ( !*this )
  {
    *this = sub_10184390(200);
    for ( i = 0; i < 200; i += 4 )
      *(_DWORD *)(i + *this) = sub_10184390(40);
  }
  v9 = dword_10693710;
  if ( dword_10693710 >= 50 )
    v9 = 0;
  v10 = *(float **)(*this + 4 * v9);
  result = v9 + 1;
  *v10 = *a2;
  dword_10693710 = result;
  v10[1] = a2[1];
  v10[2] = a2[2];
  v12 = *(float **)(*this + 4 * result - 4);
  v12[3] = *a3;
  v12[4] = a3[1];
  v12[5] = a3[2];
  *(_DWORD *)(*(_DWORD *)(*this + 4 * result - 4) + 24) = a4;
  *(_DWORD *)(*(_DWORD *)(*this + 4 * result - 4) + 28) = a5;
  *(_DWORD *)(*(_DWORD *)(*this + 4 * result - 4) + 32) = a6;
  *(_BYTE *)(*(_DWORD *)(*this + 4 * result - 4) + 36) = a7;
  *(_BYTE *)(*(_DWORD *)(*this + 4 * result - 4) + 37) = 1;
  return result;
}
