char __usercall sub_10403700@<al>(float *a1@<ecx>, double a2@<st0>)
{
  float v3; // eax
  char v4; // bl
  int v6; // [esp-4h] [ebp-10h]

  v6 = (*(int (__thiscall **)(float *))(*(_DWORD *)a1 + 1220))(a1);
  v3 = COERCE_FLOAT((*(int (__thiscall **)(float *))(*(_DWORD *)a1 + 1216))(a1));
  v4 = sub_100D4170(a1, a2, v3, v6, 183);
  if ( v4 )
  {
    (*(void (__thiscall **)(float *, int, _DWORD))(*(_DWORD *)a1 + 1132))(a1, 7, 0.0);
    a1[350] = 0.0;
  }
  return v4;
}
