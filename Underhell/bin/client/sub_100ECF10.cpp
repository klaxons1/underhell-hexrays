int __thiscall sub_100ECF10(_DWORD *this, _DWORD **a2, float a3, int *a4, int a5, int a6, char a7)
{
  int v8; // eax
  int v9; // edi
  int v10; // eax
  int v12; // ebx

  v8 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this[36] + 92) + 380))(*(_DWORD *)(this[36] + 92));
  v9 = v8;
  if ( v8 )
    (*(void (__thiscall **)(int))(*(_DWORD *)v8 + 8))(v8);
  if ( a7 )
  {
    v10 = (*(int (__thiscall **)(_DWORD, const char *, const char *, int, _DWORD))(**(_DWORD **)(this[36] + 92) + 280))(
            *(_DWORD *)(this[36] + 92),
            "debug/debugparticlewireframe",
            "Other textures",
            1,
            0);
    (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v9 + 36))(v9, v10, 0);
  }
  else
  {
    (*(void (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)v9 + 36))(v9, **a2, this[36]);
  }
  v12 = (*(int (__thiscall **)(int, int, _DWORD, _DWORD, _DWORD))(*(_DWORD *)v9 + 224))(v9, 1, 0, 0, 0);
  *a4 = v12;
  *(_DWORD *)(a5 + 180) = v12;
  *(_BYTE *)(a5 + 188) = 1;
  *(_DWORD *)(a5 + 184) = 7;
  (*(void (__thiscall **)(int, int))(*(_DWORD *)v12 + 40))(v12, 2);
  (*(void (__thiscall **)(_DWORD, int, int, int))(**(_DWORD **)(a5 + 180) + 68))(*(_DWORD *)(a5 + 180), 3200, 4800, a5);
  *(_DWORD *)(a5 + 208) = v12 + 4;
  *(_DWORD *)(a5 + 216) = 0;
  *(_DWORD *)(a5 + 212) = 4800;
  *(_BYTE *)(a5 + 240) = 0;
  *(_DWORD *)(a5 + 220) = *(_DWORD *)(a5 + 156);
  *(_DWORD *)(a5 + 192) = *(_DWORD *)(a5 + 164);
  *(_BYTE *)(a5 + 204) = *(_BYTE *)(a5 + 176);
  *(_DWORD *)(a5 + 224) = 0;
  sub_10016990(a5 + 244, v12, 3200, (_DWORD *)a5);
  *(_DWORD *)(a5 + 224) = 0;
  sub_10016A00((_DWORD *)(a5 + 244));
  *(_DWORD *)(a6 + 8) = **a2;
  *(float *)(a6 + 12) = a3;
  *(_DWORD *)(a6 + 4) = a5;
  (*(void (__thiscall **)(int))(*(_DWORD *)v9 + 12))(v9);
  return (*(int (__thiscall **)(int))(*(_DWORD *)v9 + 4))(v9);
}
