int __thiscall sub_103E38A0(_DWORD *this, int a2, int a3, float *a4, int a5)
{
  int (__thiscall ***v6)(_DWORD); // eax
  int v7; // eax
  int v8; // esi
  int v9; // ecx
  float *v10; // eax
  int v11; // eax
  void *v12; // ecx
  _BYTE v14[48]; // [esp+14h] [ebp-108h] BYREF
  char v15[48]; // [esp+44h] [ebp-D8h] BYREF
  _BYTE v16[48]; // [esp+74h] [ebp-A8h] BYREF
  _BYTE v17[48]; // [esp+A4h] [ebp-78h] BYREF
  _BYTE v18[48]; // [esp+D4h] [ebp-48h] BYREF
  int v19[3]; // [esp+104h] [ebp-18h] BYREF
  int v20[2]; // [esp+110h] [ebp-Ch] BYREF
  float v21; // [esp+118h] [ebp-4h]

  v6 = (int (__thiscall ***)(_DWORD))sub_10269EC0(this);
  v7 = (**v6)(v6);
  v8 = v7;
  if ( v7 && (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v7 + 320))(v7) )
    v9 = v8;
  else
    v9 = 0;
  v10 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)v9 + 508))(v9);
  *a4 = *v10;
  a4[1] = v10[1];
  a4[2] = v10[2];
  v11 = sub_10269EC0(this);
  if ( v11 )
    v12 = (void *)(v11 - 1120);
  else
    v12 = 0;
  sub_100BEFA0(v12, "vehicle_driver_eyes", (int)v19, (int)v20);
  sub_104227F0(v20);
  sub_104227F0(a4);
  sub_10424F80(v18, v16);
  sub_10421E30(v16, v15, v14);
  *(float *)v20 = sub_10144FD0(10.0, 45.0, *(float *)v20);
  v21 = sub_10144FD0(5.0, 45.0, v21);
  sub_10425040(v20, v19, v18);
  sub_10421E30(v18, v14, v17);
  sub_10421A90(v17, a4);
  return sub_10421CE0(v17, 3, a3);
}
