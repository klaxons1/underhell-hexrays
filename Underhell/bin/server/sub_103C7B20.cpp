void *__cdecl sub_103C7B20(float *a1, int a2)
{
  void *result; // eax
  void *v3; // esi

  result = (void *)sub_101811E0("vort_effect_dispel", -1);
  v3 = result;
  if ( result )
  {
    sub_1025F370(result, a1, 0);
    (*(void (__thiscall **)(void *, int))(*(_DWORD *)v3 + 76))(v3, a2);
    (*(void (__thiscall **)(void *))(*(_DWORD *)v3 + 96))(v3);
    return v3;
  }
  return result;
}
