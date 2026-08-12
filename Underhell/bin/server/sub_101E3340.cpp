float *__cdecl sub_101E3340(char a1, int a2, int a3, float a4, float a5, float a6)
{
  float *result; // eax
  float *v7; // esi

  result = (float *)sub_101811E0("player_loadsaved", -1);
  v7 = result;
  if ( result )
  {
    sub_1025F370(result, &a1, 0);
    (*(void (__thiscall **)(float *))(*(_DWORD *)v7 + 96))(v7);
    v7[201] = a4;
    result = v7;
    v7[202] = a5;
    v7[200] = a6;
  }
  return result;
}
