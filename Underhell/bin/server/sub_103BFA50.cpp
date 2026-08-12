float *__stdcall sub_103BFA50(float *a1, int a2, int a3)
{
  int v3; // edi
  double v4; // st7
  float *result; // eax

  v3 = 1;
  if ( a3 )
  {
    if ( (*(int (__thiscall **)(int))(*(_DWORD *)a3 + 220))(a3) == 1
      || (*(int (__thiscall **)(int))(*(_DWORD *)a3 + 220))(a3) == 4
      || (*(int (__thiscall **)(int))(*(_DWORD *)a3 + 220))(a3) == 19 )
    {
      v3 = 4;
    }
    else if ( (*(int (__thiscall **)(int))(*(_DWORD *)a3 + 220))(a3) == 9 )
    {
      v3 = 3;
    }
  }
  v4 = *((float *)sub_102B1F10() + 2 * v3) * 0.087159999;
  result = a1;
  *a1 = v4;
  a1[1] = v4;
  a1[2] = v4;
  return result;
}
