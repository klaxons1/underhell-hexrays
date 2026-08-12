int __usercall sub_102DC2D0@<eax>(int a1@<ecx>, double a2@<st0>)
{
  int v2; // ebx
  _DWORD *v4; // esi
  int v5; // ebx
  int v7; // [esp+Ch] [ebp-4h]

  v2 = dword_10700AC8;
  v7 = dword_10700AC8;
  (*(void (__thiscall **)(int))(*(_DWORD *)dword_10700AC8 + 100))(dword_10700AC8);
  v4 = (_DWORD *)sub_101E7EA0((_DWORD *)a1, 0);
  if ( v4 && !sub_100CF460((_DWORD *)a1) )
  {
    (*(void (__thiscall **)(_DWORD *, const char *, _DWORD))(*v4 + 840))(v4, "models/weapons/v_hands.mdl", 0);
    sub_101ED530(a1, 1);
    v5 = sub_100BDCE0((int)v4, 174);
    if ( v5 >= 0 )
    {
      (*(void (__thiscall **)(_DWORD *, int))(*v4 + 836))(v4, v5);
      sub_10019B30(v4, v5);
      *(float *)(a1 + 5600) = a2 + *(float *)(dword_106B31C8 + 12);
    }
    v2 = v7;
  }
  return (*(int (__thiscall **)(int))(*(_DWORD *)v2 + 104))(v2);
}
