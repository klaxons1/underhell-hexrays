float *__cdecl sub_101143D0(_DWORD *a1, float a2)
{
  _DWORD *v2; // eax
  float *v3; // esi
  float *v5; // eax

  v2 = sub_10034900(0x4F0u);
  if ( v2 )
    v3 = (float *)sub_10049740(v2);
  else
    v3 = 0;
  if ( (*(unsigned __int8 (__thiscall **)(float *, const char *, int))(*(_DWORD *)v3 + 324))(
         v3,
         "sprites/blueglow1.vmt",
         8) )
  {
    sub_1000DEB0(a1, 0x10000000);
    sub_1003CB30((int)v3, a1, 0);
    (*(void (__thiscall **)(_DWORD *, _DWORD))(*((_DWORD *)v3 + 2) + 20))((_DWORD *)v3 + 2, 0);
    v5 = (float *)(*(int (__thiscall **)(_DWORD *))(*a1 + 36))(a1);
    sub_10037BA0((int)v3, v5);
    v3[299] = a2;
    v3[300] = 2.0;
    v3[306] = 0.0;
    *((_BYTE *)v3 + 1256) = 0;
    v3[302] = 1.9;
    v3[303] = 0.1;
    v3[305] = 1.0;
    v3[307] = 0.0;
    v3[301] = 0.0;
    v3[304] = 0.0;
    sub_1000FC30(a1, (int)v3);
    return v3;
  }
  else
  {
    (*(void (__thiscall **)(_DWORD *))(*((_DWORD *)v3 + 2) + 4))((_DWORD *)v3 + 2);
    return 0;
  }
}
