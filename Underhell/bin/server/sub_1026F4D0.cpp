float *__thiscall sub_1026F4D0(_DWORD *this, int a2, float *a3, float *a4, int a5)
{
  int (__thiscall ***v6)(_DWORD); // eax
  int v7; // eax
  _DWORD *v8; // esi
  int v9; // eax
  int v10; // eax
  float *v11; // eax
  float *result; // eax
  float *v13; // eax
  int v14; // eax
  void *v15; // ecx
  _BYTE v16[48]; // [esp+14h] [ebp-114h] BYREF
  _BYTE v17[48]; // [esp+44h] [ebp-E4h] BYREF
  _BYTE v18[48]; // [esp+74h] [ebp-B4h] BYREF
  _BYTE v19[48]; // [esp+A4h] [ebp-84h] BYREF
  float v20[3]; // [esp+D4h] [ebp-54h] BYREF
  _BYTE v21[48]; // [esp+E0h] [ebp-48h] BYREF
  int v22[3]; // [esp+110h] [ebp-18h] BYREF
  int v23[2]; // [esp+11Ch] [ebp-Ch] BYREF
  float v24; // [esp+124h] [ebp-4h]

  v6 = (int (__thiscall ***)(_DWORD))sub_10269EC0(this);
  v7 = (**v6)(v6);
  v8 = (_DWORD *)v7;
  if ( !v7 || !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v7 + 320))(v7) )
    v8 = 0;
  v9 = sub_10269EC0(this);
  if ( v9 )
    v10 = v9 - 1576;
  else
    v10 = 0;
  if ( *(_BYTE *)(v10 + 1672) )
  {
    v11 = sub_100E8850((int)v8, v20);
    *a3 = *v11;
    a3[1] = v11[1];
    a3[2] = v11[2];
    result = (float *)sub_1001F410(v8);
    *a4 = *result;
    a4[1] = result[1];
    a4[2] = result[2];
  }
  else
  {
    v13 = (float *)(*(int (__thiscall **)(_DWORD *))(*v8 + 508))(v8);
    *a4 = *v13;
    a4[1] = v13[1];
    a4[2] = v13[2];
    v14 = sub_10269EC0(this);
    if ( v14 )
      v15 = (void *)(v14 - 1576);
    else
      v15 = 0;
    sub_100BEFA0(v15, "vehicle_driver_eyes", (int)v22, (int)v23);
    sub_104227F0(v23);
    sub_104227F0(a4);
    sub_10424F80(v21, v17);
    sub_10421E30(v17, v18, v16);
    *(float *)v23 = sub_10144FD0(10.0, 45.0, *(float *)v23);
    v24 = sub_10144FD0(5.0, 45.0, v24);
    sub_10425040(v23, v22, v21);
    sub_10421E30(v21, v16, v19);
    sub_10421A90(v19, a4);
    return (float *)sub_10421CE0(v19, 3, a3);
  }
  return result;
}
