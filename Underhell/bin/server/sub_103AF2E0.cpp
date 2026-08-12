int __thiscall sub_103AF2E0(_DWORD *this, float *a2)
{
  char *v2; // edi
  float *v3; // eax
  int (__thiscall *v4)(char *, float *, _DWORD, _DWORD); // edx
  int result; // eax
  char v6[12]; // [esp+8h] [ebp-Ch] BYREF

  v2 = (char *)(this - 905);
  v3 = (float *)(*(int (__thiscall **)(_DWORD *, char *))(*(this - 905) + 504))(this - 905, v6);
  *a2 = *v3;
  a2[1] = v3[1];
  v4 = *(int (__thiscall **)(char *, float *, _DWORD, _DWORD))(*(_DWORD *)v2 + 528);
  a2[2] = v3[2];
  result = v4(v2, a2 + 3, 0, 0);
  a2[6] = 0.5;
  a2[7] = 2048.0;
  return result;
}
