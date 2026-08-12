int __thiscall sub_101B2CA0(int this, int a2, int a3)
{
  _DWORD *v3; // esi
  float *v5; // edi
  int v6; // ecx
  int v7; // eax
  float v9[6]; // [esp+4h] [ebp-38h] BYREF
  float v10; // [esp+1Ch] [ebp-20h]
  float v11; // [esp+20h] [ebp-1Ch]
  float v12; // [esp+24h] [ebp-18h]
  float v13; // [esp+28h] [ebp-14h]
  float v14; // [esp+2Ch] [ebp-10h]
  bool v15; // [esp+30h] [ebp-Ch]
  _DWORD *v16; // [esp+34h] [ebp-8h]
  int v17; // [esp+38h] [ebp-4h]

  v11 = 0.0;
  v12 = 0.0;
  v3 = (_DWORD *)(a3 + 24);
  v10 = 1.0;
  v13 = 1.0;
  v14 = 1.0;
  v15 = 1;
  v5 = v9;
  v16 = (_DWORD *)(a3 + 24);
  v17 = 2;
  v9[0] = 0.0;
  v9[1] = 0.0;
  v9[2] = 0.0;
  v9[3] = 0.0;
  v9[4] = 0.0;
  v9[5] = 0.0;
  do
  {
    if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
      sub_100DAE60(this);
    (*(void (__thiscall **)(_DWORD, float *, int))(*(_DWORD *)*v3 + 224))(*v3, v5, this + 580);
    ++v3;
    v5 += 3;
    --v17;
  }
  while ( v17 );
  v6 = *(_DWORD *)(this + 248);
  v10 = 1.0;
  v11 = *(float *)(this + 820) * 0.45454544;
  v13 = *(float *)(a3 + 36);
  v15 = (v6 & 4) == 0;
  v7 = *(_DWORD *)(a3 + 28);
  v14 = *(float *)(a3 + 40);
  v12 = 0.0;
  return (*(int (__thiscall **)(int, _DWORD, int, int, float *))(*(_DWORD *)dword_106BAFF4 + 76))(
           dword_106BAFF4,
           *v16,
           v7,
           a2,
           v9);
}
