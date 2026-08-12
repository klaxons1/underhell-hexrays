int __usercall sub_1014BBF0@<eax>(float *a1@<ecx>, int a2@<edi>)
{
  int v3; // esi

  sub_1014B3A0(a1, a2, *(a1 - 81), *((_DWORD *)a1 + 33), COERCE_INT(0.0), -1);
  (*(void (__thiscall **)(int, _DWORD, int))(*(_DWORD *)dword_10413168 + 120))(dword_10413168, *((_DWORD *)a1 - 85), 1);
  sub_101443F0();
  sub_1014B480((int *)a1, *(a1 - 81), -1, 0.0);
  v3 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_1047C96C + 380))(dword_1047C96C);
  if ( v3 )
    (*(void (__thiscall **)(int))(*(_DWORD *)v3 + 8))(v3);
  (*(void (__thiscall **)(int, _DWORD, _DWORD, _DWORD, int))(*(_DWORD *)v3 + 292))(v3, 0, 0, 0, 255);
  (*(void (__thiscall **)(int))(*(_DWORD *)v3 + 12))(v3);
  return (*(int (__thiscall **)(int))(*(_DWORD *)v3 + 4))(v3);
}
