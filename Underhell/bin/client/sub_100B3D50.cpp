int __thiscall sub_100B3D50(_DWORD *this, int a2)
{
  int v2; // esi
  int v4; // ecx
  int (__thiscall *v5)(int, int *, const char *, int); // edx
  int result; // eax

  v2 = a2;
  v4 = *(_DWORD *)(*(int (__thiscall **)(int, int *, const char *, int))(*(_DWORD *)a2 + 20))(
                    a2,
                    &a2,
                    "Normal",
                    -12529409);
  a2 = -16764673;
  this[4] = v4;
  this[5] = *(_DWORD *)(*(int (__thiscall **)(int, int *, const char *, int))(*(_DWORD *)v2 + 20))(
                         v2,
                         &a2,
                         "Caution",
                         -16764673);
  v5 = *(int (__thiscall **)(int, int *, const char *, int))(*(_DWORD *)v2 + 20);
  a2 = -16736001;
  result = *(_DWORD *)v5(v2, &a2, "Yellowish", -16736001);
  this[6] = result;
  return result;
}
