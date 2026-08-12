int __cdecl sub_10262120(_DWORD *a1)
{
  _DWORD *v1; // esi
  unsigned int v2; // eax
  int v3; // ecx
  float *v5; // eax
  float v6[3]; // [esp+4h] [ebp-Ch] BYREF

  v1 = a1;
  v2 = a1[77];
  if ( v2 != -1 && off_1061BE18[4 * (a1[77] & 0xFFF) + 2] == v2 >> 12 )
  {
    v3 = off_1061BE18[4 * (a1[77] & 0xFFF) + 1];
    if ( v3 )
    {
      if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v3 + 320))(v3) )
        return 0;
      v1 = sub_100E99F0(a1);
    }
  }
  v5 = (float *)(*(int (__thiscall **)(_DWORD *))(*v1 + 576))(v1);
  v6[0] = *v5;
  v6[1] = v5[1];
  v6[2] = v5[2];
  return (**(int (__thiscall ***)(int, float *, _DWORD))dword_106B31F4)(dword_106B31F4, v6, 0) & 0x200400B;
}
