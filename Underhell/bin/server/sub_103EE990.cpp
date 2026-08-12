_DWORD *__cdecl sub_103EE990(float *a1, int a2, int a3, int a4)
{
  _DWORD *result; // eax
  _DWORD *v5; // esi

  result = (_DWORD *)sub_101811E0("trigger_vehicle_cargo", -1);
  v5 = result;
  if ( result )
  {
    sub_1025F370(result, a1, 0);
    sub_1025F360(v5, a2, a3);
    (*(void (__thiscall **)(_DWORD *, int))(*v5 + 76))(v5, a4);
    (*(void (__thiscall **)(_DWORD *, int, int))(*v5 + 140))(v5, a4, -1);
    (*(void (__thiscall **)(_DWORD *))(*v5 + 96))(v5);
    return v5;
  }
  return result;
}
