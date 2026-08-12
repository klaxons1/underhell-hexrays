int __usercall sub_10196720@<eax>(int a1@<ecx>, int a2@<ebx>)
{
  double v3; // st7
  int v4; // eax
  int v5; // esi
  float *v6; // eax
  float v8; // [esp+18h] [ebp-28h]
  int v9[3]; // [esp+2Ch] [ebp-14h] BYREF
  float v10; // [esp+38h] [ebp-8h]
  float v11; // [esp+3Ch] [ebp-4h]

  v10 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
          dword_10413198,
          0.2,
          0.30000001);
  v11 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
          dword_10413198,
          1.5,
          2.5);
  if ( 0.0 == *((float *)off_103DC81C + 4) )
  {
    v3 = 0.2;
    v11 = 1.5;
  }
  else
  {
    v3 = v10;
  }
  *(float *)&v9[2] = v3;
  *(float *)&v9[1] = v3;
  *(float *)v9 = v3;
  v4 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_1047C96C + 380))(dword_1047C96C);
  v5 = v4;
  if ( v4 )
    (*(void (__thiscall **)(int))(*(_DWORD *)v4 + 8))(v4);
  (*(void (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)v5 + 36))(v5, *(_DWORD *)(a1 + 1984), 0);
  v8 = *(float *)(a1 + 1976) * v11;
  v6 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)a1 + 36))(a1);
  sub_10017340(a2, *(_DWORD *)(a1 + 1984), v6, v8, (float *)v9, 1.0);
  (*(void (__thiscall **)(int))(*(_DWORD *)v5 + 12))(v5);
  return (*(int (__thiscall **)(int))(*(_DWORD *)v5 + 4))(v5);
}
