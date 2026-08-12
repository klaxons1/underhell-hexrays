void __thiscall sub_1002DBE0(int this)
{
  _DWORD *v2; // eax
  int v3; // ecx
  _BYTE v4[12]; // [esp+10h] [ebp-30h] BYREF
  _BYTE v5[12]; // [esp+1Ch] [ebp-24h] BYREF
  _DWORD v6[3]; // [esp+28h] [ebp-18h] BYREF
  float v7[3]; // [esp+34h] [ebp-Ch] BYREF

  if ( *(_BYTE *)(this + 1984) == 1 )
  {
    (*(void (__thiscall **)(int))(*(_DWORD *)(this - 4) + 4))(this - 4);
  }
  else
  {
    if ( *(_DWORD *)(dword_1040381C + 48) )
    {
      v2 = (_DWORD *)(*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 1180) + 8))(*(_DWORD *)(this + 1180));
      v6[0] = *v2;
      v3 = *(_DWORD *)(this + 1180);
      v6[1] = v2[1];
      v6[2] = v2[2];
      (*(void (__thiscall **)(int, _BYTE *, _BYTE *))(*(_DWORD *)v3 + 12))(v3, v4, v5);
      v7[0] = 0.0;
      v7[1] = 0.0;
      v7[2] = 0.0;
      (*(void (__thiscall **)(int, _DWORD *, _BYTE *, _BYTE *, float *, _DWORD, int, _DWORD, int, _DWORD))(*(_DWORD *)dword_1041316C + 4))(
        dword_1041316C,
        v6,
        v4,
        v5,
        v7,
        0,
        255,
        0,
        16,
        0.0);
    }
    sub_10026250(this - 12);
    sub_1002DB30(this - 12);
  }
}
