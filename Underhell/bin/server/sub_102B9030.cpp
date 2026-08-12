void __thiscall sub_102B9030(int this, int a2, int a3)
{
  int v4; // eax
  int v5; // ecx
  int v6; // esi
  float v7; // [esp+Ch] [ebp-20h]
  float v8; // [esp+Ch] [ebp-20h]
  int v9[3]; // [esp+20h] [ebp-Ch] BYREF

  if ( a2 )
    *(_DWORD *)(this + 68) = *(_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)a2 + 8))(a2);
  else
    *(_DWORD *)(this + 68) = -1;
  v4 = *(_DWORD *)(this + 84);
  *(float *)(this + 72) = *(float *)(dword_106B31C8 + 12);
  *(_DWORD *)(this + 60) = 0;
  if ( a3 == 1 )
  {
    *(_BYTE *)(this + 58) = 0;
    if ( v4 != 4 && v4 != 3 )
    {
      *(_WORD *)(this + 56) = 256;
      *(_DWORD *)(this - 924) = 0;
      sub_100EC3F0((_DWORD *)(this - 1120), (int)sub_102B7820, 0.0, 0);
      v8 = *(float *)(dword_106B31C8 + 12) + 0.1;
      sub_100EC4A0((int *)(this - 1120), v8, 0);
      *(float *)(this + 52) = *(float *)(dword_106B31C8 + 12) + 0.1;
    }
  }
  else if ( v4 == 3 )
  {
    sub_102B7B10((float *)(this - 1120), 1, 255, 255, 0, 190);
    v5 = *(_DWORD *)(this - 696);
    *(float *)(this + 76) = *(float *)(dword_106B31C8 + 12);
    *(_BYTE *)(this + 58) = 1;
    (*(void (__thiscall **)(int, int))(*(_DWORD *)v5 + 60))(v5, 1);
    if ( (*(_DWORD *)(this - 868) & 0x800) != 0 )
      sub_100DAE60(this - 1120);
    v9[0] = *(int *)(this - 540);
    v9[1] = *(int *)(this - 536);
    *(float *)&v9[2] = *(float *)(this - 532) + 60.0;
    sub_1023D4B0(4096, (float *)v9, 32, 0.2, 0, 0, 0);
  }
  else
  {
    *(_BYTE *)(this + 58) = 1;
    if ( v4 != 4 )
    {
      *(_BYTE *)(this + 56) = 0;
      v6 = this - 1120;
      *(_DWORD *)(v6 + 1204) = 1;
      sub_102B7300((volatile signed __int32 *)v6, 1);
      sub_102B7B10((float *)v6, 1, 0, 0, 255, 190);
      sub_100EC3F0((_DWORD *)v6, (int)sub_102B7820, 0.0, 0);
      *(_DWORD *)(v6 + 196) = 0;
      v7 = *(float *)(dword_106B31C8 + 12) + 0.1;
      sub_100EC4A0((int *)v6, v7, 0);
    }
  }
}
