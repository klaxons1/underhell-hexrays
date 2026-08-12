int __thiscall sub_1032F780(_BYTE *this, int a2)
{
  float v3; // eax
  float v4; // edx
  float *v5; // eax
  int i; // edi
  int v7; // ecx
  int v9; // [esp-Ch] [ebp-24h]
  int v10; // [esp-8h] [ebp-20h]
  int v11; // [esp-4h] [ebp-1Ch]
  float v12[3]; // [esp+Ch] [ebp-Ch] BYREF

  if ( (*(_BYTE *)(a2 + 64) & 0x10) != 0 )
  {
    v3 = *(float *)(a2 + 4);
    v4 = *(float *)(a2 + 12);
    v12[1] = *(float *)(a2 + 8);
    v12[0] = v3;
    v12[2] = v4;
    off_10689714();
    v11 = 4;
    v10 = 8;
    if ( this[1668] )
      v9 = (*(int (__thiscall **)(_BYTE *, int, int))(*(_DWORD *)this + 276))(this, 8, 4);
    else
      v9 = 1;
    v5 = (float *)(*(int (__thiscall **)(_BYTE *))(*(_DWORD *)this + 576))(this);
    sub_10124BC0(v5, v12, v9, v10, *(float *)&v11);
  }
  for ( i = 0; i < *((_DWORD *)this + 910); ++i )
  {
    v7 = *(_DWORD *)(*((_DWORD *)this + 907) + 4 * i);
    (*(void (__thiscall **)(int, int))(*(_DWORD *)v7 + 80))(v7, a2);
  }
  return sub_10035690((int)this, a2, i, a2);
}
