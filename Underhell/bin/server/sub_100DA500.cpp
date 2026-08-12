void __thiscall sub_100DA500(_BYTE *this, int a2, int a3)
{
  BOOL v5; // ebx
  _BYTE *v6; // edx
  int v7; // eax
  float v8; // [esp+8h] [ebp-1Ch]
  float v9; // [esp+Ch] [ebp-18h]
  int v10; // [esp+1Ch] [ebp-8h]
  int v12; // [esp+2Ch] [ebp+8h]
  _BYTE *v13; // [esp+30h] [ebp+Ch]

  v5 = a2 == 0;
  v6 = *(_BYTE **)(a3 + 4 * v5 + 104);
  v13 = v6;
  if ( (this[306] == 6 || v6[306] == 6) && (*(float *)(a3 + 20) >= 0.5 || v6 != this) )
  {
    v12 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106BAFF8 + 20))(
            dword_106BAFF8,
            *(_DWORD *)(a3 + 4 * v5 + 8));
    v7 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106BAFF8 + 20))(
           dword_106BAFF8,
           *(_DWORD *)(a3 + 4 * a2 + 8));
    v10 = v7;
    if ( *(_WORD *)(v12 + 72) != 88 && *(_WORD *)(v7 + 72) != 88 )
    {
      v9 = *(float *)(a3 + 24);
      v8 = *(float *)(a3 + 20);
      if ( v13 == this )
        sub_101BA710(
          (int)this,
          *(_DWORD *)(a3 + 4 * a2),
          4,
          *(_DWORD *)(a3 + 4 * a2 + 8),
          *(_DWORD *)(a3 + 4 * v5 + 8),
          v8,
          v9);
      else
        sub_101BA710(
          (int)this,
          *(_DWORD *)(a3 + 4 * a2),
          6,
          *(_DWORD *)(a3 + 4 * a2 + 8),
          *(_DWORD *)(a3 + 4 * v5 + 8),
          v8,
          v9);
      sub_101B5D80(a3, a2);
      if ( *(_WORD *)(v12 + 72) == 90 || *(_WORD *)(v10 + 72) == 90 )
        sub_101B5320(a3);
      else
        sub_101B53A0(a3, v12);
    }
  }
}
