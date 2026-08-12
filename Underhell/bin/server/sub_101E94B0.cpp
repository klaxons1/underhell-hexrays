_DWORD *__cdecl sub_101E94B0(_DWORD *a1)
{
  int v1; // ebx
  _DWORD *v2; // edi
  int *v3; // eax
  int v5[3]; // [esp+10h] [ebp-18h] BYREF
  int v6[3]; // [esp+1Ch] [ebp-Ch] BYREF

  v1 = dword_10700AC8;
  (*(void (__thiscall **)(int))(*(_DWORD *)dword_10700AC8 + 100))(dword_10700AC8);
  v2 = (_DWORD *)sub_101E93D0((int)a1, a1, 1);
  if ( !v2 )
  {
    sub_100F5A30(a1, (int)v5, 0, 0);
    v3 = (int *)(*(int (__thiscall **)(_DWORD *))(*a1 + 576))(a1);
    v6[0] = *v3;
    v6[1] = v3[1];
    v6[2] = v3[2];
    v2 = sub_1012C6A0(&dword_1069E3E0, (float *)v6, (float *)v5, 0.94999999);
  }
  (*(void (__thiscall **)(int))(*(_DWORD *)v1 + 104))(v1);
  return v2;
}
