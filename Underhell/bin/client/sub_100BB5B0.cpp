int __usercall sub_100BB5B0@<eax>(int a1@<ecx>, int a2@<esi>)
{
  int result; // eax
  int v4; // ebx
  int v5; // ecx
  void (__thiscall *v6)(int, int); // edx
  char v7; // bl
  int v8; // eax
  int (__thiscall *v9)(int, _BYTE *); // edx
  int v10; // eax
  void (__thiscall *v11)(int, int); // edx
  int v12; // ecx
  void (__thiscall *v13)(int, int); // edx
  int v14; // eax
  int (__thiscall *v15)(int, _BYTE *); // edx
  int v16; // eax
  int (__thiscall *v17)(int, _BYTE *); // edx
  int v18; // eax
  void (__thiscall *v19)(int, int); // edx
  _BYTE v20[4]; // [esp+8h] [ebp-1Ch] BYREF
  _BYTE v21[4]; // [esp+Ch] [ebp-18h] BYREF
  _BYTE v22[4]; // [esp+10h] [ebp-14h] BYREF
  int v23; // [esp+14h] [ebp-10h]
  int v24; // [esp+18h] [ebp-Ch]
  int v25; // [esp+1Fh] [ebp-5h]
  char v26; // [esp+23h] [ebp-1h]

  result = (int)((*(float *)(a1 + 300) - *((float *)off_103DC81C + 3)) * 4.0 * 127.0);
  if ( result <= 127 )
  {
    v4 = result < 0 ? 0 : result;
    if ( v4 < 0 )
      return result;
  }
  else
  {
    v4 = 127;
  }
  if ( *(_DWORD *)(a1 + 320) )
  {
    if ( (*(unsigned __int8 (__thiscall **)(int, int))(*(_DWORD *)(a1 + 44) + 528))(a1 + 44, a2) )
    {
      sub_102366F0(255);
      v5 = *(_DWORD *)(a1 + 320);
      v6 = *(void (__thiscall **)(int, int))(*(_DWORD *)v5 + 216);
      v26 = 127 - v4;
      HIBYTE(v25) = 127 - v4;
      LOWORD(v25) = 0;
      BYTE2(v25) = 0;
      v6(v5, v25);
      v24 = 254 - v4;
      sub_102366F0(254 - v4);
      sub_102366F0(254 - v4);
      v7 = *(_BYTE *)((*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)(a1 + 44) + 224))(a1 + 44, v22) + 2);
      v8 = (*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)(a1 + 44) + 224))(a1 + 44, v21);
      v9 = *(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)(a1 + 44) + 224);
      v23 = *(unsigned __int8 *)(v8 + 1);
      LOBYTE(v25) = *(_BYTE *)v9(a1 + 44, v20);
      v10 = *(_DWORD *)(a1 + 44);
      BYTE1(v25) = v23;
      HIBYTE(v25) = v26;
      v11 = *(void (__thiscall **)(int, int))(v10 + 216);
      BYTE2(v25) = v7;
      v11(a1 + 44, v25);
      return sub_102366F0(v24);
    }
    else
    {
      v12 = *(_DWORD *)(a1 + 320);
      v13 = *(void (__thiscall **)(int, int))(*(_DWORD *)v12 + 216);
      LOWORD(v25) = 0;
      BYTE2(v25) = 0;
      HIBYTE(v25) = v4;
      v13(v12, v25);
      v14 = (*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)(a1 + 44) + 224))(a1 + 44, v20);
      v15 = *(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)(a1 + 44) + 224);
      v24 = *(unsigned __int8 *)(v14 + 2);
      v16 = v15(a1 + 44, v21);
      v17 = *(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)(a1 + 44) + 224);
      v23 = *(unsigned __int8 *)(v16 + 1);
      LOBYTE(v25) = *(_BYTE *)v17(a1 + 44, v22);
      v18 = *(_DWORD *)(a1 + 44);
      BYTE1(v25) = v23;
      BYTE2(v25) = v24;
      v19 = *(void (__thiscall **)(int, int))(v18 + 216);
      HIBYTE(v25) = v4;
      v19(a1 + 44, v25);
      sub_102366F0(v4);
      sub_102366F0(v4);
      return sub_102366F0(v4);
    }
  }
  return result;
}
