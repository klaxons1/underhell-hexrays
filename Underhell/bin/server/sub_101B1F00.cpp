int __thiscall sub_101B1F00(int this, int a2, int a3)
{
  int v4; // eax
  _BYTE v6[48]; // [esp+8h] [ebp-114h] BYREF
  _BYTE v7[48]; // [esp+38h] [ebp-E4h] BYREF
  float v8[6]; // [esp+68h] [ebp-B4h] BYREF
  _BYTE v9[48]; // [esp+80h] [ebp-9Ch] BYREF
  _BYTE v10[56]; // [esp+B0h] [ebp-6Ch] BYREF
  float v11; // [esp+E8h] [ebp-34h]
  float v12; // [esp+ECh] [ebp-30h]
  float v13; // [esp+F0h] [ebp-2Ch]
  float v14; // [esp+F4h] [ebp-28h]
  float v15; // [esp+F8h] [ebp-24h]
  float v16; // [esp+FCh] [ebp-20h]
  float v17; // [esp+100h] [ebp-1Ch]
  float v18; // [esp+104h] [ebp-18h]
  float v19; // [esp+108h] [ebp-14h]
  float v20; // [esp+10Ch] [ebp-10h]
  float v21; // [esp+110h] [ebp-Ch]
  float v22; // [esp+114h] [ebp-8h]
  bool v23; // [esp+118h] [ebp-4h]
  char v24; // [esp+119h] [ebp-3h]

  sub_101AFF90(v8);
  (*(void (__thiscall **)(_DWORD, _BYTE *))(**(_DWORD **)(a3 + 24) + 192))(*(_DWORD *)(a3 + 24), v6);
  sub_10424F80(v6, v7);
  if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
    sub_100DAE60(this);
  sub_10421E30(v7, this + 500, v9);
  (*(void (__thiscall **)(_DWORD, _BYTE *))(**(_DWORD **)(a3 + 28) + 192))(*(_DWORD *)(a3 + 28), v6);
  sub_10424F80(v6, v7);
  if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
    sub_100DAE60(this);
  sub_10421E30(v7, this + 500, v10);
  v11 = *(float *)(this + 860);
  v4 = *(_DWORD *)(this + 248);
  v12 = *(float *)(this + 864);
  v13 = 0.0;
  v14 = *(float *)(this + 884);
  v23 = (v4 & 2) != 0;
  v15 = *(float *)(this + 868);
  v16 = *(float *)(this + 872);
  v17 = 0.0;
  v18 = *(float *)(this + 888);
  v19 = *(float *)(this + 876);
  v20 = *(float *)(this + 880);
  v21 = 0.0;
  v22 = *(float *)(this + 892);
  if ( (v4 & 4) != 0 )
    v24 = 0;
  return (*(int (__thiscall **)(int, _DWORD, _DWORD, int, float *))(*(_DWORD *)dword_106BAFF4 + 60))(
           dword_106BAFF4,
           *(_DWORD *)(a3 + 24),
           *(_DWORD *)(a3 + 28),
           a2,
           v8);
}
