char __usercall sub_100D4330@<al>(float *a1@<ecx>, double a2@<st0>)
{
  float v3; // eax
  int v5; // [esp-8h] [ebp-Ch]

  v5 = (*(int (__thiscall **)(float *))(*(_DWORD *)a1 + 1220))(a1);
  v3 = COERCE_FLOAT((*(int (__thiscall **)(float *))(*(_DWORD *)a1 + 1216))(a1));
  return sub_100D4170(a1, a2, v3, v5, 183);
}
