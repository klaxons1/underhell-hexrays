__int16 __thiscall sub_1007CAE0(_DWORD *this, int a2)
{
  int v3; // eax
  int v4; // ebx
  unsigned __int16 v5; // ax
  int v6; // esi
  int v7; // eax
  int v9; // [esp+Ch] [ebp-8h] BYREF
  int v10; // [esp+10h] [ebp-4h]

  v3 = (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 20))(a2);
  v4 = v3;
  if ( v3 )
  {
    v3 = (*(int (__thiscall **)(int))(*(_DWORD *)v3 + 76))(v3);
    v10 = v3;
    if ( v3 )
    {
      v5 = sub_1007AC10(this + 24598, 0);
      v6 = v5;
      sub_1007B870((int)(this + 24598), 0xFFFFu, v5);
      v9 = v6;
      v7 = this[24598] + 16 * v6;
      *(_DWORD *)v7 = v10;
      *(_DWORD *)(v7 + 4) = v4;
      *(_BYTE *)(v7 + 8) = 0;
      *(_WORD *)(v7 + 10) = v6;
      LOWORD(v3) = sub_1007CA10((int)(this + 24605), &a2, (__int16 *)&v9);
    }
  }
  return v3;
}
