int *__thiscall sub_1026F530(int this, int *a2, int *a3)
{
  int **v3; // ebx
  int *v4; // esi
  int *result; // eax

  v3 = (int **)a3;
  v4 = a2;
  result = sub_1024A400((_DWORD *)this, a2, a3);
  if ( *(_DWORD *)(this + 392) )
  {
    (*(void (__thiscall **)(_DWORD, int **, int **))(**(_DWORD **)(this + 392) + 12))(*(_DWORD *)(this + 392), &a3, &a2);
    *v4 += (int)a3 + 5;
    result = *v3;
    if ( (int)*v3 <= (int)a2 )
      result = a2;
    *v3 = result;
  }
  return result;
}
