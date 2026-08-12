char __thiscall sub_103FD370(int this, _DWORD *a2, _DWORD *a3)
{
  int v5; // eax
  int v6; // eax
  int v8; // esi
  int v9; // eax
  int *v10; // esi
  int v11; // ebx
  int v12[3]; // [esp+8h] [ebp-54h] BYREF
  float v13[18]; // [esp+14h] [ebp-48h] BYREF
  int v14; // [esp+64h] [ebp+8h]

  if ( sub_100CF460(a2) )
  {
    v5 = sub_100CF460(a2);
    if ( !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v5 + 980))(v5) )
      return sub_103FC8F0((_DWORD *)this, 0.0);
    v6 = sub_100CF460(a2);
    if ( !(*(unsigned __int8 (__thiscall **)(int, _DWORD))(*(_DWORD *)v6 + 996))(v6, 0) )
      return sub_103FC8F0((_DWORD *)this, 0.0);
  }
  if ( a2 && (*(unsigned __int8 (__thiscall **)(_DWORD *))(*a2 + 320))(a2) )
    sub_102E0DB0(a2, 0);
  if ( a3[105] == 1 )
    sub_100EBE30((int)a3, 3);
  (*(void (__thiscall **)(int, _DWORD *, int))(*(_DWORD *)this + 140))(this, a2, -1);
  *(float *)(this + 868) = 0.86602539;
  *(_BYTE *)(this + 873) = 1;
  *(_DWORD *)(this + 9128) = a2;
  v14 = a3[106];
  sub_101FB2E0((int)a3, (int)a2, 2);
  if ( sub_101CB470((int)a3) )
  {
    sub_103FBC00(a2, v12);
    sub_103FACF0(this + 800, a2, a3, v14, 0, v13, 1);
  }
  else
  {
    sub_103FACF0(this + 800, a2, a3, v14, 0, &flt_106F1CA8, 0);
  }
  v8 = *(_DWORD *)(this + 9128);
  v9 = *(_DWORD *)(v8 + 2252);
  v10 = (int *)(v8 + 2252);
  v11 = v9 | 1;
  if ( v9 != (v9 | 1) )
  {
    (*(void (__thiscall **)(int *, int *))*(v10 - 15))(v10 - 15, v10);
    *v10 = v11;
  }
  return sub_101E6590((unsigned int *)(*(_DWORD *)(this + 9128) + 3404), this);
}
