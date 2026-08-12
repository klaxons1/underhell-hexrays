void __usercall sub_10146080(int a1@<ebx>, int a2@<edi>, int *a3@<esi>, char a4, char a5)
{
  double v5; // st7
  float *v6; // ebx
  int v7; // eax
  int v8; // edi
  int v9; // eax
  int v10; // ebx
  int v11; // eax
  int v12; // eax
  int v13; // edi
  int v14; // eax
  int v15; // [esp-4h] [ebp-18h]
  float v16; // [esp+0h] [ebp-14h]
  int v17; // [esp+0h] [ebp-14h]
  _DWORD v18[3]; // [esp+4h] [ebp-10h] BYREF
  int v19; // [esp+10h] [ebp-4h]

  v19 = (*(int (__thiscall **)(int *))(*a3 + 52))(a3);
  v5 = (double)v19 * 0.0039215689;
  if ( v5 > 0.0 )
  {
    v16 = v5;
    (*(void (__stdcall **)(_DWORD))(*(_DWORD *)dword_10413168 + 16))(LODWORD(v16));
    (*(void (__thiscall **)(int *, _DWORD *))(*a3 + 56))(a3, v18);
    (*(void (__thiscall **)(int, _DWORD *))(*(_DWORD *)dword_10413168 + 24))(dword_10413168, v18);
    v19 = -2147483647;
    if ( a4 )
      v19 = -2147483639;
    if ( a5 )
      v19 |= 0x40000000u;
    v17 = a1;
    v15 = a2;
    if ( *(_DWORD *)(dword_1043BE8C + 48)
      && (v6 = (float *)(*(int (__thiscall **)(int *, int, int))(*a3 + 152))(a3, a2, a1)) != 0 )
    {
      v7 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_1047C96C + 380))(dword_1047C96C, v15, v17);
      v8 = v7;
      if ( v7 )
        (*(void (__thiscall **)(int))(*(_DWORD *)v7 + 8))(v7);
      if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)dword_1047C96C + 248))(dword_1047C96C) )
        sub_10145090(v6, a3, v8, (int)a3);
      else
        (*(void (__thiscall **)(int, float *))(*(_DWORD *)v8 + 504))(v8, v6);
      v9 = (*(int (__thiscall **)(int *))*a3)(a3);
      v10 = *(_DWORD *)dword_10439968;
      v11 = (*(int (__thiscall **)(int))(*(_DWORD *)v9 + 28))(v9);
      (*(void (__thiscall **)(int, int))(v10 + 116))(dword_10439968, v11);
      (*(void (__thiscall **)(int *, int))(*a3 + 40))(a3, v19);
      (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_10439968 + 116))(dword_10439968, 0);
      if ( !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)dword_1047C96C + 248))(dword_1047C96C) )
        (*(void (__thiscall **)(int))(*(_DWORD *)v8 + 508))(v8);
      if ( v8 )
      {
        (*(void (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)v8 + 12))(v8, v18[0], v18[1]);
        (*(void (__thiscall **)(int))(*(_DWORD *)v8 + 4))(v8);
      }
    }
    else
    {
      v12 = (*(int (__thiscall **)(int *, int, int))*a3)(a3, v15, v17);
      v13 = *(_DWORD *)dword_10439968;
      v14 = (*(int (__thiscall **)(int))(*(_DWORD *)v12 + 28))(v12);
      (*(void (__thiscall **)(int, int))(v13 + 116))(dword_10439968, v14);
      (*(void (__thiscall **)(int *, int))(*a3 + 40))(a3, v19);
      (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_10439968 + 116))(dword_10439968, 0);
    }
  }
}
